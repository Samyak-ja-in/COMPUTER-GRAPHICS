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
outtext("made hut using lines and rectangle");
rectangle(100,200,250,400);
rectangle(150,250,200,400);
rectangle(250,400,600,200);
line(100,200,175,100);
line(175,100,250,200);
line(175,100,570,100);
line(570,100,600,200);
rectangle(350,250,450,350);
getch();
closegraph();
}