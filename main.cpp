#include <thread>
#include <cstdlib>
#include <iostream>

int main() {
    void* mem = nullptr;   

    auto f = [&mem]() {
        while (true) {
            void* m = mem;
            mem = malloc(4096);
            free(m);
            std::cout << "here\n";
        }
    };

    std::thread t(f);
    f();

    return 0;
}
