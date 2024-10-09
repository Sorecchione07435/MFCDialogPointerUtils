#include "DialogPointerUtils.h"
#include "afxwin.h"

CWnd* DialogPointerUtils::GetDlgCtrl(CDialogEx* pDlg, int controlID)
{
	CWnd* pControl = (CWnd*)pDlg->GetDlgItem(controlID);
	return pControl;
}

CButton* DialogPointerUtils::GetDlgButton(CDialogEx* pDlg, int controlID)
{
	CButton* pButton = (CButton*)pDlg->GetDlgItem(controlID);
	return pButton;
}

CEdit* DialogPointerUtils::GetDlgEdit(CDialogEx* pDlg, int controlID)
{
	CEdit* pEdit = (CEdit*)pDlg->GetDlgItem(controlID);
	return pEdit;
}

CListBox* DialogPointerUtils::GetDlgListBox(CDialogEx* pDlg, int controlID)
{
	CListBox* pListBox = (CListBox*)pDlg->GetDlgItem(controlID);
	return pListBox;
}

CComboBox* DialogPointerUtils::GetDlgComboBox(CDialogEx* pDlg, int controlID)
{
	CComboBox* pComboBox = (CComboBox*)pDlg->GetDlgItem(controlID);
	return pComboBox;
}

CProgressCtrl* DialogPointerUtils::GetDlgProgressBar(CDialogEx* pDlg, int controlID)
{
	CProgressCtrl* pProgressBar = (CProgressCtrl*)pDlg->GetDlgItem(controlID);
	return pProgressBar;
}

CStatic* DialogPointerUtils::GetDlgStatic(CDialogEx* pDlg, int controlID)
{
	CStatic* pStatic = (CStatic*)pDlg->GetDlgItem(controlID);
	return pStatic;
}

CSliderCtrl* DialogPointerUtils::GetDlgSlider(CDialogEx* pDlg, int controlID)
{
	CSliderCtrl* pSliderCtrl = (CSliderCtrl*)pDlg->GetDlgItem(controlID);
	return pSliderCtrl;
}

CSpinButtonCtrl* DialogPointerUtils::GetDlgSpinButton(CDialogEx* pDlg, int controlID)
{
	CSpinButtonCtrl* pSpinButtonCtrl = (CSpinButtonCtrl*)pDlg->GetDlgItem(controlID);
	return pSpinButtonCtrl;
}

CTreeCtrl* DialogPointerUtils::GetDlgTreeCtrl(CDialogEx* pDlg, int controlID)
{
	CTreeCtrl* pTreeCtrl = (CTreeCtrl*)pDlg->GetDlgItem(controlID);
	return pTreeCtrl;
}

CTabCtrl* DialogPointerUtils::GetDlgTabCtrl(CDialogEx* pDlg, int controlID)
{
	CTabCtrl* pTabCtrl = (CTabCtrl*)pDlg->GetDlgItem(controlID);
	return pTabCtrl;
}

CListCtrl* DialogPointerUtils::GetDlgListCtrl(CDialogEx* pDlg, int controlID)
{
	CListCtrl* pListCtrl = (CListCtrl*)pDlg->GetDlgItem(controlID);
	return pListCtrl;
}

CScrollBar* DialogPointerUtils::GetDlgScrollBar(CDialogEx* pDlg, int controlID)
{
	CScrollBar* pScrollBar = (CScrollBar*)pDlg->GetDlgItem(controlID);
	return pScrollBar;
}

CString DialogPointerUtils::GetDlgCtrlTextA(CDialogEx* pDlg, int controlID)
{
	CString text;
	CWnd* pControl = (CWnd*)pDlg->GetDlgItem(controlID);
	pControl->GetWindowTextA(text);

	return text;
}

void DialogPointerUtils::SetDlgCtrlTextA(CDialogEx* pDlg, int controlID, CString text)
{
	CWnd* pControl = (CWnd*)pDlg->GetDlgItem(controlID);
	pControl->SetWindowTextA(text);
}


int DialogPointerUtils::GetDlgCtrlInt(CDialogEx * pDlg, int controlID)
{
	int value;
	CString currentText;
	CWnd* pControl = (CWnd*)pDlg->GetDlgItem(controlID);
	pControl->GetWindowTextA(currentText);
	value = _ttoi(currentText);
	return value;
}

double DialogPointerUtils::GetDlgCtrlDouble(CDialogEx * pDlg, int controlID)
{
	double value;
	CString currentText;
	CWnd* pControl = (CWnd*)pDlg->GetDlgItem(controlID);
	pControl->GetWindowTextA(currentText);
	value = _ttof(currentText);
	return value;
}

float DialogPointerUtils::GetDlgCtrlFloat(CDialogEx * pDlg, int controlID)
{
	float value;
	CString currentText;
	CWnd* pControl = (CWnd*)pDlg->GetDlgItem(controlID);
	pControl->GetWindowTextA(currentText);
	value = static_cast<float>(_ttof(currentText));
	return value;
}