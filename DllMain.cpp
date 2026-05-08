#include <iostream>
#include "Windows.h"
#include "stdafx.hpp"



int __stdcall DllMain(void* ptr, int fwReason, PVOID _null) {

	if (fwReason == DLL_PROCESS_ATTACH) {
		CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)StartDedicated, NULL, 0, 0);
		Sleep(450);
	}

	return 1;
}

