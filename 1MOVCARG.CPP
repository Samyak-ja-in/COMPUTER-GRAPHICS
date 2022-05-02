#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
clrscr();
int gdriver = DETECT,gmode;
int x,y,i;
initgraph(&gdriver,&gmode,"C:\\TC\\BGI");
outtext("made moving car using lines rectangle circle and delay function");
for(i=0;i<=100;i++)
{
line(i,400,i+300,400);
rectangle(50+i,300,300+i,200);
circle(120+i,350,50);
circle(230+i,350,50);
line(50+i,200,60+i,150);
line(300+i,200,260+i,150);
line(60+i,150,260+i,150);
delay(40);
cleardevice();
}
getch();
closegraph();
}