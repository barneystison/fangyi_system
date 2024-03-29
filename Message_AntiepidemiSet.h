#if !defined(AFX_MESSAGE_ANTIEPIDEMISET_H__E23A8D60_D59A_4938_9AC6_3BC5CB0B5857__INCLUDED_)
#define AFX_MESSAGE_ANTIEPIDEMISET_H__E23A8D60_D59A_4938_9AC6_3BC5CB0B5857__INCLUDED_
#include <afxdb.h>
#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Message_AntiepidemiSet.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CMessage_AntiepidemiSet recordset

class CMessage_AntiepidemiSet : public CRecordset
{
public:
	CMessage_AntiepidemiSet(CDatabase* pDatabase = NULL);
	DECLARE_DYNAMIC(CMessage_AntiepidemiSet)

// Field/Param Data
	//{{AFX_FIELD(CMessage_AntiepidemiSet, CRecordset)
	CString	m_beizhu;
	CString	m_didian;
	BOOL	m_shifou_chusheng;
	BOOL	m_shifou_yichang;
	CTime	m_shijian;
	float	m_tiwen;
	CString	m_xingbie;
	CString	m_yonghu;
	//}}AFX_FIELD


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMessage_AntiepidemiSet)
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

#endif // !defined(AFX_MESSAGE_ANTIEPIDEMISET_H__E23A8D60_D59A_4938_9AC6_3BC5CB0B5857__INCLUDED_)
