#pragma once
#include <cstddef>

template <typename T, size_t N1 = -1U, size_t N2 = -1U, size_t N3 = -1U, size_t N4 = -1U, size_t N5 = -1U, size_t N6 = -1U, size_t N7 = -1U, size_t N8 = -1U, size_t N9 = -1U, size_t N10 = -1U, size_t N11 = -1U>
struct __make_array;

template <typename T>
struct __make_array<T, -1U> {
    typedef T type[];
};

template <typename T, size_t N>
struct __make_array<T, N, -1U> {
    typedef T type[N];
};

template <typename T, size_t N1, size_t N2>
struct __make_array<T, N1, N2, -1U> {
    typedef typename __make_array<T, N2>::type type[N1];
};

template <typename T, size_t N1, size_t N2, size_t N3>
struct __make_array<T, N1, N2, N3, -1U> {
    typedef typename __make_array<T, N2, N3>::type type[N1];
};

template <typename T, size_t N1, size_t N2, size_t N3, size_t N4>
struct __make_array<T, N1, N2, N3, N4, -1U> {
    typedef typename __make_array<T, N2, N3, N4>::type type[N1];
};

template <typename T, size_t N1, size_t N2, size_t N3, size_t N4, size_t N5>
struct __make_array<T, N1, N2, N3, N4, N5, -1U> {
    typedef typename __make_array<T, N2, N3, N4, N5>::type type[N1];
};

template <typename T, size_t N1, size_t N2, size_t N3, size_t N4, size_t N5, size_t N6>
struct __make_array<T, N1, N2, N3, N4, N5, N6, -1U> {
    typedef typename __make_array<T, N2, N3, N4, N5, N6>::type type[N1];
};

template <typename T, size_t N1, size_t N2, size_t N3, size_t N4, size_t N5, size_t N6, size_t N7>
struct __make_array<T, N1, N2, N3, N4, N5, N6, N7, -1U> {
    typedef typename __make_array<T, N2, N3, N4, N5, N6, N7>::type type[N1];
};

template <typename T, size_t N1, size_t N2, size_t N3, size_t N4, size_t N5, size_t N6, size_t N7, size_t N8>
struct __make_array<T, N1, N2, N3, N4, N5, N6, N7, N8, -1U> {
    typedef typename __make_array<T, N2, N3, N4, N5, N6, N7, N8>::type type[N1];
};

template <typename T, size_t N1, size_t N2, size_t N3, size_t N4, size_t N5, size_t N6, size_t N7, size_t N8, size_t N9>
struct __make_array<T, N1, N2, N3, N4, N5, N6, N7, N8, N9, -1U> {
    typedef typename __make_array<T, N2, N3, N4, N5, N6, N7, N8, N9>::type type[N1];
};

template <typename T, size_t N1, size_t N2, size_t N3, size_t N4, size_t N5, size_t N6, size_t N7, size_t N8, size_t N9, size_t N10>
struct __make_array<T, N1, N2, N3, N4, N5, N6, N7, N8, N9, N10, -1U> {
    typedef typename __make_array<T, N2, N3, N4, N5, N6, N7, N8, N9, N10>::type type[N1];
};

#define Array(...) typename __make_array<__VA_ARGS__>::type
