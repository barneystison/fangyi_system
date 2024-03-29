#if !defined(AFX_INSERT_FANGYI_H__C45F68A0_9167_4D4D_BDB9_8627CD0E0320__INCLUDED_)
#define AFX_INSERT_FANGYI_H__C45F68A0_9167_4D4D_BDB9_8627CD0E0320__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Insert_fangyi.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CInsert_fangyi dialog

class CInsert_fangyi : public CDialog
{
// Construction
public:
	CInsert_fangyi(CWnd* pParent = NULL);   // standard constructor
	CString m_strOKText;
	int isadd;
// Dialog Data
	//{{AFX_DATA(CInsert_fangyi)
	enum { IDD = IDD_DIALOG_INSERT_FANGYI };
	CButton	m_ok;
	CButton	m_radio3;
	CButton	m_radio1;
	CComboBox	m_combo1;
	CString	m_didian;
	float	m_tiwen;
	CString	m_yonghu;
	CTime	m_time1;
	CTime	m_time2;
	CString	m_beizhu;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CInsert_fangyi)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	CBrush m_brush;
	CBitmapButton m_btnX1;
	CBitmapButton m_btnX2;
	CBitmapButton m_btnX3;
	// Generated message map functions
	//{{AFX_MSG(CInsert_fangyi)
	virtual BOOL OnInitDialog();
	virtual void OnOK();
	virtual void OnCancel();
	afx_msg void OnButtonChangeF();
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
	afx_msg void OnPaint();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_INSERT_FANGYI_H__C45F68A0_9167_4D4D_BDB9_8627CD0E0320__INCLUDED_)
