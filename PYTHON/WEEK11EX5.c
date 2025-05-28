#include <graphics.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    srand(time(0));
    while (!kbhit()) {
        int x = rand() % getmaxx();
        int y = rand() % getmaxy();
        setcolor(WHITE);
        circle(x, y, 1);  // Draw a small star (circle)
        delay(200);        // Twinkle speed
        cleardevice();     // Clear screen for animation
    }

    closegraph();
    return 0;
}

