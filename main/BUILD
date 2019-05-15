cc_library(
    name="hello_time",
    srcs=["hello_time.cc"],
    hdrs=["hello_time.h"],
)

cc_binary(
    name="hello_world",
    srcs=["hello_world.cc"],
    deps=[
        "hello_time",
        "//lib:hello_greet",
    ],
)
