# Microsoft Developer Studio Project File - Name="防疫信息登记" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Application" 0x0101

CFG=防疫信息登记 - Win32 Debug
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "防疫信息登记.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "防疫信息登记.mak" CFG="防疫信息登记 - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "防疫信息登记 - Win32 Release" (based on "Win32 (x86) Application")
!MESSAGE "防疫信息登记 - Win32 Debug" (based on "Win32 (x86) Application")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
MTL=midl.exe
RSC=rc.exe

!IF  "$(CFG)" == "防疫信息登记 - Win32 Release"

# PROP BASE Use_MFC 6
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "Release"
# PROP BASE Intermediate_Dir "Release"
# PROP BASE Target_Dir ""
# PROP Use_MFC 6
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "Release"
# PROP Intermediate_Dir "Release"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MD /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_AFXDLL" /Yu"stdafx.h" /FD /c
# ADD CPP /nologo /MD /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_AFXDLL" /D "_MBCS" /Yu"stdafx.h" /FD /c
# ADD BASE MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x804 /d "NDEBUG" /d "_AFXDLL"
# ADD RSC /l 0x804 /d "NDEBUG" /d "_AFXDLL"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 /nologo /subsystem:windows /machine:I386
# ADD LINK32 /nologo /subsystem:windows /machine:I386

!ELSEIF  "$(CFG)" == "防疫信息登记 - Win32 Debug"

# PROP BASE Use_MFC 6
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "Debug"
# PROP BASE Intermediate_Dir "Debug"
# PROP BASE Target_Dir ""
# PROP Use_MFC 6
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "Debug"
# PROP Intermediate_Dir "Debug"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MDd /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_AFXDLL" /Yu"stdafx.h" /FD /GZ /c
# ADD CPP /nologo /MDd /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_AFXDLL" /D "_MBCS" /Yu"stdafx.h" /FD /GZ /c
# ADD BASE MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x804 /d "_DEBUG" /d "_AFXDLL"
# ADD RSC /l 0x804 /d "_DEBUG" /d "_AFXDLL"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 /nologo /subsystem:windows /debug /machine:I386 /pdbtype:sept
# ADD LINK32 /nologo /subsystem:windows /debug /machine:I386 /pdbtype:sept

!ENDIF 

# Begin Target

# Name "防疫信息登记 - Win32 Release"
# Name "防疫信息登记 - Win32 Debug"
# Begin Group "Source Files"

# PROP Default_Filter "cpp;c;cxx;rc;def;r;odl;idl;hpj;bat"
# Begin Source File

SOURCE=.\GlyDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\GzzDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\Insert_fangyi.cpp
# End Source File
# Begin Source File

SOURCE=.\JuMingDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\Message_AntiepidemiSet.cpp
# End Source File
# Begin Source File

SOURCE=.\Message_LoginSet.cpp
# End Source File
# Begin Source File

SOURCE=.\StdAfx.cpp
# ADD CPP /Yc"stdafx.h"
# End Source File
# Begin Source File

SOURCE=.\ZhuCeDlg.cpp
# End Source File
# Begin Source File

SOURCE=".\防疫信息登记.cpp"
# End Source File
# Begin Source File

SOURCE=".\防疫信息登记.rc"
# End Source File
# Begin Source File

SOURCE=".\防疫信息登记Dlg.cpp"
# End Source File
# End Group
# Begin Group "Header Files"

# PROP Default_Filter "h;hpp;hxx;hm;inl"
# Begin Source File

SOURCE=.\GlyDlg.h
# End Source File
# Begin Source File

SOURCE=.\GzzDlg.h
# End Source File
# Begin Source File

SOURCE=.\Insert_fangyi.h
# End Source File
# Begin Source File

SOURCE=.\JuMingDlg.h
# End Source File
# Begin Source File

SOURCE=.\Message_AntiepidemiSet.h
# End Source File
# Begin Source File

SOURCE=.\Message_LoginSet.h
# End Source File
# Begin Source File

SOURCE=.\Resource.h
# End Source File
# Begin Source File

SOURCE=.\StdAfx.h
# End Source File
# Begin Source File

SOURCE=.\ZhuCeDlg.h
# End Source File
# Begin Source File

SOURCE=".\防疫信息登记.h"
# End Source File
# Begin Source File

SOURCE=".\防疫信息登记Dlg.h"
# End Source File
# End Group
# Begin Group "Resource Files"

# PROP Default_Filter "ico;cur;bmp;dlg;rc2;rct;bin;rgs;gif;jpg;jpeg;jpe"
# Begin Source File

SOURCE=.\res\bg.bmp
# End Source File
# Begin Source File

SOURCE=.\res\buttonB_down.bmp
# End Source File
# Begin Source File

SOURCE=.\res\buttonB_up.bmp
# End Source File
# Begin Source File

SOURCE=.\res\buttonC_down.bmp
# End Source File
# Begin Source File

SOURCE=.\res\buttonC_up.bmp
# End Source File
# Begin Source File

SOURCE=.\res\buttonCKZL_down.bmp
# End Source File
# Begin Source File

SOURCE=.\res\buttonCKZL_up.bmp
# End Source File
# Begin Source File

SOURCE=.\res\buttonD_down.bmp
# End Source File
# Begin Source File

SOURCE=.\res\buttonD_up.bmp
# End Source File
# Begin Source File

SOURCE=.\res\buttonQ_down.bmp
# End Source File
# Begin Source File

SOURCE=.\res\buttonQ_up.bmp
# End Source File
# Begin Source File

SOURCE=.\res\buttonS_down.bmp
# End Source File
# Begin Source File

SOURCE=.\res\buttonS_up.bmp
# End Source File
# Begin Source File

SOURCE=.\res\buttonSCXX_down.bmp
# End Source File
# Begin Source File

SOURCE=.\res\buttonSCXX_up.bmp
# End Source File
# Begin Source File

SOURCE=.\res\buttonT_down.bmp
# End Source File
# Begin Source File

SOURCE=.\res\buttonT_up.bmp
# End Source File
# Begin Source File

SOURCE=.\res\buttonTJ_down.bmp
# End Source File
# Begin Source File

SOURCE=.\res\buttonTJ_up.bmp
# End Source File
# Begin Source File

SOURCE=.\res\buttonTJXX_down.bmp
# End Source File
# Begin Source File

SOURCE=.\res\buttonTJXX_up.bmp
# End Source File
# Begin Source File

SOURCE=.\res\buttonX_down.bmp
# End Source File
# Begin Source File

SOURCE=.\res\buttonX_up.bmp
# End Source File
# Begin Source File

SOURCE=.\res\buttonXGXX_down.bmp
# End Source File
# Begin Source File

SOURCE=.\res\buttonXGXX_up.bmp
# End Source File
# Begin Source File

SOURCE=.\res\buttonZ_down.bmp
# End Source File
# Begin Source File

SOURCE=.\res\buttonZ_up.bmp
# End Source File
# Begin Source File

SOURCE=.\res\test.bmp
# End Source File
# Begin Source File

SOURCE=".\res\防疫信息登记.ico"
# End Source File
# Begin Source File

SOURCE=".\res\防疫信息登记.rc2"
# End Source File
# End Group
# Begin Source File

SOURCE=.\ReadMe.txt
# End Source File
# End Target
# End Project
