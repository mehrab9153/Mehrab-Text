#include<iostream>
#include<conio.h>
#include<graphics.h>

int main()     {
	int gd=DETECT,gm,i;
	initgraph(&gd,&gm,"");

        //For M
    line(50,50,50,90);
    line(50,50,60,70);
    line(60,70,70,50);
    line(70,50,70,90);

    //For E
    line(80,50,80,90);
    line(80,50,100,50);
    line(80,70,100,70);
    line(80,90,100,90);

    //For H
    line(110,50,110,90);
    line(130,50,130,90);
    line(110,70,130,70);

    //For R
    line(140,50,140,90);
    line(140,50,160,50);
    line(160,50,160,70);
    line(140,70,160,70);
    line(140,70,160,90);

    //For A
    line(180,50,170,90);
    line(180,50,190,90);
    line(175,70,185,70);

    //For B
    line(200,50,200,90);
    line(200,50,220,50);
    line(200,70,220,70);
    line(200,90,220,90);
    line(220,50,220,90);

    //For C
    line(50,110,50,150);
    line(50,110,70,110);
    line(50,150,70,150);

    //For S
    line(85,110,105,110);
    line(85,110,85,130);
    line(85,130,105,130);
    line(105,130,105,150);
    line(105,150,85,150);

    //For E
    line(120,110,120,150);
    line(120,110,135,110);
    line(120,130,135,130);
    line(120,150,135,150);

    //For 2
    line(150,110,170,110);
    line(170,110,170,130);
    line(170,130,150,130);
    line(150,130,150,150);
    line(150,150,170,150);

    //For 0
    line(185,110,185,150);
    line(185,110,200,110);
    line(185,150,200,150);
    line(200,110,200,150);

    //For 0
    line(215,110,215,150);
    line(215,110,230,110);
    line(215,150,230,150);
    line(230,110,230,150);

    //For 1
    line(245,110,245,150);

    //For 0
    line(260,110,260,150);
    line(260,110,275,110);
    line(260,150,275,150);
    line(275,110,275,150);

    //For 1
    line(290,110,290,150);

    //For 9
    line(310,110,330,110);
    line(330,110,330,130);
    line(310,110,310,130);
    line(310,130,330,130);
    line(330,130,330,150);

    //For 1
    line(345,110,345,150);

    //For 5
    line(360,110,380,110);
    line(360,110,360,130);
    line(360,130,380,130);
    line(380,130,380,150);
    line(360,150,380,150);

    //For 3
    line(410,110,410,150);
    line(410,110,390,110);
    line(410,130,390,130);
    line(410,150,390,150);



			line(100,85,80,140);
			line(100,85,120,140);
			line(20,140,80,140);
			line(120,140,180,140);
			line(60,175,20,140);
			line(60,175,45,230);
			line(45,230,100,190);
			line(155,230,100,190);
			line(155,230,140,175);
			line(140,175,180,140);
        getch();
	closegraph();
}
