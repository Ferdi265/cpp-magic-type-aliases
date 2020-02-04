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

#define SPECIALIZE_TPDECL typename
#define SPECIALIZE_DECL(tp_decl) template <tp_decl>
#define SPECIALIZE_BODY(tp) struct __make_args<tp, void> { \
    template <typename Ret> \
    struct __make_func { \
        typedef Ret type(tp); \
    }; \
};
#include "_specialize10.h"

template <typename Ret, typename Args>
struct __make_func {
    typedef typename Args::template __make_func<Ret>::type type;
};

#define Args(...) __make_args<__VA_ARGS__>

#define Function(...) typename __make_func<__VA_ARGS__>::type
