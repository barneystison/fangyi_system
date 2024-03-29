#if !defined(AFX_GZZDLG_H__3E8F4577_05D2_425A_B6FC_C7DA18B2016D__INCLUDED_)
#define AFX_GZZDLG_H__3E8F4577_05D2_425A_B6FC_C7DA18B2016D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// GzzDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CGzzDlg dialog

class CGzzDlg : public CDialog
{
// Construction
public:
	CGzzDlg(CWnd* pParent = NULL);   // standard constructor
	void DispAntiepidemiInfo(CString strFilter);
	void DeleteAllColumn();
	int GetListCtrlCurSel();
// Dialog Data
	//{{AFX_DATA(CGzzDlg)
	enum { IDD = IDD_DIALOG_GZZ };
	CListCtrl	m_list_gzz;
	CString	m_iscs;
	CString	m_xingbie;
	CString	m_yonghu;
	CString	m_isyc;
	CString	m_tiwen;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CGzzDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	CBrush m_brush;
	CBitmapButton m_btnX1;
	CBitmapButton m_btnX2;
	CBitmapButton m_btnX3;
	CBitmapButton m_btnX4;
	// Generated message map functions
	//{{AFX_MSG(CGzzDlg)
	virtual void OnOK();
	virtual BOOL OnInitDialog();
	afx_msg void OnButton2();
	afx_msg void OnButtonSs();
	afx_msg void OnPaint();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_GZZDLG_H__3E8F4577_05D2_425A_B6FC_C7DA18B2016D__INCLUDED_)
