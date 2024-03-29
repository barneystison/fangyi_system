// 防疫信息登记Dlg.cpp : implementation file
//

#include "stdafx.h"
#include "防疫信息登记.h"
#include "防疫信息登记Dlg.h"
#include "JuMingDlg.h"
#include "ZhuCeDlg.h"
#include "Message_LoginSet.h"
#include "GzzDlg.h"
#include "GlyDlg.h"
#include <MMSYSTEM.H>
#pragma comment(lib,"winmm.lib")

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAboutDlg dialog used for App About

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Dialog Data
	//{{AFX_DATA(CAboutDlg)
	enum { IDD = IDD_ABOUTBOX };
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAboutDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	//{{AFX_MSG(CAboutDlg)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
	//{{AFX_DATA_INIT(CAboutDlg)
	//}}AFX_DATA_INIT
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAboutDlg)
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
	//{{AFX_MSG_MAP(CAboutDlg)
		// No message handlers
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMyDlg dialog

CMyDlg::CMyDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CMyDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CMyDlg)
	m_edit_mima_denglu = _T("");
	m_edit_yonghu_denglu = _T("");
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMyDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CMyDlg)
	DDX_Control(pDX, ID_BUTTON_ZHUCE, m_button_zhuce);
	DDX_Control(pDX, ID_BUTTON_DENGLU, m_button_denglu);
	DDX_Text(pDX, IDC_EDIT_MIMA_DENGLU, m_edit_mima_denglu);
	DDX_Text(pDX, IDC_EDIT_YONGHU_DENGLU, m_edit_yonghu_denglu);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CMyDlg, CDialog)
	//{{AFX_MSG_MAP(CMyDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(ID_BUTTON_DENGLU, OnButtonDenglu)
	ON_BN_CLICKED(ID_BUTTON_ZHUCE, OnButtonZhuce)
	ON_WM_CTLCOLOR()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMyDlg message handlers

BOOL CMyDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here
	CButton* radio=(CButton*)GetDlgItem(IDC_RADIO1);
	radio->SetCheck(1);
	//add bg
	CBitmap m_hBitmap;
	HBITMAP hBmp = (HBITMAP)LoadImage(NULL,_T("./res/bg.bmp"),IMAGE_BITMAP,0, 0,LR_LOADFROMFILE | LR_DEFAULTCOLOR | LR_DEFAULTSIZE);
	if (hBmp != NULL) {
		m_hBitmap.DeleteObject();
		m_hBitmap.Attach(hBmp);
	}
	m_brush.CreatePatternBrush(&m_hBitmap);
	//播放音乐
	PlaySound("./res/bg.wav",NULL,SND_FILENAME|SND_ASYNC);
	//按钮美化
	m_btn_z.LoadBitmaps(IDB_BITMAPZ_UP);
	m_btn_z.SubclassDlgItem(ID_BUTTON_ZHUCE,this);
	m_btn_z.SizeToContent();		
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CMyDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CMyDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CMyDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CMyDlg::OnButtonDenglu() 
{
	// TODO: Add your control notification handler code here

	//数据有效性效验
		//帐号密码不能为空
	UpdateData(); 
	int len = m_edit_yonghu_denglu.GetLength();
	if(len==0)
	{
		MessageBox("帐号不能为空");
		return;
	}
	 len = m_edit_mima_denglu.GetLength();
	if(len==0)
	{
		MessageBox("密码不能为空");
		return;
	}
	//核对帐号密码	 
    //m_edit_yonghu_denglu.TrimLeft();    
    CMessage_LoginSet sSet;	               
    sSet.m_strFilter.Format("accout='%s'",m_edit_yonghu_denglu);
	//获取用户类型
	CButton* radio=(CButton*)GetDlgItem(IDC_RADIO1);
	if(radio->GetCheck()){
		UserType="居民";
	}
	CButton* radio1=(CButton*)GetDlgItem(IDC_RADIO2);
	if(radio1->GetCheck()){
		UserType="防疫工作者";
	}
	CButton* radio2=(CButton*)GetDlgItem(IDC_RADIO3);
	if(radio2->GetCheck()){
		UserType="管理员";
	}
	sSet.Open();   
	

    while (!sSet.IsEOF())         
	{
		if (sSet.m_password==m_edit_mima_denglu&&sSet.m_type==UserType)
		{
			UserLogin=1;				// 移动到第一个记录处
			break;
		}
		sSet.MoveNext();
					// 下移一个记录
		
	}
	 sSet.Close(); 
	 if(UserLogin!=1){
		MessageBox("请仔细核对登陆信息");
		return;
	 }
	
	 if(UserType=="居民"){
		//MessageBox("我是居民");
		 UserLevel=0;
		 myaccout=m_edit_yonghu_denglu;
		 CJuMingDlg dlg;
		CDialog::OnCancel();
		dlg.DoModal();
	}
	if(UserType=="防疫工作者"){
		//MessageBox("我是防疫工作者");
		UserLevel=1;
		myaccout="";
		CGzzDlg dlg;
		CDialog::OnCancel();
		dlg.DoModal();
	}
	if(UserType=="管理员"){
		//MessageBox("我是管理员");
		UserLevel=2;
		myaccout="";
		CGlyDlg dlg;
		CDialog::OnCancel();
		dlg.DoModal();
	}

		//MessageBox("我是管理员");
		

	 

}

void CMyDlg::OnButtonZhuce() 
{
	// TODO: Add your control notification handler code here
	CZhuCeDlg dlg;
	dlg.DoModal();
	
}

HBRUSH CMyDlg::OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor) 
{

	return m_brush;

}
