// Insert_fangyi.cpp : implementation file
//

#include "stdafx.h"
#include "防疫信息登记.h"
#include "Insert_fangyi.h"
#include "Message_AntiepidemiSet.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CInsert_fangyi dialog


CInsert_fangyi::CInsert_fangyi(CWnd* pParent /*=NULL*/)
	: CDialog(CInsert_fangyi::IDD, pParent)
{
	m_strOKText.Empty();
	isadd=1;
	//{{AFX_DATA_INIT(CInsert_fangyi)
	m_didian = _T("");
	m_tiwen = 0.0f;
	m_yonghu = _T("");
	m_time1 = 0;
	m_time2 = 0;
	m_beizhu = _T("");
	//}}AFX_DATA_INIT
}


void CInsert_fangyi::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CInsert_fangyi)
	DDX_Control(pDX, IDOK, m_ok);
	DDX_Control(pDX, IDC_RADIO3, m_radio3);
	DDX_Control(pDX, IDC_RADIO1, m_radio1);
	DDX_Control(pDX, IDC_COMBO1, m_combo1);
	DDX_Text(pDX, IDC_EDIT_DIDIAN, m_didian);
	DDX_Text(pDX, IDC_EDIT_TIWEN, m_tiwen);
	DDX_Text(pDX, IDC_EDIT_YONGHU, m_yonghu);
	DDX_DateTimeCtrl(pDX, IDC_DATETIMEPICKER1, m_time1);
	DDX_DateTimeCtrl(pDX, IDC_DATETIMEPICKER2, m_time2);
	DDX_Text(pDX, IDC_EDIT3, m_beizhu);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CInsert_fangyi, CDialog)
	//{{AFX_MSG_MAP(CInsert_fangyi)
	ON_BN_CLICKED(IDC_BUTTON_CHANGE_F, OnButtonChangeF)
	ON_WM_CTLCOLOR()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CInsert_fangyi message handlers

BOOL CInsert_fangyi::OnInitDialog() 
{
	CDialog::OnInitDialog();
	// TODO: Add extra initialization here
	CButton* radio2=(CButton*)GetDlgItem(IDC_RADIO2);
	radio2->SetCheck(1);
	CButton* radio4=(CButton*)GetDlgItem(IDC_RADIO4);
	radio4->SetCheck(1);
	m_combo1.SetCurSel(0);
	if (!m_strOKText.IsEmpty())
		GetDlgItem( IDOK )->SetWindowText( m_strOKText );
	if(isadd){
		GetDlgItem( IDOK )->EnableWindow(TRUE);
		GetDlgItem( IDC_BUTTON_CHANGE_F )->EnableWindow(FALSE);
	}else{
		GetDlgItem( IDOK )->EnableWindow(FALSE);
		GetDlgItem( IDC_BUTTON_CHANGE_F )->EnableWindow(TRUE);
	};
	if(UserLevel==0){
		m_yonghu=myaccout;
		UpdateData(FALSE);
		GetDlgItem(IDC_EDIT_YONGHU  )->EnableWindow(FALSE);
	}
	CBitmap m_hBitmap;
	HBITMAP hBmp = (HBITMAP)LoadImage(NULL,_T("./res/bg.bmp"),IMAGE_BITMAP,0, 0,LR_LOADFROMFILE | LR_DEFAULTCOLOR | LR_DEFAULTSIZE);
	if (hBmp != NULL) {
		m_hBitmap.DeleteObject();
		m_hBitmap.Attach(hBmp);
	}
	m_brush.CreatePatternBrush(&m_hBitmap);
	/*
	m_btnX1.LoadBitmaps(IDB_BITMAPTJ_UP,IDB_BITMAPTJ_DOWN);
	m_btnX1.SubclassDlgItem(IDOK,this);
	m_btnX1.SizeToContent();
	m_btnX2.LoadBitmaps(IDB_BITMAPX_UP,IDB_BITMAPX_DOWN);
	m_btnX2.SubclassDlgItem(IDC_BUTTON_CHANGE_F,this);
	m_btnX2.SizeToContent();
	m_btnX3.LoadBitmaps(IDB_BITMAPT_UP,IDB_BITMAPT_DOWN);
	m_btnX3.SubclassDlgItem(IDCANCEL,this);
	m_btnX3.SizeToContent();
	*/
	  return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}


void CInsert_fangyi::OnOK() 
{
	// TODO: Add extra validation here
	//数据校对
	UpdateData();
	int len,index;
	CString str;
		len = m_yonghu.GetLength();
	if(len==0)
	{
		MessageBox("用户不能为空");
		return;
	}
	 len = m_didian.GetLength();
	if(len==0)
	{
		MessageBox("地点不能为空");
		return;
	}
	
	if(m_tiwen==0)
	{
		MessageBox("确认体温不能为空");
		return;
	}
	//插入数据
		CMessage_AntiepidemiSet cSet;
		cSet.Open();
		cSet.AddNew();
		//用户
		cSet.m_yonghu=m_yonghu;
		//性别
		index=m_combo1.GetCurSel();
	    m_combo1.GetLBText(index,str);
		cSet.m_xingbie=str;
		//时间
		CTime t( m_time1.GetYear(), m_time1.GetMonth(), m_time1.GetDay(), m_time2.GetHour(), m_time2.GetMinute(), m_time2.GetSecond() ); // 10:15PM March 19, 1999
		cSet.m_shijian=t;
		//地点
		cSet.m_didian=m_didian;
		//tiwen
		cSet.m_tiwen=m_tiwen;
		//是否出省
		CButton* radio2=(CButton*)GetDlgItem(IDC_RADIO2);
		if(radio2->GetCheck()){index=0;}else{index=1;}
		cSet.m_shifou_chusheng=index;
		CButton* radio4=(CButton*)GetDlgItem(IDC_RADIO4);
		if(radio4->GetCheck()){index=0;}else{index=1;}
		cSet.m_shifou_yichang=index;
		cSet.m_beizhu=m_beizhu;
		cSet.Update();
		cSet.Close();
		MessageBox("本次添加数据成功");
		CDialog::OnOK();

}



void CInsert_fangyi::OnCancel() 
{
	// TODO: Add extra cleanup here
	
	CDialog::OnCancel();
}

void CInsert_fangyi::OnButtonChangeF() 
{
	// TODO: Add your control notification handler code here
	CDialog::OnOK();
}

HBRUSH CInsert_fangyi::OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor) 
{
	return m_brush;
}
