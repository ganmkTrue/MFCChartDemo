
// MyChartCtrlTestDlg.h : ͷ�ļ�
//

#pragma once
#include "ChartCtrl/ChartCtrl.h"
#include "../MyChartCtrlTest/ChartCtrl/ChartCtrl.h"

// CMyChartCtrlTestDlg �Ի���
class CMyChartCtrlTestDlg : public CDialogEx
{
// ����
public:
	CMyChartCtrlTestDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_MYCHARTCTRLTEST_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	//��ʾ�¶��������
	void	InitMain_Chart();
	void	drawMoving();
	double	m_HightSpeedChartArray[2096];
	double	m_X[2096];
	unsigned int m_count;
	const	size_t m_c_arrayLength;
	void	LeftMoveArray(double* ptr, size_t length, double data);
	void	RandArray(double* ptr, size_t length);
	void	AutoDraw();
	double	randf(double min, double max);
	CChartLineSerie* m_pLineSerie;
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	CChartCtrl m_Chart;
};
