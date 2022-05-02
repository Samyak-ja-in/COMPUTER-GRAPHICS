//ROTATION OF A POINT WITH RESPECT TO A PIVOT POINT
//VISUALIZING POINT AS LINE
//1)SHIFT ORIGIN TO PIVOT POINT 2)ROTATE WITH RESPECT TO PIVOT  3)RESHIFT
//Enter negative values for counter-clockwise rotation
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<iostream.h>
#include<math.h>
void rotate();
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TC\\BGI");
rotate();
getch();
}
void rotate()
{
int px,py,x,y;
float r,deg,s,c;
int p,q,t,u;
cout<<"Enter values of line first enter pivots";
cin>>px>>py>>x>>y;
setcolor(GREEN);
line(px,py,x,y);
cout<<"\nEbter values of rotation in degree";
cin>>deg;
r=deg*0.0175;
s=sin(r);
c=cos(r);
p=x-px;          //Translate origin to pivot
q=y-py;          //making pivot origin
t=p*c-q*s+px;
u=p*s+q*c+py;    //rotating point wrto pivot and reshifting origin
setcolor(BLUE);
line(px,py,t,u);


}

