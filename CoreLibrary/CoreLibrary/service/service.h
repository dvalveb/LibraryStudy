﻿#pragma once

#include "../base/study_defs.h"


class CService
{
public:
	CService(VOID);
	virtual ~CService(VOID);

private:
	SERVICE_STATUS m_oSvcStatus;
	SERVICE_STATUS_HANDLE m_hSvcStatus;

	WCHAR m_wszSvcName[MAX_PATH];

protected:
	virtual VOID OnStarted(VOID) = 0;
	virtual VOID OnStopped(VOID) = 0;
	
public:
	BOOL Install(LPCWSTR lpcwSvcName);
	BOOL Uninstall(LPCWSTR lpcwSvcName);

	BOOL Begin(LPWSTR lpwSvcName);
	BOOL End(VOID);

	VOID RunCallBack(DWORD dwArgCnt, LPWSTR *lpwpArg);
	VOID CtrlHandlerCallBack(DWORD dwOpCode);
};