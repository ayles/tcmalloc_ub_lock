#include <thread>
#include <cstdlib>
#include <iostream>

int main() {
    void* mem = nullptr;   

    auto f = [&mem](bool print) {
        size_t i = 0;
        while (true) {
            void* m = mem;
            mem = malloc(4096);
            free(m);
            if (print) {
                std::cout << i++ << std::endl;
            }
        }
    };

    std::thread t(f, false);
    f(true);

    return 0;
}
