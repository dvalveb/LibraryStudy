#pragma once

#pragma comment(lib,"Ws2_32.lib")

#include <winsock2.h>
#include <ws2tcpip.h>
#include <mswsock.h>

#include <windows.h>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>
#include <time.h>
#include <shlobj.h>
#include <dbghelp.h>
#include <assert.h>
#include <iostream>
#include <vector>
#include <list>
#include < tchar.h >
#include <process.h>
//#include <WinSock2.h>
//
//#pragma comment(lib, "ws2_32.lib")




#define _CRT_SECURE_NO_WARNINGS

#define MAX_BUF_LEN	1024
#define MAX_BUF_LEN_EXTRA MAX_BUF_LEN * 4
#define MAX_BUFFER_LENGTH	4096

#ifdef _SERVER_SIDE
#define MAX_QUEUE_LENGTH	50
#else
#define MAX_QUEUE_LENGTH	500
#endif

#define MAX_PROFILE_SAMPLES		50

#define MAX_LOG_LENGTH 1024
#define SERVER_LOG_FOLDER L"D:\workspacs\Study\LibraryStudy\CoreLibrary\%s"

#define LOGFOLDER_NAME g_oUtilMisc._GetLogFolderName()
#define COMPUTER_NAME g_oUtilMisc._GetComputerName()

#define M2W(lpSrc, lpwDest, dwBufLen) g_oUtilMisc._M2W(lpSrc, lpwDest, dwBufLen)
#define W2M(lpwSrc, lpDest, dwBufLen) g_oUtilMisc._W2M(lpwSrc, lpDest, dwBufLen)

enum IO_TYPE
{
	IO_ACCEPT,
	IO_READ,
	IO_WRITE
};


typedef struct _OVERLAPPED_EX
{
	OVERLAPPED	Overlapped;
	IO_TYPE		IoType;
	VOID* Object;
} OVERLAPPED_EX;


class CUtilMisc
{
public:
	CUtilMisc()
	{
		ZeroMemory(m_wszLogFolderName, sizeof(m_wszLogFolderName));
		ZeroMemory(m_wszComputerName, sizeof(m_wszComputerName));

		WCHAR wszExeFullPathName[MAX_PATH] = { 0, };
		if (!GetModuleFileName(NULL, wszExeFullPathName, MAX_PATH))
			return;

		WCHAR wszExeFolderName[MAX_PATH] = { 0, };
		LPWSTR lpwExeFileName = NULL;
		WCHAR wszExeFileName[MAX_PATH] = { 0, };

		if (!GetFullPathName(wszExeFullPathName, MAX_PATH, wszExeFolderName, &lpwExeFileName))
			return;

		wcsncpy_s(wszExeFileName, lpwExeFileName, wcslen(lpwExeFileName) - 4);

		DWORD dwComputerNameLen = MAX_PATH;
		if (!GetComputerName(m_wszComputerName, &dwComputerNameLen))
			return;

		_snwprintf_s(m_wszLogFolderName, MAX_PATH, L"C:\\Log\\FTO\\%s", wszExeFileName);
		if (SHCreateDirectoryEx(NULL, m_wszLogFolderName, NULL) != ERROR_SUCCESS)
			return;
	}

	LPWSTR _GetLogFolderName(VOID) { return m_wszLogFolderName; }
	LPWSTR _GetComputerName(VOID) { return m_wszComputerName; }

	LPWSTR _M2W(LPCSTR lpSrc, LPWSTR lpwDest, DWORD dwBufLen)
	{
		MultiByteToWideChar(CP_ACP, 0, lpSrc, -1, lpwDest, dwBufLen);
		return lpwDest;
	}

	LPSTR _W2M(LPWSTR lpwSrc, LPSTR lpDest, DWORD dwBufLen)
	{
		WideCharToMultiByte(CP_ACP, 0, lpwSrc, -1, lpDest, dwBufLen, NULL, NULL);
		return lpDest;
	}

private:
	WCHAR m_wszLogFolderName[MAX_PATH];
	WCHAR m_wszComputerName[MAX_PATH];
};

static CUtilMisc g_oUtilMisc;

