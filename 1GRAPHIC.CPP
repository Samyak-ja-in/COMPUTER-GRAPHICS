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
line(50,50,50,70);
line(50,70,90,70);
line(90,70,90,50);
line(90,50,50,50);
outtext("made using line");
rectangle(50,90,110,130);
outtext("\nmade using rectangle");
getch();
closegraph();
}