workspace(name = "main")
load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

# tcmalloc
http_archive(
  name = "com_google_tcmalloc",
  urls = ["https://github.com/google/tcmalloc/archive/7d97898ffe4d7a505f02ecc660faa065248546f1.zip"],
  strip_prefix = "tcmalloc-7d97898ffe4d7a505f02ecc660faa065248546f1",
)

http_archive(
    name = "com_google_absl",
    sha256 = "05012198200d750f48b46a9130b8da7569a705797fbc27fb3e07bf61f5008c32",
    strip_prefix = "abseil-cpp-322ae2420d27fc96d0a8ab1167d7de33671048df",
    urls = ["https://github.com/abseil/abseil-cpp/archive/322ae2420d27fc96d0a8ab1167d7de33671048df.zip"],
)
