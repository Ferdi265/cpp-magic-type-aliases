#pragma once

template <typename A1 = void, typename A2 = void, typename A3 = void, typename A4 = void, typename A5 = void, typename A6 = void, typename A7 = void, typename A8 = void, typename A9 = void, typename A10 = void, typename = void>
struct __make_args;

template <>
struct __make_args<void> {
    template <typename Ret>
    struct __make_func {
        typedef Ret type();
    };
};

template <typename A1>
struct __make_args<A1, void> {
    template <typename Ret>
    struct __make_func {
        typedef Ret type(A1);
    };
};

template <typename A1, typename A2>
struct __make_args<A1, A2, void> {
    template <typename Ret>
    struct __make_func {
        typedef Ret type(A1, A2);
    };
};

template <typename A1, typename A2, typename A3>
struct __make_args<A1, A2, A3, void> {
    template <typename Ret>
    struct __make_func {
        typedef Ret type(A1, A2, A3);
    };
};

template <typename A1, typename A2, typename A3, typename A4>
struct __make_args<A1, A2, A3, A4, void> {
    template <typename Ret>
    struct __make_func {
        typedef Ret type(A1, A2, A3, A4);
    };
};

template <typename A1, typename A2, typename A3, typename A4, typename A5>
struct __make_args<A1, A2, A3, A4, A5, void> {
    template <typename Ret>
    struct __make_func {
        typedef Ret type(A1, A2, A3, A4, A5);
    };
};

template <typename A1, typename A2, typename A3, typename A4, typename A5, typename A6>
struct __make_args<A1, A2, A3, A4, A5, A6, void> {
    template <typename Ret>
    struct __make_func {
        typedef Ret type(A1, A2, A3, A4, A5, A6);
    };
};

template <typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7>
struct __make_args<A1, A2, A3, A4, A5, A6, A7, void> {
    template <typename Ret>
    struct __make_func {
        typedef Ret type(A1, A2, A3, A4, A5, A6, A7);
    };
};

template <typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8>
struct __make_args<A1, A2, A3, A4, A5, A6, A7, A8, void> {
    template <typename Ret>
    struct __make_func {
        typedef Ret type(A1, A2, A3, A4, A5, A6, A7, A8);
    };
};

template <typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9>
struct __make_args<A1, A2, A3, A4, A5, A6, A7, A8, A9, void> {
    template <typename Ret>
    struct __make_func {
        typedef Ret type(A1, A2, A3, A4, A5, A6, A7, A8, A9);
    };
};

template <typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10>
struct __make_args<A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, void> {
    template <typename Ret>
    struct __make_func {
        typedef Ret type(A1, A2, A3, A4, A5, A6, A7, A8, A9, A10);
    };
};

template <typename Ret, typename Args>
struct __make_func {
    typedef typename Args::template __make_func<Ret>::type type;
};

#define Args(...) __make_args<__VA_ARGS__>

#define Function(...) typename __make_func<__VA_ARGS__>::type
