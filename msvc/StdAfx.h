#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_DEPRECATE
#define _WINSOCK2API_

#pragma warning(disable : 4996)
#pragma warning(disable : 4099)
#pragma warning(disable : 4800)
#pragma warning(disable : 4005)
#pragma warning(disable : 4091)
#pragma warning(disable : 4101)
#pragma warning(disable : 4005)
#pragma warning(disable : 4561)
#pragma warning(disable : 4700)
#pragma warning(disable : 4793)

#include <Windows.h>
#include <string>
#include <sys/stat.h>
#include <cstdio>
#include <ctime>

#define lINFO 0
#define lWARN 1
#define lERROR 2
#define lDEBUG 4

void Logger(unsigned int lvl, char* caller, char* logline, ...);
void Log_Clear();