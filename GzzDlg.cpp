// GzzDlg.cpp : implementation file
//

#include "stdafx.h"
#include "防疫信息登记.h"
#include "GzzDlg.h"
#include "Insert_fangyi.h"
#include "Message_AntiepidemiSet.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CGzzDlg dialog


CGzzDlg::CGzzDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CGzzDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CGzzDlg)
	m_iscs = _T("");
	m_xingbie = _T("");
	m_yonghu = _T("");
	m_isyc = _T("");
	m_tiwen = _T("");
	//}}AFX_DATA_INIT
}


void CGzzDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CGzzDlg)
	DDX_Control(pDX, IDC_LIST_GZZ, m_list_gzz);
	DDX_Text(pDX, IDC_EDIT_ISCS, m_iscs);
	DDX_Text(pDX, IDC_EDIT_XINGBIE, m_xingbie);
	DDX_Text(pDX, IDC_EDIT_YONGHU, m_yonghu);
	DDX_Text(pDX, IDC_EDIT5_ISYC, m_isyc);
	DDX_Text(pDX, IDC_EDIT_TIWEN, m_tiwen);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CGzzDlg, CDialog)
	//{{AFX_MSG_MAP(CGzzDlg)
	ON_BN_CLICKED(IDC_BUTTON2, OnButton2)
	ON_BN_CLICKED(IDC_BUTTON_SS, OnButtonSs)
	ON_WM_PAINT()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CGzzDlg message handlers

void CGzzDlg::OnOK() 
{
	// TODO: Add extra validation here
	DispAntiepidemiInfo("");	

}

BOOL CGzzDlg::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	// TODO: Add extra initialization here
		CString strHeader[]={"用户名", "性别","时间","地点","体温","14天内是否出过省","是否有疑似症状","备注"};
	for (int nCol=0; nCol<sizeof(strHeader)/sizeof(CString); nCol++)
		m_list_gzz.InsertColumn(nCol,strHeader[nCol],LVCFMT_LEFT,100);
	m_list_gzz.SetExtendedStyle(m_list_gzz.GetExtendedStyle()|LVS_EX_FULLROWSELECT|LVS_EX_GRIDLINES);
	CBitmap m_hBitmap;
	HBITMAP hBmp = (HBITMAP)LoadImage(NULL,_T("./res/bg.bmp"),IMAGE_BITMAP,0, 0,LR_LOADFROMFILE | LR_DEFAULTCOLOR | LR_DEFAULTSIZE);
	if (hBmp != NULL) {
		m_hBitmap.DeleteObject();
		m_hBitmap.Attach(hBmp);
	}
	m_brush.CreatePatternBrush(&m_hBitmap);


	m_btnX1.LoadBitmaps(IDB_BITMAPCKZL_UP,IDB_BITMAPCKZL_DOWN);	
	m_btnX1.SubclassDlgItem(IDOK,this);
	m_btnX1.SizeToContent();
	m_btnX2.LoadBitmaps(IDB_BITMAPT_UP,IDB_BITMAPT_DOWN);
	m_btnX2.SubclassDlgItem(IDCANCEL,this);
	m_btnX2.SizeToContent();
	m_btnX3.LoadBitmaps(IDB_BITMAPB_UP,IDB_BITMAPB_DOWN);
	m_btnX3.SubclassDlgItem(IDC_BUTTON2,this);
	m_btnX3.SizeToContent();
	m_btnX4.LoadBitmaps(IDB_BITMAPS_UP,IDB_BITMAPS_DOWN);
	m_btnX4.SubclassDlgItem(IDC_BUTTON_SS,this);
	m_btnX4.SizeToContent();
	


	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}
void CGzzDlg::DeleteAllColumn()
{
	int nCount = 0;
	CHeaderCtrl* pHeaderCtrl = m_list_gzz.GetHeaderCtrl();
	if ( pHeaderCtrl!= NULL)
		nCount = pHeaderCtrl->GetItemCount();
	for (int i=0;i < nCount;i++)
		m_list_gzz.DeleteColumn(0);
}
void CGzzDlg::DispAntiepidemiInfo(CString strFilter){
	//m_list_gzz
	DeleteAllColumn();							// 删除表头
	CString strHeader[]={"用户名", "性别","时间","地点","体温","14天内是否出过省","是否有疑似症状","备注"};
	for (int nCol=0; nCol<sizeof(strHeader)/sizeof(CString); nCol++)
	m_list_gzz.InsertColumn(nCol,strHeader[nCol],LVCFMT_LEFT,100);
	m_list_gzz.DeleteAllItems();						// 删除所有的列表项
	CMessage_AntiepidemiSet sSet;
	if(strFilter==""){
		sSet.m_strFilter = strFilter;}
	else{
		sSet.m_strFilter.Format("yonghu='%s'",strFilter);
	}
	sSet.m_strSort = "yonghu";
	sSet.Open();
	int nItem = 0;
	CString str;
	while (!sSet.IsEOF()){
		m_list_gzz.InsertItem( nItem, sSet.m_yonghu);	// 插入no
		m_list_gzz.SetItemText( nItem, 1, sSet.m_xingbie);
		str=sSet.m_shijian.Format("%Y-%m-%d %H:%M:%S");
		m_list_gzz.SetItemText( nItem, 2, str);
		m_list_gzz.SetItemText( nItem, 3, sSet.m_didian);
		str.Format("%4.1f",sSet.m_tiwen);
		m_list_gzz.SetItemText( nItem, 4, str);
		if(sSet.m_shifou_chusheng){str="是";}else{str="否";}
		m_list_gzz.SetItemText( nItem, 5, str);
		if(sSet.m_shifou_yichang){str="是";}else{str="否";}
		m_list_gzz.SetItemText( nItem, 6, str);
		m_list_gzz.SetItemText( nItem, 7, sSet.m_beizhu);
		nItem++;
		sSet.MoveNext();
	}
	sSet.Close();

}
int CGzzDlg::GetListCtrlCurSel()
{
	
	POSITION pos;
	pos = m_list_gzz.GetFirstSelectedItemPosition();
	if (pos == NULL){
		MessageBox("你还没有选中列表项！");
		return -1;
	}
	return m_list_gzz.GetNextSelectedItem( pos );
}

