#pragma once

#include "../base/stdafx.h"

class CCriticalSection
{
public:
	CCriticalSection(VOID)
	{
		InitializeCriticalSection(&mSync);
	}

	~CCriticalSection(VOID)
	{
		DeleteCriticalSection(&mSync);
	}

	inline VOID Enter(VOID)
	{
		EnterCriticalSection(&mSync);
	}

	inline VOID Leave(VOID)
	{
		LeaveCriticalSection(&mSync);
	}

private:
	CRITICAL_SECTION	mSync;
};
