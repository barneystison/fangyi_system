// ·ÀÒßÐÅÏ¢µÇ¼ÇDlg.h : header file
//

#if !defined(AFX_DLG_H__5F665AEE_C6FE_47C5_9B4B_22FC489CB14D__INCLUDED_)
#define AFX_DLG_H__5F665AEE_C6FE_47C5_9B4B_22FC489CB14D__INCLUDED_
#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CMyDlg dialog

class CMyDlg : public CDialog
{
// Construction
public:
	CMyDlg(CWnd* pParent = NULL);	// standard constructor
	int UserLogin;
	CString UserType;
// Dialog Data
	//{{AFX_DATA(CMyDlg)
	enum { IDD = IDD_MY_DIALOG };
	CButton	m_button_zhuce;
	CButton	m_button_denglu;
	CString	m_edit_mima_denglu;
	CString	m_edit_yonghu_denglu;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMyDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;
	CBrush m_brush;
	CBitmapButton m_btn_z;
	CBitmapButton m_btn_d;

	// Generated message map functions
	//{{AFX_MSG(CMyDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnButtonDenglu();
	afx_msg void OnButtonZhuce();
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DLG_H__5F665AEE_C6FE_47C5_9B4B_22FC489CB14D__INCLUDED_)
