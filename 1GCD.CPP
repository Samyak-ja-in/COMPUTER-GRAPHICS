#include<conio.h>
#include<iostream.h>
void main()
{
 int gcd(int,int);
 int x,y;
 cout<<"enter two numbers";
 cin>>x>>y;
 cout<<"\n GCD of"<<x<<"and"<<y<<"is "<<gcd(x,y);
 getch();
}
int gcd(int a,int b)
{
 if(a%b==0)
  return b;
 if(b%a==0)
  return a;
 if(a==b)
  return a;
 if(a>b)
  return(gcd(a%b,b));
 else
  return(gcd(a,b%a));
}