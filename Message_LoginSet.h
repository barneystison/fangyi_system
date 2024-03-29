#if !defined(AFX_MESSAGE_LOGINSET_H__14581B09_0446_4E76_8ACB_1679028647DC__INCLUDED_)
#define AFX_MESSAGE_LOGINSET_H__14581B09_0446_4E76_8ACB_1679028647DC__INCLUDED_
#include <afxdb.h>
#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Message_LoginSet.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CMessage_LoginSet recordset

class CMessage_LoginSet : public CRecordset
{
public:
	CMessage_LoginSet(CDatabase* pDatabase = NULL);
	DECLARE_DYNAMIC(CMessage_LoginSet)

// Field/Param Data
	//{{AFX_FIELD(CMessage_LoginSet, CRecordset)
	CString	m_accout;
	CString	m_password;
	CString	m_type;
	//}}AFX_FIELD


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMessage_LoginSet)
	public:
	virtual CString GetDefaultConnect();    // Default connection string
	virtual CString GetDefaultSQL();    // Default SQL for Recordset
	virtual void DoFieldExchange(CFieldExchange* pFX);  // RFX support
	//}}AFX_VIRTUAL

// Implementation
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MESSAGE_LOGINSET_H__14581B09_0446_4E76_8ACB_1679028647DC__INCLUDED_)
