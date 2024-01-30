#pragma once
#include "pch.h"
#include "Cursor.hpp"

__NamespaceTwice(UI)

class Screen
{
public:
	Screen();
	__GSII(Status, Size, Rect, , ClientSize, size, Width, Height, width, height);
	
	__Property(LPWSTR, DWORD, Title);

	__ReadOnly_Property(Cursor, Status, Cursor);
	__ReadOnly_Property(HWND, BufferHandle); 
private:
	HANDLE m_bufferHandle;
};

__NamespaceEnd

__NamespaceEnd
