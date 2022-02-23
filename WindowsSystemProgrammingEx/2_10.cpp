#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <Windows.h>
#include <tchar.h>

//앞에 _t 붙은건 전부 MBCS 와 WBCS 동시 지원 한다고 보면됨
// UNICODE _UNICODE 는 기본포함되도록 설정되어있음
// 
//int _tmain(int argc, TCHAR* argv[])
//{
//	LPCTSTR str1 = _T("MBCS or WBCS 1"); // LPTSTR = LPWSTR | LPSTSTR = LPCWSTR
//	TCHAR str2[] = _T("MBCS or WBCS 2");
//	TCHAR str3[100];
//	TCHAR str4[50];
//
//	LPCTSTR pStr = str1;
//
//	_tprintf(_T("String size: %d\n"), sizeof(str2));
//	_tprintf(_T("String length: %d\n"), _tcslen(pStr));
//
//	_fputts(_T("Input String 1 : "), stdout);
//	_tscanf(_T("%s"), str3);
//	_fputts(_T("Input String 2 : "), stdout);
//	_tscanf(_T("%s"), str4);
//
//	_tcscat(str3, str4);
//	_tprintf(_T("String1 + String2 : %s\n"), str3);
//
//}