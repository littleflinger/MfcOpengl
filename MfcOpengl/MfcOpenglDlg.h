
// MfcOpenglDlg.h : ͷ�ļ�
//

#pragma once


// CMfcOpenglDlg �Ի���
class CMfcOpenglDlg : public CDialogEx
{
// ����
public:
	CMfcOpenglDlg(CWnd* pParent = NULL);	// ��׼���캯��

	BOOL SetWindowPixelFormat(HDC hDC);  //�趨���ظ�ʽ
	BOOL CreateViewGLContext(HDC hDC);   //view GL Context
	void RenderScene();		//���Ƴ���

	HDC hrenderDC;			//�豸������
	HGLRC hrenderRC;		//��Ⱦ������
	float m_yRotate;		//ת��
	int PixelFormat;		//���ظ�ʽ

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCOPENGL_DIALOG };
#endif

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
	afx_msg void OnTimer(UINT nIDEvent);
	DECLARE_MESSAGE_MAP()
};
