#include "Project1.h"
#pragma comment (lib, "User32.lib")

/*
        // CopyFile("txt.txt","txtt.txt",false);
        // DeleteFile("txtt.txt");
        // MessageBoxA(0, "Text", "info", NULL);

*/


// included windows.h, iostream, string.

// i = int
// f = float
// s = string

int main()
{
SetConsoleTitle("Autoclicker");

MessageBoxA(0, "Successfully launched autoclicker.", "information", NULL);
cout << ("you need to press F6 to force autoclicker to work.  \n");
cout << ("you need to press Escape to force autoclicker stop working. \n");

INPUT ip;

	ip.ki.wVk = MOUSEEVENTF_LEFTUP | MOUSEEVENTF_LEFTDOWN; // virtual-key code for the key
	ip.ki.dwFlags = 0;


while (true)
{
if (GetAsyncKeyState(VK_F6))
{
while (true)
{
            Sleep(1);
            mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
            mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);

    if (GetAsyncKeyState(VK_ESCAPE))
    {
    break;
}
}
}
}
return 0;
system("pause");
}
