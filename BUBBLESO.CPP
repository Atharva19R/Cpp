#include<iostream.h>
#include<conio.h>
void main()
{
int a[10],i,j,t;
clrscr();
cout<<"\n enter any 10 array elements";
for(i=0;i<=9;i++)
cin>>a[i];
for(i=0;i<=8;i++)
{
for(j=0;j<=9-i;j++)
{
if(a[j]>a[j+1])
{
t=a[j];
a[j]=a[j+1];
a[j+1]=t;
}
}
}
cout<<"\n sorted array is\n";
for(i=0;i<=9;i++)
cout<<a[i]<<"\n";
getch();
}

 enter any 10 array elements                                                    
1                                                                               
10                                                                              
6                                                                               
9                                                                               
8                                                                               
7                                                                               
5
3                                                                               
4                                                                               
2                                                                               
                                                                                
 sorted array is                                                                
1                                                                               
2                                                                               
3                                                                               
4                                                                               
5                                                                               
6                                                                               
7                                                                               
8                                                                               
9                                                                               
10                                                                              
                                                                                

