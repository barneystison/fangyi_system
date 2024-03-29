// Message_AntiepidemiSet.cpp : implementation file
//

#include "stdafx.h"
#include "防疫信息登记.h"
#include "Message_AntiepidemiSet.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMessage_AntiepidemiSet

IMPLEMENT_DYNAMIC(CMessage_AntiepidemiSet, CRecordset)

CMessage_AntiepidemiSet::CMessage_AntiepidemiSet(CDatabase* pdb)
	: CRecordset(pdb)
{
	//{{AFX_FIELD_INIT(CMessage_AntiepidemiSet)
	m_beizhu = _T("");
	m_didian = _T("");
	m_shifou_chusheng = FALSE;
	m_shifou_yichang = FALSE;
	m_tiwen = 0.0f;
	m_xingbie = _T("");
	m_yonghu = _T("");
	m_nFields = 8;
	//}}AFX_FIELD_INIT
	m_nDefaultType = snapshot;
}


CString CMessage_AntiepidemiSet::GetDefaultConnect()
{
	return _T("ODBC;DSN=防疫信息登记");
}

CString CMessage_AntiepidemiSet::GetDefaultSQL()
{
	return _T("[message_antiepidemic]");
}

void CMessage_AntiepidemiSet::DoFieldExchange(CFieldExchange* pFX)
{
	//{{AFX_FIELD_MAP(CMessage_AntiepidemiSet)
	pFX->SetFieldType(CFieldExchange::outputColumn);
	RFX_Text(pFX, _T("[beizhu]"), m_beizhu);
	RFX_Text(pFX, _T("[didian]"), m_didian);
	RFX_Bool(pFX, _T("[shifou_chusheng]"), m_shifou_chusheng);
	RFX_Bool(pFX, _T("[shifou_yichang]"), m_shifou_yichang);
	RFX_Date(pFX, _T("[shijian]"), m_shijian);
	RFX_Single(pFX, _T("[tiwen]"), m_tiwen);
	RFX_Text(pFX, _T("[xingbie]"), m_xingbie);
	RFX_Text(pFX, _T("[yonghu]"), m_yonghu);
	//}}AFX_FIELD_MAP
}

/////////////////////////////////////////////////////////////////////////////
// CMessage_AntiepidemiSet diagnostics

#ifdef _DEBUG
void CMessage_AntiepidemiSet::AssertValid() const
{
	CRecordset::AssertValid();
}

void CMessage_AntiepidemiSet::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG
