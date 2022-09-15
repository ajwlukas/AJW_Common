#pragma once


#ifdef AJW_KEYBOARDDLL

	#define AJW_KEYBOAR_DLLEXPORT __declspec(dllexport)

#else

	#pragma comment (lib, "ajwKeyboard.lib")
	#define AJW_KEYBOAR_DLLEXPORT __declspec(dllimport)

#endif