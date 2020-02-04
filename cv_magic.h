#pragma once

template <typename T>
struct __make_const {
    typedef const T type;
};

template <typename Ret>
struct __make_const<Ret()> {
    typedef Ret type() const;
};

template <typename Ret, typename A1>
struct __make_const<Ret(A1)> {
    typedef Ret type(A1) const;
};

template <typename Ret, typename A1, typename A2>
struct __make_const<Ret(A1, A2)> {
    typedef Ret type(A1, A2) const;
};

template <typename Ret, typename A1, typename A2, typename A3>
struct __make_const<Ret(A1, A2, A3)> {
    typedef Ret type(A1, A2, A3) const;
};

template <typename Ret, typename A1, typename A2, typename A3, typename A4>
struct __make_const<Ret(A1, A2, A3, A4)> {
    typedef Ret type(A1, A2, A3, A4) const;
};

template <typename Ret, typename A1, typename A2, typename A3, typename A4, typename A5>
struct __make_const<Ret(A1, A2, A3, A4, A5)> {
    typedef Ret type(A1, A2, A3, A4, A5) const;
};

template <typename Ret, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6>
struct __make_const<Ret(A1, A2, A3, A4, A5, A6)> {
    typedef Ret type(A1, A2, A3, A4, A5, A6) const;
};

template <typename Ret, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7>
struct __make_const<Ret(A1, A2, A3, A4, A5, A6, A7)> {
    typedef Ret type(A1, A2, A3, A4, A5, A6, A7) const;
};

template <typename Ret, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8>
struct __make_const<Ret(A1, A2, A3, A4, A5, A6, A7, A8)> {
    typedef Ret type(A1, A2, A3, A4, A5, A6, A7, A8) const;
};

template <typename Ret, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9>
struct __make_const<Ret(A1, A2, A3, A4, A5, A6, A7, A8, A9)> {
    typedef Ret type(A1, A2, A3, A4, A5, A6, A7, A8, A9) const;
};

template <typename Ret, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10>
struct __make_const<Ret(A1, A2, A3, A4, A5, A6, A7, A8, A9, A10)> {
    typedef Ret type(A1, A2, A3, A4, A5, A6, A7, A8, A9, A10) const;
};

template <typename Ret>
struct __make_const<Ret() const> {
    typedef Ret type() const;
};

template <typename Ret, typename A1>
struct __make_const<Ret(A1) const> {
    typedef Ret type(A1) const;
};

template <typename Ret, typename A1, typename A2>
struct __make_const<Ret(A1, A2) const> {
    typedef Ret type(A1, A2) const;
};

template <typename Ret, typename A1, typename A2, typename A3>
struct __make_const<Ret(A1, A2, A3) const> {
    typedef Ret type(A1, A2, A3) const;
};

template <typename Ret, typename A1, typename A2, typename A3, typename A4>
struct __make_const<Ret(A1, A2, A3, A4) const> {
    typedef Ret type(A1, A2, A3, A4) const;
};

template <typename Ret, typename A1, typename A2, typename A3, typename A4, typename A5>
struct __make_const<Ret(A1, A2, A3, A4, A5) const> {
    typedef Ret type(A1, A2, A3, A4, A5) const;
};

template <typename Ret, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6>
struct __make_const<Ret(A1, A2, A3, A4, A5, A6) const> {
    typedef Ret type(A1, A2, A3, A4, A5, A6) const;
};

template <typename Ret, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7>
struct __make_const<Ret(A1, A2, A3, A4, A5, A6, A7) const> {
    typedef Ret type(A1, A2, A3, A4, A5, A6, A7) const;
};

template <typename Ret, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8>
struct __make_const<Ret(A1, A2, A3, A4, A5, A6, A7, A8) const> {
    typedef Ret type(A1, A2, A3, A4, A5, A6, A7, A8) const;
};

template <typename Ret, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9>
struct __make_const<Ret(A1, A2, A3, A4, A5, A6, A7, A8, A9) const> {
    typedef Ret type(A1, A2, A3, A4, A5, A6, A7, A8, A9) const;
};

template <typename Ret, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10>
struct __make_const<Ret(A1, A2, A3, A4, A5, A6, A7, A8, A9, A10) const> {
    typedef Ret type(A1, A2, A3, A4, A5, A6, A7, A8, A9, A10) const;
};

template <typename Ret>
struct __make_const<Ret() volatile> {
    typedef Ret type() const volatile;
};

template <typename Ret, typename A1>
struct __make_const<Ret(A1) volatile> {
    typedef Ret type(A1) const volatile;
};

