#pragma once
#include "pch.h"

__NamespaceTwice(UI)

class Screen
{
public:
	Screen();

	__GSII(Status, Size, Rect, , ClientSize, size, Width, Height, width, height);
	__GSII(Status, Pos, Location, Cursor, Location, location, X, Y, X, Y);
	
	__Property(LPWSTR, DWORD, Title);

	__ReadOnly_Property(HWND, BufferHandle); 
private:
	HANDLE m_bufferHandle;
};

__NamespaceEnd

__NamespaceEnd
