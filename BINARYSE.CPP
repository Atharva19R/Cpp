#include<iostream.h>
#include<conio.h>
void main()
{
int i,a[10],s,e,mid,n;
clrscr();
cout<<"\n enter any ten sorted element";
for(i=0;i<=9;i++)
cin>>a[i];
cout<<"\n enter the value of n you want to search\n";
cin>>n;
s=0;
e=9;
cout<<"**************output************";
do
{
mid=(s+e)/2;
if(a[mid]==n)
{
cout<<"\n search is successful\t\tfound at position:"<<mid+1;
goto end;
}
if(a[mid]>n)
e=mid+1;
else
s=mid+1;
}
while(s<=e);
cout<<"\n search is unsuccessful";
end:
getch();
}

 enter any ten sorted element                                                   
10                                                                              
9                                                                               
8                                                                               
7                                                                               
6                                                                               
5                                                                               
4                                                                               
3
2                                                                               
1                                                                               
                                                                                
 enter the value of n you want to search                                        
6                                                                               
**************output************                                                
 search is successful           found at position:5                             
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