template <typename Ret, typename A1, typename A2>
struct __make_const<Ret(A1, A2) volatile> {
    typedef Ret type(A1, A2) const volatile;
};

template <typename Ret, typename A1, typename A2, typename A3>
struct __make_const<Ret(A1, A2, A3) volatile> {
    typedef Ret type(A1, A2, A3) const volatile;
};

template <typename Ret, typename A1, typename A2, typename A3, typename A4>
struct __make_const<Ret(A1, A2, A3, A4) volatile> {
    typedef Ret type(A1, A2, A3, A4) const volatile;
};

template <typename Ret, typename A1, typename A2, typename A3, typename A4, typename A5>
struct __make_const<Ret(A1, A2, A3, A4, A5) volatile> {
    typedef Ret type(A1, A2, A3, A4, A5) const volatile;
};

template <typename Ret, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6>
struct __make_const<Ret(A1, A2, A3, A4, A5, A6) volatile> {
    typedef Ret type(A1, A2, A3, A4, A5, A6) const volatile;
};

template <typename Ret, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7>
struct __make_const<Ret(A1, A2, A3, A4, A5, A6, A7) volatile> {
    typedef Ret type(A1, A2, A3, A4, A5, A6, A7) const volatile;
};

template <typename Ret, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8>
struct __make_const<Ret(A1, A2, A3, A4, A5, A6, A7, A8) volatile> {
    typedef Ret type(A1, A2, A3, A4, A5, A6, A7, A8) const volatile;
};

template <typename Ret, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9>
struct __make_const<Ret(A1, A2, A3, A4, A5, A6, A7, A8, A9) volatile> {
    typedef Ret type(A1, A2, A3, A4, A5, A6, A7, A8, A9) const volatile;
};

template <typename Ret, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10>
struct __make_const<Ret(A1, A2, A3, A4, A5, A6, A7, A8, A9, A10) volatile> {
    typedef Ret type(A1, A2, A3, A4, A5, A6, A7, A8, A9, A10) const volatile;
};

template <typename Ret>
struct __make_const<Ret() const volatile> {
    typedef Ret type() const volatile;
};

template <typename Ret, typename A1>
struct __make_const<Ret(A1) const volatile> {
    typedef Ret type(A1) const volatile;
};

template <typename Ret, typename A1, typename A2>
struct __make_const<Ret(A1, A2) const volatile> {
    typedef Ret type(A1, A2) const volatile;
};

template <typename Ret, typename A1, typename A2, typename A3>
struct __make_const<Ret(A1, A2, A3) const volatile> {
    typedef Ret type(A1, A2, A3) const volatile;
};

template <typename Ret, typename A1, typename A2, typename A3, typename A4>
struct __make_const<Ret(A1, A2, A3, A4) const volatile> {
    typedef Ret type(A1, A2, A3, A4) const volatile;
};

template <typename Ret, typename A1, typename A2, typename A3, typename A4, typename A5>
struct __make_const<Ret(A1, A2, A3, A4, A5) const volatile> {
    typedef Ret type(A1, A2, A3, A4, A5) const volatile;
};

template <typename Ret, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6>
struct __make_const<Ret(A1, A2, A3, A4, A5, A6) const volatile> {
    typedef Ret type(A1, A2, A3, A4, A5, A6) const volatile;
};

template <typename Ret, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7>
struct __make_const<Ret(A1, A2, A3, A4, A5, A6, A7) const volatile> {
    typedef Ret type(A1, A2, A3, A4, A5, A6, A7) const volatile;
};

template <typename Ret, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8>
struct __make_const<Ret(A1, A2, A3, A4, A5, A6, A7, A8) const volatile> {
    typedef Ret type(A1, A2, A3, A4, A5, A6, A7, A8) const volatile;
};

template <typename Ret, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9>
struct __make_const<Ret(A1, A2, A3, A4, A5, A6, A7, A8, A9) const volatile> {
    typedef Ret type(A1, A2, A3, A4, A5, A6, A7, A8, A9) const volatile;
};

template <typename Ret, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10>
struct __make_const<Ret(A1, A2, A3, A4, A5, A6, A7, A8, A9, A10) const volatile> {
    typedef Ret type(A1, A2, A3, A4, A5, A6, A7, A8, A9, A10) const volatile;
};

template <typename T>
struct __make_volatile {
    typedef volatile T type;
};

template <typename Ret>
struct __make_volatile<Ret()> {
    typedef Ret type() volatile;
};

