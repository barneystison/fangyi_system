; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CMyDlg
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "防疫信息登记.h"

ClassCount=10
Class1=CMyApp
Class2=CMyDlg
Class3=CAboutDlg

ResourceCount=8
Resource1=IDD_DIALOG_ZHUCE
Resource2=IDR_MAINFRAME
Class4=CMessage_AntiepidemiSet
Class5=CMessage_LoginSet
Resource3=IDD_ABOUTBOX
Class6=CJuMingDlg
Resource4=IDD_DIALOG_INSERT_FANGYI
Class7=CZhuCeDlg
Resource5=IDD_MY_DIALOG
Class8=CInsert_fangyi
Resource6=IDD_DIALOG_GZZ
Class9=CGzzDlg
Resource7=IDD_DIALOG_JUMING
Class10=CGlyDlg
Resource8=IDD_DIALOG_GLY

[CLS:CMyApp]
Type=0
HeaderFile=防疫信息登记.h
ImplementationFile=防疫信息登记.cpp
Filter=N

[CLS:CMyDlg]
Type=0
HeaderFile=防疫信息登记Dlg.h
ImplementationFile=防疫信息登记Dlg.cpp
Filter=D
BaseClass=CDialog
VirtualFilter=dWC
LastObject=CMyDlg

[CLS:CAboutDlg]
Type=0
HeaderFile=防疫信息登记Dlg.h
ImplementationFile=防疫信息登记Dlg.cpp
Filter=D

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[DLG:IDD_MY_DIALOG]
Type=1
Class=CMyDlg
ControlCount=10
Control1=ID_BUTTON_ZHUCE,button,1342242817
Control2=ID_BUTTON_DENGLU,button,1342242817
Control3=IDC_STATIC,static,1342308352
Control4=IDC_EDIT_YONGHU_DENGLU,edit,1350631552
Control5=IDC_STATIC,static,1342308352
Control6=IDC_EDIT_MIMA_DENGLU,edit,1350631584
Control7=IDC_STATIC,button,1342308359
Control8=IDC_RADIO1,button,1342177289
Control9=IDC_RADIO2,button,1342177289
Control10=IDC_RADIO3,button,1342177289

[CLS:CMessage_AntiepidemiSet]
Type=0
HeaderFile=Message_AntiepidemiSet.h
ImplementationFile=Message_AntiepidemiSet.cpp
BaseClass=CRecordset
Filter=N
VirtualFilter=r
LastObject=CMessage_AntiepidemiSet

[DB:CMessage_AntiepidemiSet]
DB=1
DBType=ODBC
ColumnCount=8
Column1=[yonghu], 12, 100
Column2=[xingbie], 12, 100
Column3=[shijian], 11, 16
Column4=[didian], 12, 100
Column5=[tiwen], 7, 4
Column6=[shifou_chusheng], -7, 1
Column7=[shifou_yichang], -7, 1
Column8=[beizhu], 12, 200

[CLS:CMessage_LoginSet]
Type=0
HeaderFile=Message_LoginSet.h
ImplementationFile=Message_LoginSet.cpp
BaseClass=CRecordset
Filter=N
VirtualFilter=r
LastObject=CMessage_LoginSet

[DB:CMessage_LoginSet]
DB=1
DBType=ODBC
ColumnCount=3
Column1=[accout], 12, 100
Column2=[password], 12, 100
Column3=[type], 12, 100

[DLG:IDD_DIALOG_JUMING]
Type=1
Class=CJuMingDlg
ControlCount=6
Control1=IDCANCEL,button,1342242827
Control2=IDC_LIST_JUMING,SysListView32,1350631425
Control3=IDC_BUTTON_SHOW,button,1342242827
Control4=IDC_BUTTON_ADD,button,1342242827
Control5=IDC_BUTTON_CHANGE,button,1342242827
Control6=IDC_BUTTON_DELETE,button,1342242827

[CLS:CJuMingDlg]
Type=0
HeaderFile=JuMingDlg.h
ImplementationFile=JuMingDlg.cpp
BaseClass=CDialog
Filter=D
LastObject=CJuMingDlg
VirtualFilter=dWC

[DLG:IDD_DIALOG_ZHUCE]
Type=1
Class=CZhuCeDlg
ControlCount=15
Control1=IDOK,button,1342242827
Control2=IDCANCEL,button,1342242827
Control3=IDC_STATIC,button,1342177287
Control4=IDC_STATIC,static,1342308352
Control5=IDC_EDIT_ZHANGHAO,edit,1350631552
Control6=IDC_STATIC,static,1342308352
Control7=IDC_STATIC,static,1342308352
Control8=IDC_EDIT_MIMA,edit,1350631552
Control9=IDC_EDIT_QUEREN,edit,1350631552
Control10=IDC_STATIC,button,1342308359
Control11=IDC_RADIO1,button,1342177289
Control12=IDC_RADIO2,button,1342177289
Control13=IDC_RADIO3,button,1342177289
Control14=IDC_STATIC,button,1342177287
Control15=IDC_EDIT_ZHUCEMA,edit,1350631552

