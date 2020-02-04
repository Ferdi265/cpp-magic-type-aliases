#pragma once
#include <cstddef>

template <typename T, size_t... Ns>
struct __make_array;

template <typename T>
struct __make_array<T> {
    using type = T[];
};

template <typename T, size_t N>
struct __make_array<T, N> {
    using type = T[N];
};

template <typename T, size_t N, size_t... Ns>
struct __make_array<T, N, Ns...> {
    using type = typename __make_array<T, Ns...>::type[N];
};

template <typename T, size_t... Ns>
using Array = typename __make_array<T, Ns...>::type;