template <typename Ret, typename A1>
struct __make_volatile<Ret(A1)> {
    typedef Ret type(A1) volatile;
};

template <typename Ret, typename A1, typename A2>
struct __make_volatile<Ret(A1, A2)> {
    typedef Ret type(A1, A2) volatile;
};

template <typename Ret, typename A1, typename A2, typename A3>
struct __make_volatile<Ret(A1, A2, A3)> {
    typedef Ret type(A1, A2, A3) volatile;
};

template <typename Ret, typename A1, typename A2, typename A3, typename A4>
struct __make_volatile<Ret(A1, A2, A3, A4)> {
    typedef Ret type(A1, A2, A3, A4) volatile;
};

template <typename Ret, typename A1, typename A2, typename A3, typename A4, typename A5>
struct __make_volatile<Ret(A1, A2, A3, A4, A5)> {
    typedef Ret type(A1, A2, A3, A4, A5) volatile;
};

template <typename Ret, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6>
struct __make_volatile<Ret(A1, A2, A3, A4, A5, A6)> {
    typedef Ret type(A1, A2, A3, A4, A5, A6) volatile;
};

template <typename Ret, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7>
struct __make_volatile<Ret(A1, A2, A3, A4, A5, A6, A7)> {
    typedef Ret type(A1, A2, A3, A4, A5, A6, A7) volatile;
};

template <typename Ret, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8>
struct __make_volatile<Ret(A1, A2, A3, A4, A5, A6, A7, A8)> {
    typedef Ret type(A1, A2, A3, A4, A5, A6, A7, A8) volatile;
};

template <typename Ret, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9>
struct __make_volatile<Ret(A1, A2, A3, A4, A5, A6, A7, A8, A9)> {
    typedef Ret type(A1, A2, A3, A4, A5, A6, A7, A8, A9) volatile;
};

template <typename Ret, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10>
struct __make_volatile<Ret(A1, A2, A3, A4, A5, A6, A7, A8, A9, A10)> {
    typedef Ret type(A1, A2, A3, A4, A5, A6, A7, A8, A9, A10) volatile;
};

template <typename Ret>
struct __make_volatile<Ret() const> {
    typedef Ret type() const volatile;
};

template <typename Ret, typename A1>
struct __make_volatile<Ret(A1) const> {
    typedef Ret type(A1) const volatile;
};

template <typename Ret, typename A1, typename A2>
struct __make_volatile<Ret(A1, A2) const> {
    typedef Ret type(A1, A2) const volatile;
};

template <typename Ret, typename A1, typename A2, typename A3>
struct __make_volatile<Ret(A1, A2, A3) const> {
    typedef Ret type(A1, A2, A3) const volatile;
};

template <typename Ret, typename A1, typename A2, typename A3, typename A4>
struct __make_volatile<Ret(A1, A2, A3, A4) const> {
    typedef Ret type(A1, A2, A3, A4) const volatile;
};

template <typename Ret, typename A1, typename A2, typename A3, typename A4, typename A5>
struct __make_volatile<Ret(A1, A2, A3, A4, A5) const> {
    typedef Ret type(A1, A2, A3, A4, A5) const volatile;
};

template <typename Ret, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6>
struct __make_volatile<Ret(A1, A2, A3, A4, A5, A6) const> {
    typedef Ret type(A1, A2, A3, A4, A5, A6) const volatile;
};

template <typename Ret, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7>
struct __make_volatile<Ret(A1, A2, A3, A4, A5, A6, A7) const> {
    typedef Ret type(A1, A2, A3, A4, A5, A6, A7) const volatile;
};

template <typename Ret, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8>
struct __make_volatile<Ret(A1, A2, A3, A4, A5, A6, A7, A8) const> {
    typedef Ret type(A1, A2, A3, A4, A5, A6, A7, A8) const volatile;
};

template <typename Ret, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9>
struct __make_volatile<Ret(A1, A2, A3, A4, A5, A6, A7, A8, A9) const> {
    typedef Ret type(A1, A2, A3, A4, A5, A6, A7, A8, A9) const volatile;
};

template <typename Ret, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10>
struct __make_volatile<Ret(A1, A2, A3, A4, A5, A6, A7, A8, A9, A10) const> {
    typedef Ret type(A1, A2, A3, A4, A5, A6, A7, A8, A9, A10) const volatile;
};

template <typename Ret>
struct __make_volatile<Ret() volatile> {
    typedef Ret type() volatile;
};

template <typename Ret, typename A1>
struct __make_volatile<Ret(A1) volatile> {
    typedef Ret type(A1) volatile;
};