void CGzzDlg::OnButton2() 
{
	// TODO: Add your control notification handler code here
	MessageBox("不需要的选项留空");
}

void CGzzDlg::OnButtonSs() 
{
	// TODO: Add your control notification handler code here
	UpdateData();
	CMessage_AntiepidemiSet sSet;
	CString str,str1;
	if(!m_yonghu.IsEmpty()){str+=_T("yonghu=\'");str+=_T(m_yonghu);str+=_T("\'");}
	else{
	str+=_T("yonghu like\'");str+="%";str+=_T("\'");
	}
	if(!m_xingbie.IsEmpty()){str+=" AND xingbie='";str+=m_xingbie;str+="\'";}		
	if(!m_tiwen.IsEmpty()){str+=" AND tiwen>";str+=m_tiwen;str+="";}
	if(!m_iscs.IsEmpty()){
		if(m_iscs=="是"){
			str+=" AND shifou_chusheng=";str+="1";
		}
		else
		{
			str+=" AND shifou_chusheng=";str+="0";
		}
	}
	if(!m_isyc.IsEmpty()){
		if(m_isyc=="是"){
			str+=" AND shifou_yichang=";str+="1";
		}
		else
		{
			str+=" AND shifou_yichang=";str+="0";
		}
	}


	//str.TrimLeft();
	sSet.m_strFilter=str;
	sSet.m_strSort ="yonghu";
	sSet.Open();
	int nItem = 0;
	str.Empty();
	DeleteAllColumn();							// 删除表头
	CString strHeader[]={"用户名", "性别","时间","地点","体温","14天内是否出过省","是否有疑似症状","备注"};
	for (int nCol=0; nCol<sizeof(strHeader)/sizeof(CString); nCol++)
	m_list_gzz.InsertColumn(nCol,strHeader[nCol],LVCFMT_LEFT,100);
	m_list_gzz.DeleteAllItems();						// 删除所有的列表项
	while (!sSet.IsEOF()){
		m_list_gzz.InsertItem( nItem, sSet.m_yonghu);	
		m_list_gzz.SetItemText( nItem, 1, sSet.m_xingbie);
		str=sSet.m_shijian.Format("%Y-%m-%d %H:%M:%S");
		m_list_gzz.SetItemText( nItem, 2, str);
		m_list_gzz.SetItemText( nItem, 3, sSet.m_didian);
		str.Format("%4.1f",sSet.m_tiwen);
		m_list_gzz.SetItemText( nItem, 4, str);
		if(sSet.m_shifou_chusheng){str="是";}else{str="否";}
		m_list_gzz.SetItemText( nItem, 5, str);
		if(sSet.m_shifou_yichang){str="是";}else{str="否";}
		m_list_gzz.SetItemText( nItem, 6, str);
		m_list_gzz.SetItemText( nItem, 7, sSet.m_beizhu);
		nItem++;
		sSet.MoveNext();
	}
	sSet.Close();
	
	
}

void CGzzDlg::OnPaint() 
{
	CPaintDC dc(this); // device context for painting
	
	// TODO: Add your message handler code here

	CRect rect;    
    GetClientRect(&rect);    
    CDC   dcMem;    
    dcMem.CreateCompatibleDC(&dc);    
    CBitmap   bmpBackground;    
    bmpBackground.LoadBitmap(IDB_BITMAP_BG);  //对话框的背景图片  
    BITMAP   bitmap;    
    bmpBackground.GetBitmap(&bitmap);    
    CBitmap   *pbmpOld=dcMem.SelectObject(&bmpBackground);    
	dc.StretchBlt(0,0,rect.Width(),rect.Height(),&dcMem,0,0,bitmap.bmWidth,bitmap.bmHeight,SRCCOPY);  

	// Do not call CDialog::OnPaint() for painting messages
}
