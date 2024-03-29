#if !defined(AFX_GLYDLG_H__AE2B95DA_98A0_44BA_80CE_529C04C245C1__INCLUDED_)
#define AFX_GLYDLG_H__AE2B95DA_98A0_44BA_80CE_529C04C245C1__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// GlyDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CGlyDlg dialog

class CGlyDlg : public CDialog
{
// Construction
public:
	CGlyDlg(CWnd* pParent = NULL);   // standard constructor
	void DispAntiepidemiInfo(CString strFilter);
	void DeleteAllColumn();
	int GetListCtrlCurSel();

// Dialog Data
	//{{AFX_DATA(CGlyDlg)
	enum { IDD = IDD_DIALOG_GLY };
	CListCtrl	m_list_gly;
	CString	m_isyc;
	CString	m_yonghu;
	CString	m_xingbie;
	CString	m_tiwen;
	CString	m_iscs;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CGlyDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	CBitmapButton m_btnX1;
	CBitmapButton m_btnX2;
	CBitmapButton m_btnX3;
	CBitmapButton m_btnX4;
	CBitmapButton m_btnX5;
	CBitmapButton m_btnX6;
	// Generated message map functions
	//{{AFX_MSG(CGlyDlg)
	virtual void OnOK();
	virtual BOOL OnInitDialog();
	afx_msg void OnButtonChange();
	afx_msg void OnButtonDelete();
	afx_msg void OnButtonSs();
	afx_msg void OnButton2();
	afx_msg void OnPaint();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_GLYDLG_H__AE2B95DA_98A0_44BA_80CE_529C04C245C1__INCLUDED_)
