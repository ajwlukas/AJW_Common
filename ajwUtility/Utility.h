#pragma once

#include <string>
#include <vector>

#include "ajwUtility.h"

namespace Utility
{
	extern "C" AJW_UTILITY_DLLEXPORT std::string  ToString(std::wstring value);
	extern "C" AJW_UTILITY_DLLEXPORT std::wstring ToWstring(std::string value);

	extern "C" AJW_UTILITY_DLLEXPORT void SplitString(std::vector<std::string>& dest, std::string origin, std::string tok);
	extern "C" AJW_UTILITY_DLLEXPORT void Replace(std::string* str, std::string comp, std::string rep);

	extern "C" AJW_UTILITY_DLLEXPORT std::wstring GetExtension(std::wstring path);
	extern "C" AJW_UTILITY_DLLEXPORT std::string GetDirectoryName(std::string path);
	extern "C" AJW_UTILITY_DLLEXPORT std::string GetFileName(std::string path);
	extern "C" AJW_UTILITY_DLLEXPORT std::string GetFileNameWithoutExtension(std::string path);

	extern "C" AJW_UTILITY_DLLEXPORT void ToUpper(std::string& value);

	extern "C" AJW_UTILITY_DLLEXPORT bool ExistFile(std::string path);
	extern "C" AJW_UTILITY_DLLEXPORT bool ExistFileW(std::wstring path);
	extern "C" AJW_UTILITY_DLLEXPORT bool ExistDirectory(std::string path);
	extern "C" AJW_UTILITY_DLLEXPORT void CreateFolders(std::string path);

};