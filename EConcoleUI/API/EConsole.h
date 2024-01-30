#pragma once
#include "pch.h"
#include "..\UI\Screen.hpp"

int ECMain(EConsole::UI::Screen screen);

EConsole::UI::Screen screen{};

int main()
{
	ECMain(screen);
}