// Client.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "../header/stdafx.h"

#define READ_PACKET(PROTOCOL)\
	S_##PROTOCOL Data;\
	READ_##PROTOCOL(Packet, Data);

// 클라이언트 통신을 담당할 CTestClientSession 개체
// CClientSession을 상속받아서 사용합니다.
class CTestClientSession : public CClientSession
{
protected:
	// 클라이언트가 접속 성공되었을때 호출되는 가상함수
	VOID OnIoConnected(VOID)
	{
		//_tprintf(_T("OnIoConnected\n"));
	}

	// 클라이언트가 접속 종료되었을때 호출되는 가상함수
	VOID OnIoDisconnected(VOID)
	{
		//_tprintf(_T("OnIoDisconnected\n"));
	}
};
