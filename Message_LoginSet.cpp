// Message_LoginSet.cpp : implementation file
//

#include "stdafx.h"
#include "防疫信息登记.h"
#include "Message_LoginSet.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMessage_LoginSet

IMPLEMENT_DYNAMIC(CMessage_LoginSet, CRecordset)

CMessage_LoginSet::CMessage_LoginSet(CDatabase* pdb)
	: CRecordset(pdb)
{
	//{{AFX_FIELD_INIT(CMessage_LoginSet)
	m_accout = _T("");
	m_password = _T("");
	m_type = _T("");
	m_nFields = 3;
	//}}AFX_FIELD_INIT
	m_nDefaultType = snapshot;
}


CString CMessage_LoginSet::GetDefaultConnect()
{
	return _T("ODBC;DSN=防疫信息登记");
}

CString CMessage_LoginSet::GetDefaultSQL()
{
	return _T("[message_login]");
}

void CMessage_LoginSet::DoFieldExchange(CFieldExchange* pFX)
{
	//{{AFX_FIELD_MAP(CMessage_LoginSet)
	pFX->SetFieldType(CFieldExchange::outputColumn);
	RFX_Text(pFX, _T("[accout]"), m_accout);
	RFX_Text(pFX, _T("[password]"), m_password);
	RFX_Text(pFX, _T("[type]"), m_type);
	//}}AFX_FIELD_MAP
}

/////////////////////////////////////////////////////////////////////////////
// CMessage_LoginSet diagnostics

#ifdef _DEBUG
void CMessage_LoginSet::AssertValid() const
{
	CRecordset::AssertValid();
}

void CMessage_LoginSet::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG
