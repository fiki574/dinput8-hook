#define WIN32_LEAN_AND_MEAN
#define CONSOLE_TITLE "dinput8-hook"

#include <windows.h>
#include <iostream>
#include <vector>
#include <string>
#include <io.h>
#include <stdlib.h>
#include <stdio.h>
#include "Base.h"

#pragma comment (lib, "d3d10.lib")

Base* Base::gInstance = NULL;
Base* Base::GetInstance()
{
	if (gInstance == NULL) 
        gInstance = new Base;

	return gInstance;
}

Base::Base()
{
	HANDLE hModule = GetModuleHandle(NULL);
	dwCodeSize = Utils::GetSizeOfCode(hModule);
	dwCodeOffset = Utils::OffsetToCode(hModule);
	dwEntryPoint = (DWORD)hModule + dwCodeOffset;
}

void Base::InitHooks()
{
	Utils::AllocateConsole(CONSOLE_TITLE);
	Log_Clear();
}