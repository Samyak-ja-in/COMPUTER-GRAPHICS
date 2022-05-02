#include<graphics.h>
#include<conio.h>
#include<iostream.h>
#include<stdio.h>
#include<stdlib.h>
void main()
{
int gd=DETECT,gm,errorcode;
initgraph(&gd,&gm,"C:\\TC\\BGI");
errorcode=graphresult();
if(errorcode!=grOk)
{
printf("%s",grapherrormsg(errorcode));
getch();
exit(1);
}
//line(100,150,150,150);
line(100,100,100,300);
line(100,300,300,300);
line(300,300,300,100);
line(300,100,100,100);
line(100,100,200,50);
line(200,50,300,100);
line(200,50,600,50);
line(600,50,600,300);
line(300,100,600,100);
line(300,300,600,300);
cout<<"Hello samyak";
getch();
closegraph();
}