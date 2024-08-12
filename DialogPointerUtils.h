#pragma once
#include "afxwin.h"
#include "afxdialogex.h"

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

};