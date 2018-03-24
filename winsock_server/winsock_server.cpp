// winsock_sample.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include <process.h>

#include "simple_server.h"
#include <Windows.h>


#define SERVER_IP	"127.0.0.1"
#define SERVER_PORT	8000


int main()
{
	// 소켓 객체 생성
	cSocket socket;

	socket.InitSocket();
	socket.BindAndListen(SERVER_PORT);
	socket.StartServer();

	return 0;
}

