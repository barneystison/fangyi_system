#if !defined(AFX_JUMINGDLG_H__1B7C57B1_3436_4C9A_B117_370F9FA7CA2C__INCLUDED_)
#define AFX_JUMINGDLG_H__1B7C57B1_3436_4C9A_B117_370F9FA7CA2C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// JuMingDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CJuMingDlg dialog

class CJuMingDlg : public CDialog
{
// Construction
public:
	CJuMingDlg(CWnd* pParent = NULL);   // standard constructor
	void DispAntiepidemiInfo(CString strFilter);
	void DeleteAllColumn();
	int GetListCtrlCurSel();

// Dialog Data
	//{{AFX_DATA(CJuMingDlg)
	enum { IDD = IDD_DIALOG_JUMING };
	CListCtrl	m_list_juming;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CJuMingDlg)
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
	CBitmapButton m_btnX5;
	// Generated message map functions
	//{{AFX_MSG(CJuMingDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnButtonAdd();
	afx_msg void OnButtonShow();
	afx_msg void OnButtonDelete();
	afx_msg void OnButtonChange();
	afx_msg void OnPaint();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_JUMINGDLG_H__1B7C57B1_3436_4C9A_B117_370F9FA7CA2C__INCLUDED_)
