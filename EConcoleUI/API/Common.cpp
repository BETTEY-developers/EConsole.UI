#include "pch.h"
#include "EConsoleAPI.h"

int __lastError = 0;

__NamespaceOnce

EXTERN_C_START

DECAPI_A0(Error, GetECLastError)
{
	return __lastError;
}

DECAPI_A1(Status, SetECLastError, Error, error)
{
	__lastError = error;
	return true;
}

EXTERN_C_END

__NamespaceEnd