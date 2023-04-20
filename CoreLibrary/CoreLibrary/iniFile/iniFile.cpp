#include "iniFile.h"

CIniFile::CIniFile(VOID)
{
}

CIniFile::~CIniFile(VOID)
{
}

BOOL CIniFile::Open(LPCTSTR fileName)
{
	if (!fileName)
		return FALSE;

	_tcsncpy(mFileName, fileName, MAX_PATH);

	return TRUE;
}

BOOL CIniFile::Close(VOID)
{
	return 0;
}

BOOL CIniFile::SetValue(LPCWSTR lpcwFileName, LPCWSTR lpcwAppName, LPCWSTR lpcwKeyName, LPCWSTR lpcwValue)
{
	return 0;
}

BOOL CIniFile::SetValue(LPCWSTR lpcwFileName, LPCWSTR lpcwAppName, LPCWSTR lpcwKeyName, DWORD dwValue)
{
	return 0;
}

BOOL CIniFile::SetValue(LPCWSTR lpcwFileName, LPCWSTR lpcwAppName, LPCWSTR lpcwKeyName, FLOAT fValue)
{
	return 0;
}

BOOL CIniFile::GetValue(LPCWSTR lpcwFileName, LPCWSTR lpcwAppName, LPCWSTR lpcwKeyName, LPWSTR lpwValue, LPDWORD lpdwBufLen)
{
	return 0;
}

BOOL CIniFile::GetValue(LPCWSTR lpcwFileName, LPCWSTR lpcwAppName, LPCWSTR lpcwKeyName, LPDWORD lpdwValue)
{
	return 0;
}

BOOL CIniFile::GetValue(LPCWSTR lpcwFileName, LPCWSTR lpcwAppName, LPCWSTR lpcwKeyName, FLOAT* pfValue)
{
	return 0;
}
