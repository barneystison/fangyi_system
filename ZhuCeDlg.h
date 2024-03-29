#if !defined(AFX_ZHUCEDLG_H__0E5C0BF4_A504_4695_B3EC_3A4A900BFB29__INCLUDED_)
#define AFX_ZHUCEDLG_H__0E5C0BF4_A504_4695_B3EC_3A4A900BFB29__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// ZhuCeDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CZhuCeDlg dialog

class CZhuCeDlg : public CDialog
{
// Construction
public:
	CZhuCeDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CZhuCeDlg)
	enum { IDD = IDD_DIALOG_ZHUCE };
	CString	m_zhanghao;
	CString	m_mima;
	CString	m_queren;
	CString	m_zhucema;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CZhuCeDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	CBrush m_brush;
	CBitmapButton m_btnq;
	CBitmapButton m_btnc;
	// Generated message map functions
	//{{AFX_MSG(CZhuCeDlg)
	virtual void OnOK();
	virtual BOOL OnInitDialog();
	virtual void OnCancel();
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ZHUCEDLG_H__0E5C0BF4_A504_4695_B3EC_3A4A900BFB29__INCLUDED_)
