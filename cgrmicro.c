#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
	int gdriver = DETECT ,gmode;
	int i,midx,midy;
	int stangle1 = -45, endangle1 = 0, radius = 100;
	int stangle2 =  135, endangle2 = 180;
	initgraph(&gdriver,&gmode,"C:\\TURBOC3\\BGI");

	midx = getmaxx() / 2;
	midy = getmaxy() / 2;

	for (i = 0; i < 140; i++)
	{
		// start and end angle of fan's first wing //
		if (endangle1 == 360)
		{
			stangle1 = -45;
			endangle1 = 0;
		}

		// start and end angle of fan's second wing //
		if (endangle2 == 360) {
			stangle2 = -45;
			endangle2 = 0;
		}

		// clears graphic device //
		cleardevice();
		stangle1 = stangle1 + 45;
		stangle2 = stangle2 + 45;
		endangle1 = endangle1 + 45;
		endangle2 = endangle2 + 45;

		// fan stand //
		rectangle( 175, 160, 185, 390 );

		// draws first wing of fan //
		setfillstyle(SOLID_FILL, i % 15);
		pieslice(180, 160, stangle1, endangle1, radius);

		// draws second wing of fan //
		setfillstyle(SOLID_FILL, i % 15);
		pieslice(180, 160, stangle2, endangle2, radius);

		// fan stand 2 //
		rectangle( 515, 160, 525, 390 );

		// draws first wing of fan //
		setfillstyle(SOLID_FILL, i % 15);
		pieslice(520, 160, stangle1, endangle1, radius);

		// draws second wing of fan //
		setfillstyle(SOLID_FILL, i % 15);
		pieslice(520, 160, stangle2, endangle2, radius);

		//ground//
		line(0,390,getmaxx(),390);
		line(0,392,getmaxx(),392);

		//CAR//
		setcolor(WHITE);
		circle(300+i,375,15);
		circle(400+i,375,15);
		circle(400+i,375,5);
		circle(300+i,375,5);

		line(265+i,375,285+i,375);
		line(315+i,375,385+i,375);
		line(415+i,375,435+i,375);
		line(265+i,375,265+i,350);
		line(435+i,375,435+i,350);

		line(265+i,350,300+i,345);
		line(435+i,350,400+i,345);
		line(300+i,345,315+i,325);
		line(400+i,345,385+i,325);
		line(315+i,325,385+i,325);

		line(379+i,328,352+i,328);
		line(352+i,345,352+i,328);
		line(352+i,345,377+i,345);
		line(377+i,329,377+i,345);

		//HUMAS//
		circle(10+i,335,10);         //head//
		circle( 6+i,332, 2);         //leye//
		circle(14+i,332, 2);         //reye//
		line(  6+i,338,14+i,338);    //mouth//
		line( 10+i,345,10+i,380);    //body//
		line(-10+i,355,10+i,350);    //lhand//
		line( 10+i,350,30+i,355);    //rhand//
		line(-10+i,390,10+i,380);    //lleg//
		line( 10+i,380,30+i,390);    //rleg//

		delay(100);

}

	outtextxy(50,300,"Humko bhi leke");
	outtextxy(40,310,"chaliyega bhaiya");

getch();
closegraph();

}
