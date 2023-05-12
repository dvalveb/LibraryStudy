#pragma once

#pragma once

#define MAX_USER 100
#define DEFAULT_PORT 1820

#include "../../../../LibraryStudy/CoreLibrary/CoreLibrary/base/study_defs.h"
#include "../../../../LibraryStudy/CoreLibrary/CoreLibrary/iocp/iocp.h"
#include "../../../../LibraryStudy/CoreLibrary/CoreLibrary/networkSession/networkSession.h"
#include "../../../../LibraryStudy/CoreLibrary/CoreLibrary/clientSession/clientSession.h"


typedef struct _USER
{
	WCHAR szUserID[32];
	WCHAR szUserName[32];
	DWORD dwAge;
	BYTE cSex;
	WCHAR szAddress[32];
} USER;

typedef struct _COMPUTER
{
	WCHAR szComputerName[32];
	WCHAR szIPAddress[32];
	BYTE cCPUType;
	DWORD dwRam;
	DWORD dwHDD;
} COMPUTER;

typedef struct _PROGRAM
{
	WCHAR szProgramName[32];
	DWORD dwCost;
	WCHAR szComment[32];
} PROGRAM;

#include "protocol.h"