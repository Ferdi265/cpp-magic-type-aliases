#include <type_traits>
#include "magic.h"

int a[] = {1, 2, 3};
Array<int> a2 = {1, 2, 3};

int b[3] = {1, 2, 3};
Array<int, 3> b2 = {1, 2, 3};

int c[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
Array<int, 4, 3> c2 = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};

int * d = a;
Pointer<int> d2 = a;

int (*e)[3] = &b;
Pointer<Array<int, 3>> e2 = &b;

int *f[3] = {nullptr, nullptr, nullptr};
Array<Pointer<int>, 3> f2 = {nullptr, nullptr, nullptr};

int (*g)[4][3] = &c;
Pointer<Array<int, 4, 3>> g2 = &c;

void h(int);
Function<void, Args<int>> h2;

void (*i)(int) = &h;
Pointer<Function<void, Args<int>>> i2 = &h;

struct Foo {
    int x;
    int fn();
    bool constfn(int, int) const;
};
struct Foo2 {
    int x;
    Function<int, Args<>> fn;
    Const<Function<bool, Args<int, int>>> constfn;
};

int Foo::*j = &Foo::x;
MemberPointer<Foo, int> j2 = &Foo::x;

int (Foo::*k)() = &Foo::fn;
MemberPointer<Foo, Function<int, Args<>>> k2 = &Foo::fn;

bool (Foo::*l)(int, int) const = &Foo::constfn;
MemberPointer<Foo, Const<Function<bool, Args<int, int>>>> l2 = &Foo::constfn;

#define assert_same_type(a, b) static_assert(std::is_same<decltype(a), decltype(b)>::value)

assert_same_type(a, a2);
assert_same_type(b, b2);
assert_same_type(c, c2);
assert_same_type(d, d2);
assert_same_type(e, e2);
assert_same_type(f, f2);
assert_same_type(g, g2);
assert_same_type(h, h2);
assert_same_type(i, i2);
assert_same_type(j, j2);
assert_same_type(k, k2);
assert_same_type(l, l2);

void h(int) {}
int Foo::fn() { return 0; }
bool Foo::constfn(int, int) const { return false; }
int main() {}