template <typename Ret, typename A1, typename A2>
struct __make_volatile<Ret(A1, A2) volatile> {
    typedef Ret type(A1, A2) volatile;
};

template <typename Ret, typename A1, typename A2, typename A3>
struct __make_volatile<Ret(A1, A2, A3) volatile> {
    typedef Ret type(A1, A2, A3) volatile;
};

template <typename Ret, typename A1, typename A2, typename A3, typename A4>
struct __make_volatile<Ret(A1, A2, A3, A4) volatile> {
    typedef Ret type(A1, A2, A3, A4) volatile;
};

template <typename Ret, typename A1, typename A2, typename A3, typename A4, typename A5>
struct __make_volatile<Ret(A1, A2, A3, A4, A5) volatile> {
    typedef Ret type(A1, A2, A3, A4, A5) volatile;
};

template <typename Ret, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6>
struct __make_volatile<Ret(A1, A2, A3, A4, A5, A6) volatile> {
    typedef Ret type(A1, A2, A3, A4, A5, A6) volatile;
};

template <typename Ret, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7>
struct __make_volatile<Ret(A1, A2, A3, A4, A5, A6, A7) volatile> {
    typedef Ret type(A1, A2, A3, A4, A5, A6, A7) volatile;
};

template <typename Ret, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8>
struct __make_volatile<Ret(A1, A2, A3, A4, A5, A6, A7, A8) volatile> {
    typedef Ret type(A1, A2, A3, A4, A5, A6, A7, A8) volatile;
};

template <typename Ret, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9>
struct __make_volatile<Ret(A1, A2, A3, A4, A5, A6, A7, A8, A9) volatile> {
    typedef Ret type(A1, A2, A3, A4, A5, A6, A7, A8, A9) volatile;
};

template <typename Ret, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10>
struct __make_volatile<Ret(A1, A2, A3, A4, A5, A6, A7, A8, A9, A10) volatile> {
    typedef Ret type(A1, A2, A3, A4, A5, A6, A7, A8, A9, A10) volatile;
};

template <typename Ret>
struct __make_volatile<Ret() const volatile> {
    typedef Ret type() const volatile;
};

template <typename Ret, typename A1>
struct __make_volatile<Ret(A1) const volatile> {
    typedef Ret type(A1) const volatile;
};

template <typename Ret, typename A1, typename A2>
struct __make_volatile<Ret(A1, A2) const volatile> {
    typedef Ret type(A1, A2) const volatile;
};

template <typename Ret, typename A1, typename A2, typename A3>
struct __make_volatile<Ret(A1, A2, A3) const volatile> {
    typedef Ret type(A1, A2, A3) const volatile;
};

template <typename Ret, typename A1, typename A2, typename A3, typename A4>
struct __make_volatile<Ret(A1, A2, A3, A4) const volatile> {
    typedef Ret type(A1, A2, A3, A4) const volatile;
};

template <typename Ret, typename A1, typename A2, typename A3, typename A4, typename A5>
struct __make_volatile<Ret(A1, A2, A3, A4, A5) const volatile> {
    typedef Ret type(A1, A2, A3, A4, A5) const volatile;
};

template <typename Ret, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6>
struct __make_volatile<Ret(A1, A2, A3, A4, A5, A6) const volatile> {
    typedef Ret type(A1, A2, A3, A4, A5, A6) const volatile;
};

template <typename Ret, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7>
struct __make_volatile<Ret(A1, A2, A3, A4, A5, A6, A7) const volatile> {
    typedef Ret type(A1, A2, A3, A4, A5, A6, A7) const volatile;
};

template <typename Ret, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8>
struct __make_volatile<Ret(A1, A2, A3, A4, A5, A6, A7, A8) const volatile> {
    typedef Ret type(A1, A2, A3, A4, A5, A6, A7, A8) const volatile;
};

template <typename Ret, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9>
struct __make_volatile<Ret(A1, A2, A3, A4, A5, A6, A7, A8, A9) const volatile> {
    typedef Ret type(A1, A2, A3, A4, A5, A6, A7, A8, A9) const volatile;
};

template <typename Ret, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10>
struct __make_volatile<Ret(A1, A2, A3, A4, A5, A6, A7, A8, A9, A10) const volatile> {
    typedef Ret type(A1, A2, A3, A4, A5, A6, A7, A8, A9, A10) const volatile;
};

#define Const(...) typename __make_const<__VA_ARGS__>::type

#define Volatile(...) typename __make_volatile<__VA_ARGS__>::type
