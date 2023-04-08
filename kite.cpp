
#include<iostream>
#include<graphics.h>
int main()
{

    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");

    setcolor(YELLOW);
    setfillstyle(SOLID_FILL,YELLOW);
    line(150,200,110,260);
    line(150,200,190,260);
    line(110,260,150,320);
    line(190,260,150,320);
    floodfill(150,260,YELLOW);

    setcolor(BLACK);
    line(150,200,150,320);
    setcolor(BLACK);
    line(110,260,190,260);

    setcolor(GREEN);
    setfillstyle(SOLID_FILL,GREEN);
    line(150,320,130,350);
    line(150,320,170,350);
    line(130,350,170,350);
    floodfill(150,335,GREEN);






    getch();
    closegraph();
    return 0;
}







