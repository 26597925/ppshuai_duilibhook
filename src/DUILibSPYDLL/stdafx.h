// stdafx.h : ��׼ϵͳ�����ļ��İ����ļ���
// ���Ǿ���ʹ�õ��������ĵ�
// �ض�����Ŀ�İ����ļ�
//

#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             //  �� Windows ͷ�ļ����ų�����ʹ�õ���Ϣ
// Windows ͷ�ļ�: 
#include <windows.h>
#include <windowsx.h>

#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS      // ĳЩ CString ���캯��������ʽ��
#define _WTL_NO_CSTRING
#include <atlbase.h>
#include <atlstr.h>
#include <atlwin.h>
#include <atlapp.h>
#include <atlcrack.h>
#include <atlmisc.h>

// TODO:  �ڴ˴����ó�����Ҫ������ͷ�ļ�

extern HMODULE g_hModuleHookDll;