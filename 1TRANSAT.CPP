#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
clrscr();
int gdriver = DETECT,gmode;
int a,b,p,q,tx,ty;
initgraph(&gdriver,&gmode,"C:\\TC\\BGI");
outtext("Applied transational transformation to rectangle");
printf("Enter coordinates of rectangle");
scanf("%d%d%d%d",&a,&b,&p,&q);
printf("rectangle before translation");
rectangle(a,b,p,q);
printf("\nEnter translation in x and y values");
scanf("%d%d",&tx,&ty);
a=a+tx;
b=b+ty;
p=p+tx;
q=q+ty;
printf("Rectangles after translation of (%dx%d)",tx,ty);
rectangle(a,b,p,q);
getch();
closegraph();
}
