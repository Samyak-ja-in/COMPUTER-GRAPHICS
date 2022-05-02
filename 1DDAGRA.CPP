#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
void main()
{
int gd=DETECT,gm;
int x1,y1,x2,y2,i;
float steps,dx,dy,m,xinc,yinc;
initgraph(&gd,&gm,"C:\\TC\\BGI");
cout<<"Enter x,y ofendpoints of line";
cin>>x1>>y1>>x2>>y2;
dx=abs(x2-x1);
dy=abs(y2-y1);
m=dy/dx;
if(dx>dy)
steps=dx;
else
steps=dy;
xinc=dx/steps;
yinc=dy/steps;
cout<<"\nSlope="<<m<<"\nSteps="<<steps;
for(i=1;i<=steps;i++)
{
putpixel(x1,y1,GREEN);
x1=x1+xinc;
y1=y1+yinc;
}


//rectangle(60,40,260,240);
getch();
}