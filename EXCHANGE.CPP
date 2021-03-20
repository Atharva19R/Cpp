#include<iostream.h>
#include<conio.h>
void swap(int*,int*);
void main()
{
int a,b;
clrscr();
cout<<"enter two numbers";
cin>>a>>b;
swap(&a,&b);
cout<<"a="<<a;
cout<<"b="<<b;
getch();
}
void swap(int*a,int*b)
{
int t;
t=*a;
*a=*b;
*b=t;
}
enter two numbers
19                                                                              
45                                                                              
a=45b=19

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
