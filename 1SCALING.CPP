#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
clrscr();
int gdriver = DETECT,gmode;
int a,b,p,q,sx,sy,x,y;
int r,s,t,u;
initgraph(&gdriver,&gmode,"C:\\TC\\BGI");
outtext("Applied scaling transformation to rectangle");
printf("Enter coordinates of rectangle");
scanf("%d%d%d%d",&a,&b,&p,&q);
printf("rectangle before scaling");
rectangle(a,b,p,q);
setcolor(YELLOW);
printf("\nEnter scaling in x and y values");
scanf("%d%d",&sx,&sy);
r=a*sx;
s=b*sy;
t=p*sx;
u=q*sy;
printf("New diagonal coordinates of rectangle is=(%d,%d,%d,%d)",r,s,t,u);
rectangle(r,s,t,u);
setcolor(WHITE);
getch();
closegraph();
}