#pragma once

template <typename T>
struct __make_const {
    using type = const T;
};

template <typename Ret, typename... ArgTypes>
struct __make_const<Ret(ArgTypes...)> {
    using type = Ret(ArgTypes...) const;
};

template <typename Ret, typename... ArgTypes>
struct __make_const<Ret(ArgTypes...) const> {
    using type = Ret(ArgTypes...) const;
};

template <typename Ret, typename... ArgTypes>
struct __make_const<Ret(ArgTypes...) volatile> {
    using type = Ret(ArgTypes...) const volatile;
};

template <typename Ret, typename... ArgTypes>
struct __make_const<Ret(ArgTypes...) const volatile> {
    using type = Ret(ArgTypes...) const volatile;
};

template <typename T>
struct __make_volatile {
    using type = volatile T;
};

template <typename Ret, typename... ArgTypes>
struct __make_volatile<Ret(ArgTypes...)> {
    using type = Ret(ArgTypes...) volatile;
};

template <typename Ret, typename... ArgTypes>
struct __make_volatile<Ret(ArgTypes...) const> {
    using type = Ret(ArgTypes...) const volatile;
};

template <typename Ret, typename... ArgTypes>
struct __make_volatile<Ret(ArgTypes...) volatile> {
    using type = Ret(ArgTypes...) volatile;
};

template <typename Ret, typename... ArgTypes>
struct __make_volatile<Ret(ArgTypes...) const volatile> {
    using type = Ret(ArgTypes...) const volatile;
};

template <typename T>
using Const = typename __make_const<T>::type;

template <typename T>
using Volatile = typename __make_volatile<T>::type;
