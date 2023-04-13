#pragma once

#include "../base/study_defs.h"

class CRegistry
{
public:
	CRegistry(VOID);
	~CRegistry(VOID);

	BOOL open(HKEY hRootKey, LPWSTR lpwSubKey);
	BOOL close();

	BOOL CreateKey(HKEY hRootKey, LPWSTR lpwSubKey);
	BOOL DeleteKey(HKEY hRootKey, LPWSTR lpwSubKey);

	BOOL SetValue(LPWSTR lpwValueName, LPWSTR lpwValue);
	BOOL SetValue(LPWSTR lpwValueName, DWORD dwValue);

	BOOL GetValue(LPWSTR lpwValueName, LPWSTR lpwValue, LPDWORD lpdwBufLen);
	BOOL GetValue(LPWSTR lpwValueName, LPDWORD lpdwValue);

	BOOL DeleteValue(LPWSTR lpwValueName);
	
private:
	HKEY m_hRootKey;
};
