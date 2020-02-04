#pragma once
#include "array_magic.h"
#include "function_magic.h"
#include "cv_magic.h"

template <typename T>
struct __make_pointer {
    typedef T *type;
};

template <typename Class, typename T>
struct __make_member_pointer {
    typedef T Class::*type;
};

#define Pointer(...) typename __make_pointer<__VA_ARGS__>::type

#define MemberPointer(...) typename __make_member_pointer<__VA_ARGS__>::type
