#pragma once

template <typename T>
struct __make_const {
    typedef const T type;
};

template <typename Ret>
struct __make_const<Ret()> {
    typedef Ret type() const;
};

template <typename Ret>
struct __make_const<Ret() const> {
    typedef Ret type() const;
};

template <typename Ret>
struct __make_const<Ret() volatile> {
    typedef Ret type() const volatile;
};

template <typename Ret>
struct __make_const<Ret() const volatile> {
    typedef Ret type() const volatile;
};

template <typename T>
struct __make_volatile {
    typedef volatile T type;
};

template <typename Ret>
struct __make_volatile<Ret()> {
    typedef Ret type() volatile;
};

template <typename Ret>
struct __make_volatile<Ret() const> {
    typedef Ret type() const volatile;
};

template <typename Ret>
struct __make_volatile<Ret() volatile> {
    typedef Ret type()  volatile;
};

template <typename Ret>
struct __make_volatile<Ret() const volatile> {
    typedef Ret type() const volatile;
};

#define SPECIALIZE_TPDECL typename
#define SPECIALIZE_DECL(tp_decl) template <typename Ret, tp_decl>
#define SPECIALIZE_BODY(tp) struct __make_const<Ret(tp)> { \
    typedef Ret type(tp) const; \
};
#include "_specialize10.h"

#define SPECIALIZE_TPDECL typename
#define SPECIALIZE_DECL(tp_decl) template <typename Ret, tp_decl>
#define SPECIALIZE_BODY(tp) struct __make_const<Ret(tp) const> { \
    typedef Ret type(tp) const; \
};
#include "_specialize10.h"

#define SPECIALIZE_TPDECL typename
#define SPECIALIZE_DECL(tp_decl) template <typename Ret, tp_decl>
#define SPECIALIZE_BODY(tp) struct __make_const<Ret(tp) volatile> { \
    typedef Ret type(tp) const volatile; \
};
#include "_specialize10.h"

#define SPECIALIZE_TPDECL typename
#define SPECIALIZE_DECL(tp_decl) template <typename Ret, tp_decl>
#define SPECIALIZE_BODY(tp) struct __make_const<Ret(tp) const volatile> { \
    typedef Ret type(tp) const volatile; \
};
#include "_specialize10.h"

#define SPECIALIZE_TPDECL typename
#define SPECIALIZE_DECL(tp_decl) template <typename Ret, tp_decl>
#define SPECIALIZE_BODY(tp) struct __make_volatile<Ret(tp)> { \
    typedef Ret type(tp) volatile; \
};
#include "_specialize10.h"

#define SPECIALIZE_TPDECL typename
#define SPECIALIZE_DECL(tp_decl) template <typename Ret, tp_decl>
#define SPECIALIZE_BODY(tp) struct __make_volatile<Ret(tp) const> { \
    typedef Ret type(tp) const volatile; \
};
#include "_specialize10.h"

#define SPECIALIZE_TPDECL typename
#define SPECIALIZE_DECL(tp_decl) template <typename Ret, tp_decl>
#define SPECIALIZE_BODY(tp) struct __make_volatile<Ret(tp) volatile> { \
    typedef Ret type(tp) volatile; \
};
#include "_specialize10.h"

#define SPECIALIZE_TPDECL typename
#define SPECIALIZE_DECL(tp_decl) template <typename Ret, tp_decl>
#define SPECIALIZE_BODY(tp) struct __make_volatile<Ret(tp) const volatile> { \
    typedef Ret type(tp) const volatile; \
};
#include "_specialize10.h"

#define Const(...) typename __make_const<__VA_ARGS__>::type

#define Volatile(...) typename __make_volatile<__VA_ARGS__>::type
