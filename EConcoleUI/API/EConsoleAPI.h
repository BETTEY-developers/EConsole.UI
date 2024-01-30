#pragma once
#include "pch.h"

__NamespaceOnce

#define DECAPI_A0(Type, Name) Type ECAPI Name()
#define DECAPI_A1(Type, Name, A0Type, A0Name) Type ECAPI Name(A0Type A0Name)

EXTERN_C_START

DECAPI_A0(Error, GetECLastError);
DECAPI_A1(Status, SetECLastError, Error, error);

EXTERN_C_END

__NamespaceEnd