#pragma once
#include "..\framework.h"
#include "..\Common\RangeValue.hpp"

__NamespaceOnce

#define __Property_All(Type, SRTy, Name, AN) \
Type Get##Name(); \
SRTy Set##Name(Type AN);

#define __Property(Type, SRTy, Name) __Property_All(Type, SRTy, Name, Name)


#define __ReadOnly_Property(Type, Name) \
Type Get##Name();

// SRTy: Set Result Type
// ITy: Item Type
// InTy: Integer Type
// InN: Integer Name
// InAN: Integer Argument Name
// IN: Main Name
// IN1: Item Name 1st
// IN2: Item Name 2nd
// IAN1: Item Arg Name 1st
// IAN2: Item Arg Name 2nd
#define __GSII(SRTy, ITy, InTy, MN, InN, InAN, IN1, IN2, IAN1, IAN2) \
__Property_All(ITy, SRTy, MN##IN1, IAN1) \
__Property_All(ITy, SRTy, MN##IN2, IAN2) \
__Property_All(ITy, SRTy, MN##InN, InAN) \

typedef bool Status;
typedef int Error;

#define __TypedefMultipleName(Type, ...) typedef Type __VA_ARGS__;

#define __Vector2(Name, V1n, V2n, Type) \
struct Name\
{ \
	Type V1n; \
	Type V2n; \
};

typedef RangeValue<int, 0, 1024> Size, Pos;

__Vector2(Rect, Width, Height, Size);
__TypedefMultipleName(Rect, Location);

__NamespaceEnd