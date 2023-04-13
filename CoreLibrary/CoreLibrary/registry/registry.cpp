#include "registry.h"

CRegistry::CRegistry(VOID)
{
}

CRegistry::~CRegistry(VOID)
{
}

BOOL CRegistry::open(HKEY hRootKey, LPWSTR lpwSubKey)
{
	return 0;
}

BOOL CRegistry::close()
{
	return 0;
}

BOOL CRegistry::CreateKey(HKEY hRootKey, LPWSTR lpwSubKey)
{
	return 0;
}

BOOL CRegistry::DeleteKey(HKEY hRootKey, LPWSTR lpwSubKey)
{
	return 0;
}

BOOL CRegistry::SetValue(LPWSTR lpwValueName, LPWSTR lpwValue)
{
	return 0;
}

BOOL CRegistry::SetValue(LPWSTR lpwValueName, DWORD dwValue)
{
	return 0;
}

BOOL CRegistry::GetValue(LPWSTR lpwValueName, LPWSTR lpwValue, LPDWORD lpdwBufLen)
{
	return 0;
}

BOOL CRegistry::GetValue(LPWSTR lpwValueName, LPDWORD lpdwValue)
{
	return 0;
}

BOOL CRegistry::DeleteValue(LPWSTR lpwValueName)
{
	return 0;
}
