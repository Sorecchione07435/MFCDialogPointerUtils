#pragma once
#include "afxwin.h"
#include "afxdialogex.h"

#ifndef _MBCS
	#error "To use this library, enable the multibyte character set"
#endif

#ifndef _AFXDLL
	#error "To use this library you need the MFC shared dll version"
#endif

#if !defined(NDEBUG)
	#error "This library only works in Release and not in Debug, to use it switch to Release"
#endif

#if !defined(_WIN64)
	#error "This library is not 32-bit compatible, please switch your project to 64-bit to use it"
#endif

class DialogPointerUtils
{
public:
	CWnd* GetDlgCtrl(CDialogEx* pDlg, int controlID);
	CButton* GetDlgButton(CDialogEx* pDlg, int controlID);
	CEdit* GetDlgEdit(CDialogEx* pDlg, int controlID);
	CListBox* GetDlgListBox(CDialogEx* pDlg, int controlID);
	CComboBox* GetDlgComboBox(CDialogEx* pDlg, int controlID);
	CProgressCtrl* GetDlgProgressBar(CDialogEx* pDlg, int controlID);
	CStatic* GetDlgStatic(CDialogEx* pDlg, int controlID);
	CSliderCtrl* GetDlgSlider(CDialogEx* pDlg, int controlID);
	CSpinButtonCtrl* GetDlgSpinButton(CDialogEx* pDlg, int controlID);
	CTreeCtrl* GetDlgTreeCtrl(CDialogEx* pDlg, int controlID);
	CTabCtrl* GetDlgTabCtrl(CDialogEx* pDlg, int controlID);
	CListCtrl* GetDlgListCtrl(CDialogEx* pDlg, int controlID);
	CScrollBar* GetDlgScrollBar(CDialogEx* pDlg, int controlID);

	CString GetDlgCtrlTextA(CDialogEx* pDlg, int controlID);
	void SetDlgCtrlTextA(CDialogEx* pDlg, int controlID, CString text);

	int GetDlgCtrlInt(CDialogEx* pDlg, int controlID);
	double GetDlgCtrlDouble(CDialogEx* pDlg, int controlID);
	float GetDlgCtrlFloat(CDialogEx* pDlg, int controlID);

};