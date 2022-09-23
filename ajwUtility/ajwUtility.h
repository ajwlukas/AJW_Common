#pragma once


#define AJW_UTILITY_LIBNAME 


#ifdef WIN32//x86
#ifdef _DEBUG
#define AJW_UTILITY_LIBNAME "ajwUtility_Win32Debug.lib"//Debug
#else
#define AJW_UTILITY_LIBNAME "ajwUtility_Win32Release.lib"//Release
#endif
#else//x64
#ifdef _DEBUG
#define AJW_UTILITY_LIBNAME "ajwUtility_x64Debug.lib"//Debug
#else
#define AJW_UTILITY_LIBNAME "ajwUtility_x64Release.lib"//Release
#endif
#endif


#ifdef AJW_UTILITY

#define AJW_UTILITY_DLLEXPORT __declspec(dllexport)

#else

#pragma comment (lib, AJW_UTILITY_LIBNAME)
#define AJW_UTILITY_DLLEXPORT __declspec(dllimport)

#endif
