#include<iostream.h>
#include<conio.h>
class person
{
public:
virtual void print()
{
cout<<"the name of the person is bob"<<endl;
}
};
class student:public person
{
public:
void print()
{
cout<<"the name of the student is tom"<<endl;
}
};
void main()
{
clrscr();
cout<<"\n***output***\n";
person o,*p;
student d;
p=&o;
p->print();
p=&d;
p->print();
getch();
}
***output***
the name of the person is bob                                                   
the name of the student is tom
                                                                                
                                                                                
                                                                                
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                






