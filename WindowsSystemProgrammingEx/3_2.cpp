#include <iostream>
#include <Windows.h>
#include <tchar.h>

// 32bit �̵� 64bit �̵� ������ ���� ȣȯ��. UINT => UINT_PTR

//UINT_PTR CalDistance(UINT_PTR a, UINT_PTR b)
//{
//	return a - b;
//}
//
//int _tmain()
//{
//	INT val1 = 10;
//	INT val2 = 20;
//
//	_tprintf(_T("Position %u, %u\n"), (UINT_PTR)&val2, (UINT_PTR)&val1);
//	_tprintf(_T("distance : %u\n"), CalDistance((UINT_PTR)&val2, (UINT_PTR)&val1));
//}