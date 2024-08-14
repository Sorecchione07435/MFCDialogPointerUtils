# MFC Dialog Pointer Utils

DialogPointerUtils is a library that allows you to manage almost any MFC control in a dialog using functions that return a pointer, given the ID of the control. This approach greatly simplifies the management of controls in MFC dialogs, making the code cleaner and easier to maintain. It also allows you to use controls without having to create specific control variables, making it easier to use them directly and immediately.

This is a static library that can be included in any Visual C++ Win32 project especially in a dialog box

## Library Installation Guide

1) First of all download all the source code files from this repository as a ZIP file

2) After downloading the ZIP file extract it to any location
3)  Go to your project properties and add the directory where you extracted the ZIP file and add it as an additional include directory

   ```Configuration Properties -> C/C++ -> Additional Include Directories```
![Immagine 2024-08-12 095509](https://github.com/user-attachments/assets/56aa3015-b48f-495e-b62a-d5afaed4b231)
![Immagine 2024-08-12 095938](https://github.com/user-attachments/assets/0942cef7-5ab8-4ee8-a352-77eda2c0ff75)

4) Now as a last thing you need to specify the location of the library file to the linker
   
**(The .lib file is located in the debug folder, the library is already compiled and ready to use, so there is no need to compile anything)**
   
**The .lib path is Debug\DialogPointerUtils.lib**
   
This time just go to: ```Configuration Properties -> Linker -> Input -> Additional Dependecies``` and copy the library file path and set it

![Immagine 2024-08-12 100257](https://github.com/user-attachments/assets/d4d704be-9882-480f-a04c-ac8a5b3a2710)

Now click on OK then on "Apply" and OK again and we will have correctly imported the library into our project

## Usage examples:

### Importing Library Header and Declaring Class Object

Now let's include the main header file of the DialogPointerUtils library

```cpp
#include "DialogPointerUtils.h"
```

and just below we declare a new object of the DialogPointerUtils class
```cpp
DialogPointerUtils utils;
```

### Examples

1) OK now we will try to import an edittext and a button into our dialog box
![Immagine 2024-08-12 100648](https://github.com/user-attachments/assets/d31e21a3-de48-4225-8eef-a264b91c4006)

Now as you would normally do, before using the controls from code it would be necessary to create a control variable but now we can do it directly

2) Double click the button to generate the ```BN_CLICKED``` event handler

and so we will be brought to the source cpp file of the dialog in the new event i.e.:

```cpp
void CMainDlg::OnBnClickedButton1()
{
	// TODO: Add your control notification handler code here
}
```

now we will use the library method to write a text in the edittext from a returned pointer

```cpp
void CMainDlg::OnBnClickedButton1()
{
      utils.GetDlgEdit(this, IDC_EDIT1)->SetWindowText("Hello World");
}
```

Obviously, since this is a CEdit control, we should use the ```GetDlgEdit``` method

Now we will test our application

![Immagine 2024-08-12 100648](https://github.com/user-attachments/assets/4c6f621d-1bc6-4816-ae62-d8a8a93127b3)

now by clicking on the button a text will be written on the EditText, well we have used a control without having a variable

While to get a text from a control immediately we can use the function ```GetDlgCtrlTextA```

here is an example:

```cpp
void CMainDlg::OnBnClickedButton1()
{
      AfxMessageBox(utils.GetDlgCtrlTextA(this, IDC_EDIT1));
}
```

Now clicking on the button will display a message box with the text written in the EditText

![Immagine 2024-08-12 100648](https://github.com/user-attachments/assets/581be9be-516a-4b5f-a0ee-4f7c7bcf5785)


**For each type of control there is a specific method :**
- **GetDlgCtrl**: To use any MFC control.
- **GetDlgButton**: To get a pointer to a `CButton` control.
- **GetDlgEdit**: To get a pointer to a `CEdit` control.
- **GetDlgListBox**: To get a pointer to a `CListBox` control.
- **GetDlgComboBox**: To get a pointer to a `CComboBox` control.
- **GetDlgProgressBar**: To get a pointer to a `CProgressCtrl` control.
- **GetDlgStatic**: To get a pointer to a `CStatic` control.
- **GetDlgSlider**: To get a pointer to a `CSliderCtrl` control.
- **GetDlgSpinButton**: To get a pointer to a `CSpinButtonCtrl` control.
- **GetDlgTreeCtrl**: To get a pointer to a `CTreeCtrl` control.
- **GetDlgTabCtrl**: To get a pointer to a `CTabCtrl` control.
- **GetDlgListCtrl**: To get a pointer to a `CListCtrl` control.
- **GetDlgScrollBar**: To get a pointer to a `CScrollBar` control.
- **GetDlgCtrlTextA**: To get the text of a control.
- **SetDlgCtrlTextA**: To set the text of a control.
