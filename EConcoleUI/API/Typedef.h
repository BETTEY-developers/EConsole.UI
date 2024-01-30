#pragma once
#include "..\framework.h"
#include "..\Common\RangeValue.hpp"

__NamespaceOnce

#pragma region Define Block
#define ___PropertyCName(Type, Name) __##Name##Type##Property
#define __PropertyCDef(Type, Name) ___PropertyCName(Type, Name) Name;
#define __PropertyC(Type, Name, Setter, Getter) \
class ___PropertyCName(Type, Name)\
{ \
public: \
	___PropertyCName(Type, Name) operator=(Type value) \
	{ \
		Setter; \
	} \
	operator Type() \
	{ \
		Getter; \
	} \
private: \
	Type m_value; \
};


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
__Property_All(ITy, SRTy, MN##InN, InAN)

#define __Vector2(V1n, V2n, Type, Name, ...) \
typedef struct Name\
{ \
	Type V1n; \
	Type V2n; \
} __VA_ARGS__;
#pragma endregion

typedef bool Status;
typedef int Error;
typedef RangeValue<int, 0, 1024> Size, Pos;

__Vector2(Width, Height, Size, Rect, Location);


__NamespaceEnd