[CLS:CZhuCeDlg]
Type=0
HeaderFile=ZhuCeDlg.h
ImplementationFile=ZhuCeDlg.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=CZhuCeDlg

[DLG:IDD_DIALOG_INSERT_FANGYI]
Type=1
Class=CInsert_fangyi
ControlCount=23
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242817
Control3=IDC_STATIC,button,1342177287
Control4=IDC_STATIC,static,1342308352
Control5=IDC_EDIT_YONGHU,edit,1350631552
Control6=IDC_STATIC,static,1342308352
Control7=IDC_STATIC,static,1342308352
Control8=IDC_COMBO1,combobox,1344340226
Control9=IDC_STATIC,static,1342308352
Control10=IDC_EDIT_DIDIAN,edit,1350631552
Control11=IDC_STATIC,static,1342308352
Control12=IDC_EDIT_TIWEN,edit,1350631552
Control13=IDC_DATETIMEPICKER1,SysDateTimePick32,1342242849
Control14=IDC_STATIC,button,1342308359
Control15=IDC_RADIO1,button,1342308361
Control16=IDC_RADIO2,button,1342177289
Control17=IDC_STATIC,button,1342177287
Control18=IDC_STATIC,button,1342177287
Control19=IDC_EDIT3,edit,1352732740
Control20=IDC_RADIO3,button,1342308361
Control21=IDC_RADIO4,button,1342177289
Control22=IDC_DATETIMEPICKER2,SysDateTimePick32,1342242857
Control23=IDC_BUTTON_CHANGE_F,button,1342242817

[CLS:CInsert_fangyi]
Type=0
HeaderFile=Insert_fangyi.h
ImplementationFile=Insert_fangyi.cpp
BaseClass=CDialog
Filter=D
LastObject=CInsert_fangyi
VirtualFilter=dWC

[DLG:IDD_DIALOG_GZZ]
Type=1
Class=CGzzDlg
ControlCount=24
Control1=IDOK,button,1342242827
Control2=IDCANCEL,button,1342242827
Control3=IDC_LIST_GZZ,SysListView32,1350631425
Control4=IDC_STATIC,button,1342177287
Control5=IDC_STATIC,static,1342308352
Control6=IDC_EDIT_YONGHU,edit,1350631552
Control7=IDC_STATIC,static,1342308352
Control8=IDC_STATIC,static,1342308352
Control9=IDC_EDIT_XINGBIE,edit,1350631552
Control10=IDC_STATIC,static,1342308352
Control11=IDC_STATIC,static,1342308352
Control12=IDC_EDIT_TIWEN,edit,1350631552
Control13=IDC_STATIC,static,1342308352
Control14=IDC_STATIC,static,1342308352
Control15=IDC_EDIT_ISCS,edit,1350631552
Control16=IDC_STATIC,static,1342308352
Control17=IDC_STATIC,static,1342308352
Control18=IDC_STATIC,static,1342308352
Control19=IDC_STATIC,static,1342308352
Control20=IDC_EDIT5_ISYC,edit,1350631552
Control21=IDC_STATIC,static,1342308352
Control22=IDC_STATIC,static,1342308352
Control23=IDC_BUTTON_SS,button,1342242827
Control24=IDC_BUTTON2,button,1342242827

[CLS:CGzzDlg]
Type=0
HeaderFile=GzzDlg.h
ImplementationFile=GzzDlg.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=CGzzDlg

[DLG:IDD_DIALOG_GLY]
Type=1
Class=CGlyDlg
ControlCount=26
Control1=IDOK,button,1342242827
Control2=IDCANCEL,button,1342242827
Control3=IDC_LIST_GLY,SysListView32,1350631425
Control4=IDC_BUTTON_CHANGE,button,1342242827
Control5=IDC_BUTTON_DELETE,button,1342242827
Control6=IDC_STATIC,button,1342177287
Control7=IDC_STATIC,static,1342308352
Control8=IDC_EDIT_YONGHU2,edit,1350631552
Control9=IDC_STATIC,static,1342308352
Control10=IDC_STATIC,static,1342308352
Control11=IDC_EDIT_XINGBIE,edit,1350631552
Control12=IDC_STATIC,static,1342308352
Control13=IDC_STATIC,static,1342308352
Control14=IDC_EDIT_TIWEN,edit,1350631552
Control15=IDC_STATIC,static,1342308352
Control16=IDC_STATIC,static,1342308352
Control17=IDC_EDIT_ISCS,edit,1350631552
Control18=IDC_STATIC,static,1342308352
Control19=IDC_STATIC,static,1342308352
Control20=IDC_STATIC,static,1342308352
Control21=IDC_STATIC,static,1342308352
Control22=IDC_EDIT5_ISYC,edit,1350631552
Control23=IDC_STATIC,static,1342308352
Control24=IDC_STATIC,static,1342308352
Control25=IDC_BUTTON_SS,button,1342242827
Control26=IDC_BUTTON2,button,1342242827

[CLS:CGlyDlg]
Type=0
HeaderFile=GlyDlg.h
ImplementationFile=GlyDlg.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=CGlyDlg

