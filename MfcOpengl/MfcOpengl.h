
// MfcOpengl.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CMfcOpenglApp: 
// �йش����ʵ�֣������ MfcOpengl.cpp
//

class CMfcOpenglApp : public CWinApp
{
public:
	CMfcOpenglApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CMfcOpenglApp theApp;