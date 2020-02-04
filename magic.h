#pragma once
#include "array_magic.h"
#include "function_magic.h"
#include "cv_magic.h"

template <typename T>
using Pointer = T*;

template <typename Class, typename T>
using MemberPointer = T Class::*;
