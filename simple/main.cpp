#include <windows.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPTSTR lpCmdLine, int nCmdShow)
{
    MessageBox(NULL,
               TEXT("Hello, world!"),
               TEXT("Information:"),
               MB_ICONINFORMATION);
    
    return 0;
}
