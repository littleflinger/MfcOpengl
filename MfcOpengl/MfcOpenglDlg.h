
// MfcOpenglDlg.h : 头文件
//

#pragma once


// CMfcOpenglDlg 对话框
class CMfcOpenglDlg : public CDialogEx
{
// 构造
public:
	CMfcOpenglDlg(CWnd* pParent = NULL);	// 标准构造函数

	BOOL SetWindowPixelFormat(HDC hDC);  //设定像素格式
	BOOL CreateViewGLContext(HDC hDC);   //view GL Context
	void RenderScene();		//绘制场景

	HDC hrenderDC;			//设备上下文
	HGLRC hrenderRC;		//渲染上下文
	float m_yRotate;		//转速
	int PixelFormat;		//像素格式

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCOPENGL_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnTimer(UINT nIDEvent);
	DECLARE_MESSAGE_MAP()
};
