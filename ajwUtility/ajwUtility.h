#pragma once


#define AJW_UTILITY_LIBNAME 

#ifdef AJW_UTILITY

#define AJW_UTILITY_DLLEXPORT __declspec(dllexport)

#else

#define AJW_UTILITY_DLLEXPORT __declspec(dllimport)

#endif
