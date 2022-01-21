#include "main.h"
#include "System.h"

// https://glorypapa.tistory.com/18
// https://nowonbun.tistory.com/744

int APIENTRY main(_In_ HINSTANCE hInstance,
				_In_opt_ HINSTANCE hPrevInstance,
				_In_ LPWSTR    lpCmdLine,
				_In_ int       nCmdShow)
{
	System* mainWindow = new System;

	if (!mainWindow->GetNoxPlayer())
	{
		std::cout << "녹스 앱 플레이어 실행을 확인하지 못했습니다." << std::endl;
		return 0;
	}

	mainWindow->Init(hInstance);
	mainWindow->Run();
	mainWindow->Destroy();

	delete mainWindow;
	mainWindow = nullptr;

	return 0;
}