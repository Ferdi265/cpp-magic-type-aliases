#pragma once

template <typename... ArgTypes>
struct __make_args {
    template <typename Ret>
    struct __make_func {
        using type = Ret(ArgTypes...);
    };
};

template <typename... ArgTypes>
using Args = __make_args<ArgTypes...>;

template <typename Ret, typename Args>
using Function = typename Args::template __make_func<Ret>::type;
