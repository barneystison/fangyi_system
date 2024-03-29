// ZhuCeDlg.cpp : implementation file
//

#include "stdafx.h"
#include "������Ϣ�Ǽ�.h"
#include "ZhuCeDlg.h"
#include "Message_LoginSet.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CZhuCeDlg dialog


CZhuCeDlg::CZhuCeDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CZhuCeDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CZhuCeDlg)
	m_zhanghao = _T("");
	m_mima = _T("");
	m_queren = _T("");
	m_zhucema = _T("");
	//}}AFX_DATA_INIT
}


void CZhuCeDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CZhuCeDlg)
	DDX_Text(pDX, IDC_EDIT_ZHANGHAO, m_zhanghao);
	DDX_Text(pDX, IDC_EDIT_MIMA, m_mima);
	DDX_Text(pDX, IDC_EDIT_QUEREN, m_queren);
	DDX_Text(pDX, IDC_EDIT_ZHUCEMA, m_zhucema);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CZhuCeDlg, CDialog)
	//{{AFX_MSG_MAP(CZhuCeDlg)
	ON_WM_CTLCOLOR()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CZhuCeDlg message handlers

void CZhuCeDlg::OnOK() 
{
	// TODO: Add extra validation here
	//����Ч��

	UpdateData();
	int len = m_zhanghao.GetLength();
	if(len==0)
	{
		MessageBox("�ʺŲ���Ϊ��");
		return;
	}
	 len = m_mima.GetLength();
	if(len==0)
	{
		MessageBox("���벻��Ϊ��");
		return;
	}
	len = m_queren.GetLength();
		if(len==0)
	{
		MessageBox("ȷ�����벻��Ϊ��");
		return;
	}
	if(m_queren!=m_mima){
		MessageBox("��ȷ������");
	return;
	}
	CString str;
	CButton* radio1=(CButton*)GetDlgItem(IDC_RADIO1);
	if(radio1->GetCheck()){
		str="����";
	}
	CButton* radio2=(CButton*)GetDlgItem(IDC_RADIO2);
	if(radio2->GetCheck()){
		str="���߹�����";
		len = m_zhucema.GetLength();
		if(len==0)
		{
			MessageBox("ע���벻��Ϊ��");
			return;
		}
		if(m_zhucema!="666666"){
			MessageBox("ע�������");
			return;
		}
		
	}
	CButton* radio3=(CButton*)GetDlgItem(IDC_RADIO3);
	if(radio3->GetCheck()){
		str="����Ա";
			len = m_zhucema.GetLength();
		if(len==0)
		{
			MessageBox("ע���벻��Ϊ��");
			return;
		}
		if(m_zhucema!="666666"){
		MessageBox("ע�������");
		return;
		}
	}
	
	//�������ݿ�
		CMessage_LoginSet cSet;
		cSet.Open();
		cSet.AddNew();
		cSet.m_accout=m_zhanghao;
		cSet.m_password=m_mima;
		cSet.m_type=str;
		cSet.Update();
		cSet.Requery();
		cSet.Close();
	// �����б���ͼ
	MessageBox("ע�����");


}

BOOL CZhuCeDlg::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	// TODO: Add extra initialization here
		CButton* radio1=(CButton*)GetDlgItem(IDC_RADIO1);
		radio1->SetCheck(1);
		CBitmap m_hBitmap;
		
		HBITMAP hBmp = (HBITMAP)LoadImage(NULL,_T("./res/bg.bmp"),IMAGE_BITMAP,0, 0,LR_LOADFROMFILE | LR_DEFAULTCOLOR | LR_DEFAULTSIZE);
		if (hBmp != NULL) {
			m_hBitmap.DeleteObject();
			m_hBitmap.Attach(hBmp);
		}
	m_brush.CreatePatternBrush(&m_hBitmap);
	//��ť����
	m_btnq.LoadBitmaps(IDB_BITMAPQ_UP,IDB_BITMAPQ_DOWN);
	m_btnq.SubclassDlgItem(IDOK,this);
	m_btnq.SizeToContent();
	m_btnc.LoadBitmaps(IDB_BITMAPT_UP,IDB_BITMAPT_DOWN);
	m_btnc.SubclassDlgItem(IDCANCEL,this);
	m_btnc.SizeToContent();
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}

void CZhuCeDlg::OnCancel() 
{
	// TODO: Add extra cleanup here
	
	CDialog::OnCancel();
}

HBRUSH CZhuCeDlg::OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor) 
{
	return m_brush;
}
