#include <iostream>
#include <Windows.h>
#include <conio.h>

void outputSound(int keysValue);

int main()
{
    int keysValue = 0;

    outputSound(88);

    while(keysValue!=27)
    {
        keysValue = getch();
        outputSound(keysValue);
    }

    return 0;
}


void outputSound(int kV)
{
    switch(kV)
    {
        case 65: Beep(523.250, 100); break;
        case 87: Beep(554.370, 100); break;
        case 83: Beep(587.330, 100); break;
        case 69: Beep(622.260, 100); break;
        case 68: Beep(659.260, 100); break;
        case 70: Beep(698.460, 100); break;
        case 84: Beep(739.990, 100); break;
        case 71: Beep(783.990, 100); break;
        case 89: Beep(830.610, 100); break;
        case 72: Beep(880.000, 100); break;
        case 85: Beep(932.330, 100); break;
        case 74: Beep(987.770, 100); break;
        case 75: Beep(1046.500, 100); break;
        
    }
}