#include<iostream.h>
#include<conio.h>
void main()
{
short *p,a[5],sum=0;
p=a;
clrscr();
cout<<"enter the elements";
for(int i=0;i<5;i++)
{
cin>>a[i];
}
for(int j=0;j<5;j++)
{
cout<<"\n number :"<<a[j]<<"\t address:"<<p;
sum=sum+a[j];
p++;
}
cout<<"sum of all elements of the array is\t" <<sum;
cout<<"starting address of an array is\t"<<a;
cout<<"t ending address of an array is\t"<<p-i;
cout<<"total size of array is\t"<<p-a;
getch();
}
                                                       
                                                                               
                                                                                                                    
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
