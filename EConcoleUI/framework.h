#pragma once
#define __Namespace(Name) namespace Name

#define __NamespaceOnce \
__Namespace(EConsole) \
{

#define __NamespaceTwice(Sub) \
__NamespaceOnce \
	__Namespace(Sub)\
	{

#define __NamespaceEnd }

#define ECAPI __stdcall

#define WIN32_LEAN_AND_MEAN             // 从 Windows 头文件中排除极少使用的内容
// Windows 头文件
#include <windows.h>
