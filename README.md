# MFC Dialog Pointer Utils

DialogPointerUtils is a library that allows you to manage almost any MFC control in a dialog using functions that return a pointer, given the ID of the control. This approach greatly simplifies the management of controls in MFC dialogs, making the code cleaner and easier to maintain. It also allows you to use controls without having to create specific control variables, making it easier to use them directly and immediately.

This is a static library that can be included in any Visual C++ Win32 project especially in a dialog box

## Library Installation Guide

1) First of all download all the source code files from this repository as a ZIP file

2) After downloading the ZIP file extract it to any location
3)  Go to your project properties and add the directory where you extracted the ZIP file and add it as an additional include directory

   ```Configuration Properties -> C/C++ -> Additional Include Directories```
![Immagine 2024-08-12 095509](https://github.com/user-attachments/assets/56aa3015-b48f-495e-b62a-d5afaed4b231)

4) Now as a last thing you need to specify the location of the library file to the linker
   This time just go to: ```Configuration Properties -> Linker -> Input```
