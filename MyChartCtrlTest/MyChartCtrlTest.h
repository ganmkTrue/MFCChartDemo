
// MyChartCtrlTest.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CMyChartCtrlTestApp: 
// �йش����ʵ�֣������ MyChartCtrlTest.cpp
//

class CMyChartCtrlTestApp : public CWinApp
{
public:
	CMyChartCtrlTestApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CMyChartCtrlTestApp theApp;