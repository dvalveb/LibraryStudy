﻿#pragma once

#include "../base/study_defs.h"

class CIniFile
{
public:
	CIniFile(VOID);
	virtual ~CIniFile(VOID);

private:
	TCHAR	mFileName[MAX_PATH];

public:
	BOOL	Open(LPCTSTR fileName);
	BOOL	Close(VOID);


	static BOOL SetValue(LPCWSTR lpcwFileName, LPCWSTR lpcwAppName, LPCWSTR lpcwKeyName, LPCWSTR lpcwValue);
	static BOOL SetValue(LPCWSTR lpcwFileName, LPCWSTR lpcwAppName, LPCWSTR lpcwKeyName, DWORD dwValue);
	static BOOL SetValue(LPCWSTR lpcwFileName, LPCWSTR lpcwAppName, LPCWSTR lpcwKeyName, FLOAT fValue);

	static BOOL GetValue(LPCWSTR lpcwFileName, LPCWSTR lpcwAppName, LPCWSTR lpcwKeyName, LPWSTR lpwValue, LPDWORD lpdwBufLen);
	static BOOL GetValue(LPCWSTR lpcwFileName, LPCWSTR lpcwAppName, LPCWSTR lpcwKeyName, LPDWORD lpdwValue);
	static BOOL GetValue(LPCWSTR lpcwFileName, LPCWSTR lpcwAppName, LPCWSTR lpcwKeyName, FLOAT* pfValue);
};
