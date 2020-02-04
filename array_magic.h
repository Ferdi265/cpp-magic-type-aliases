#pragma once
#include <cstddef>

template <typename T, size_t N1 = -1U, size_t N2 = -1U, size_t N3 = -1U, size_t N4 = -1U, size_t N5 = -1U, size_t N6 = -1U, size_t N7 = -1U, size_t N8 = -1U, size_t N9 = -1U, size_t N10 = -1U, size_t N11 = -1U, size_t N12 = -1U, size_t N13 = -1U>
struct __make_array;

template <typename T>
struct __make_array<T, -1U> {
    typedef T type[];
};

template <typename T, size_t N>
struct __make_array<T, N, -1U> {
    typedef T type[N];
};

#define SPECIALIZE_TPDECL size_t
#define SPECIALIZE_DECL(tp_decl) template <typename T, size_t N1, tp_decl>
#define SPECIALIZE_BODY(tp) struct __make_array<T, N1, tp, -1U> { \
    typedef typename __make_array<T, tp>::type type[N1]; \
};
#include "_specialize10.h"

#define Array(...) typename __make_array<__VA_ARGS__>::type
