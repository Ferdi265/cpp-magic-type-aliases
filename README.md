# Magic Type Aliases for C++

This project contains a collection of type alias templates to simplify the
declaration of complicated types such as function pointers, pointers to arrays,
of member function pointers.

The minimum required C++ standard version for this library is C++98, though it
will only work on functions with at most 10 arguments and arrays with at most 10
dimensions due to variadic templates being a C++11 feature.

Examples can be seen in [test.cpp](/test.cpp).
