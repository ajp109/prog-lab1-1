#include "mbed.h"

int main()
{
    int x = 4;
    x = 6;
    int y;
    y = 2*x;
    x = 7;
    
    printf("x:%d y:%d\n", x, y);
    
    // Do nothing, forever, when the program is complete
    while (true) sleep();
}
