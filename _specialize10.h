#define __specialize_concat(a, b) a ## b
#define __X(n) TPDECL __specialize_concat(__X, n)

#define SPECIALIZE_ARGS __X(1)
#include "_specialize.h"
#define SPECIALIZE_ARGS __X(1), __X(2)
#include "_specialize.h"
#define SPECIALIZE_ARGS __X(1), __X(2), __X(3)
#include "_specialize.h"
#define SPECIALIZE_ARGS __X(1), __X(2), __X(3), __X(4)
#include "_specialize.h"
#define SPECIALIZE_ARGS __X(1), __X(2), __X(3), __X(4), __X(5)
#include "_specialize.h"
#define SPECIALIZE_ARGS __X(1), __X(2), __X(3), __X(4), __X(5), __X(6)
#include "_specialize.h"
#define SPECIALIZE_ARGS __X(1), __X(2), __X(3), __X(4), __X(5), __X(6), __X(7)
#include "_specialize.h"
#define SPECIALIZE_ARGS __X(1), __X(2), __X(3), __X(4), __X(5), __X(6), __X(7), __X(8)
#include "_specialize.h"
#define SPECIALIZE_ARGS __X(1), __X(2), __X(3), __X(4), __X(5), __X(6), __X(7), __X(8), __X(9)
#include "_specialize.h"
#define SPECIALIZE_ARGS __X(1), __X(2), __X(3), __X(4), __X(5), __X(6), __X(7), __X(8), __X(9), __X(10)
#include "_specialize.h"

#undef __X
#undef __specialize_concat
#undef SPECIALIZE_TPDECL
#undef SPECIALIZE_DECL
#undef SPECIALIZE_BODY
