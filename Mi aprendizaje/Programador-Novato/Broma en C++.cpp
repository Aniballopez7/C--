/*
TODO: FreeConsole permite tomar el control del raton
TODO: GetSysteMetrics permite tomar las medidas del monitor
TODO: GetAsyncKeyState permite detectar cuando se preciona la tecla F8
TODO: SetCursorPos permite mover el raton
*/
#include<iostream>
#include <windows.h>
using namespace std; 
int main()
{
    FreeConsole();
    srand(GetTickCount());
    int ancho=GetSystemMetrics(SM_CXSCREEN)-1;
    int alto=GetSystemMetrics(SM_CXSCREEN)-1;
    while (!GetAsyncKeyState(VK_F8)){
        SetCursorPos( (rand()%ancho)+1,( rand()%alto)+1  );
        Sleep(10);
    }
    system("\nread -p '\nPresiona Enter para continuar...' var");
}