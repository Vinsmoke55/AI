//labsheet 1 of AI
//agent
#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
int color;
int greenlight()
{
	int i,j;
	color=GREEN;
	
	//for the car body
	for(i=0;i<400;i++)
	{
		line(5+i,420,5+i,450);
		line(5+i,420,65+i,420);
		line (65+i,420,65+i,390);
		line (65+i,390,105+i,390);
		line(105+i,390,130+i,420);
		line(130+i,420,160+i,425);
		line(160+i,425,160+i,450);
		line(5+i,450,15+i,450);
		line(160+i,450,150+i,450);
		line(55+i,450,110+i,450);
		circle(130+i,455,20);
		circle(35+i,455,20);
		
		//for car window
		line(75+i,400,75+i,420);
		line(100+i,400,100+i,420);
		line(75+i,400,100+i,400);
		line(75+i,420,100+i,420);
		
		//for traffic light
		line(1000,477,1000,350);
		line(1010,477,1010,350);
		line(985,350,1025,350);
		line(985,350,985,250);
		line(1025,350,1025,250);
		line(985,250,1025,250);
		circle(1005,266,10);
		circle(1005,299,10);
		circle(1005,332,10);
		setfillstyle(SOLID_FILL,color);
		floodfill(1005,332,15);
		
		//countdown clock
		line(1025,260,1050,260);
		line(1025,290,1050,290);
		line(1050,260,1050,290);
		settextstyle(8,0,1);
		outtextxy(1033,265,"0");
		
		//for the road
		for(j=0;j<=10;j++)
		{
			line(0,477+j,1500,477+j);	
		}
		delay(10);
		cleardevice();
	
	}
	
}

//when the light is orange the car slows down
int orangelight()
{
	int i,j;
	color=14;
	
	//for the car
	for(i=400;i<700;i++)
	{
		line(5+i,420,5+i,450);
		line(5+i,420,65+i,420);
		line (65+i,420,65+i,390);
		line (65+i,390,105+i,390);
		line(105+i,390,130+i,420);
		line(130+i,420,160+i,425);
		line(160+i,425,160+i,450);
		line(5+i,450,15+i,450);
		line(160+i,450,150+i,450);
		line(55+i,450,110+i,450);
		circle(130+i,455,20);
		circle(35+i,455,20);
		
		//for car window
		line(75+i,400,75+i,420);
		line(100+i,400,100+i,420);
		line(75+i,400,100+i,400);
		line(75+i,420,100+i,420);
		
		//for traffic light
		line(1000,477,1000,350);
		line(1010,477,1010,350);
		line(985,350,1025,350);
		line(985,350,985,250);
		line(1025,350,1025,250);
		line(985,250,1025,250);
		circle(1005,266,10);
		circle(1005,299,10);
		circle(1005,332,10);
		setfillstyle(SOLID_FILL,color);
		floodfill(1005,299,15);
		
		//countdown clock
		line(1025,260,1050,260);
		line(1025,290,1050,290);
		line(1050,260,1050,290);
		settextstyle(8,0,1);
		outtextxy(1033,265,"0");
		
		//for the road
		for(j=0;j<=10;j++)
		{
			line(0,477+j,1500,477+j);		
		}
		delay(10);
		cleardevice();
	
	}
	
}

//when the light is red the car stops for a certain duration and
//the color is changed to green 
//and checks the color and if it is green then the car moves forward
int redLightAndCheck()
{
	int i,j,k;
	color=RED;
	
	//for the car

	line(5+699,420,5+699,450);
	line(5+699,420,65+699,420);
	line (65+699,420,65+699,390);
	line (65+699,390,105+699,390);
	line(105+699,390,130+699,420);
	line(130+699,420,160+699,425);
	line(160+699,425,160+699,450);
	line(5+699,450,15+699,450);
	line(160+699,450,150+699,450);
	line(55+699,450,110+699,450);
	circle(130+699,455,20);
	circle(35+699,455,20);
	
	//for car window
	line(75+699,400,75+699,420);
	line(100+699,400,100+699,420);
	line(75+699,400,100+699,400);
	line(75+699,420,100+699,420);
		
	//for traffic light
	line(1000,477,1000,350);
	line(1010,477,1010,350);
	line(985,350,1025,350);
	line(985,350,985,250);
	line(1025,350,1025,250);
	line(985,250,1025,250);
	circle(1005,266,10);
	circle(1005,299,10);
	circle(1005,332,10);
	setfillstyle(SOLID_FILL,color);
	floodfill(1005,266,15);
		
	//countdown clock
	line(1025,260,1050,260);
	line(1025,290,1050,290);
	line(1050,260,1050,290);
		
	//for the road
	for(j=0;j<=10;j++)
	{
		line(0,477+j,1500,477+j);		
	}
	settextstyle(8,0,1);
	outtextxy(1033,265,"9");
	delay(1000);
	settextstyle(8,0,1);
	outtextxy(1033,265,"8");
	delay(1000);
	settextstyle(8,0,1);
	outtextxy(1033,265,"7");
	delay(1000);
	settextstyle(8,0,1);
	outtextxy(1033,265,"6");
	delay(1000);
	settextstyle(8,0,1);
	outtextxy(1033,265,"5");
	delay(1000);
	settextstyle(8,0,1);
	outtextxy(1033,265,"4");
	delay(1000);
	settextstyle(8,0,1);
	outtextxy(1033,265,"3");
	delay(1000);
	settextstyle(8,0,1);
	outtextxy(1033,265,"2");
	delay(1000);
	settextstyle(8,0,1);
	outtextxy(1033,265,"1");
	delay(1000);
	settextstyle(8,0,1);
	outtextxy(1033,265,"0");
	cleardevice();
	color=GREEN;
	if(color=GREEN)
	{

		int i,j;
		//for the car
		for(i=699;i<1400;i++)
		{
			line(5+i,420,5+i,450);
			line(5+i,420,65+i,420);
			line (65+i,420,65+i,390);
			line (65+i,390,105+i,390);
			line(105+i,390,130+i,420);
			line(130+i,420,160+i,425);
			line(160+i,425,160+i,450);
			line(5+i,450,15+i,450);
			line(160+i,450,150+i,450);
			line(55+i,450,110+i,450);
			circle(130+i,455,20);
			circle(35+i,455,20);
			
			//for car window
			line(75+i,400,75+i,420);
			line(100+i,400,100+i,420);
			line(75+i,400,100+i,400);
			line(75+i,420,100+i,420);
			
			//for traffic light
			line(1000,477,1000,350);
			line(1010,477,1010,350);
			line(985,350,1025,350);
			line(985,350,985,250);
			line(1025,350,1025,250);
			line(985,250,1025,250);
			circle(1005,266,10);
			circle(1005,299,10);
			circle(1005,332,10);
			setfillstyle(SOLID_FILL,color);
			floodfill(1005,332,15);
			
			//countdown clock
			line(1025,260,1050,260);
			line(1025,290,1050,290);
			line(1050,260,1050,290);
			settextstyle(8,0,1);
			outtextxy(1033,265,"0");
			
			//for the road
			for(j=0;j<=10;j++)
			{
				line(0,477+j,1500,477+j);		
			}
			
			cleardevice();
		
		}
	}
	
}
int main()
{

	int gd=DETECT,gm;
	initgraph(&gd,&gm,"");
	greenlight();
	orangelight();
	redLightAndCheck();
	getch();
	closegraph();
}
