#include "StdAfx.h"
#include <WinSock2.h>
#include "Utils.h"

#ifndef BASE_H
#define BASE_H

class Base
{
public:
	static Base* GetInstance();
	static Base* gInstance;

	void InitHooks();
	DWORD dwCodeSize;
	DWORD dwCodeOffset;
	DWORD dwEntryPoint;

private:
	Base();
};

#endif