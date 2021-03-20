/*Write a program in c++ to implement the following class hierarchy:Class student to obtain roll number ,class test to obtain marks scored in two different subjects ,class sports to obtain weightage in sports and class result to calculate the total marks . the program must print the roll numbers individual marks obtained in two subjects ,sports ,total marks.*\
#include<iostream.h>
#include<stdio.h>
#include<conio.h>
class student
{
protected:
int roll_number;
public:
void get_number(int a)
{
roll_number=a;
}
void put_number(void)
{
cout<<"\nroll no:"<<roll_number;
}
};
class test:public student
{
protected:
float part1,part2;
public:
void get_marks(float x,float y)
{
part1=x;
part2=y;
}
void put_marks(void)
{
cout<<"\nmarks obtained:\n";
cout<<"part1="<<part1;
cout<<"part2="<<part2;
}
};
class sport
{
protected:
float score;
public:
void get_score(float s)
{
score=s;
}
void put_score(void)
{
cout<<"\n score="<<score;
}
};
class result:public test,public sport
{
protected:
float total;
public:
void display(void);
};
void result::display(void)
{
total=part1+part2+score;
put_number();
put_marks();
put_score();
cout<<"\n total="<<total;
}
void main()
{
clrscr();
cout<<"\n*********output*********\n";
result r;
r.get_number(110);
r.get_marks(89.0,89.0);
r.get_score(89.0);
r.display();
getch();
}

*********output*********                                                        
                                                                                
roll no:110                                                                    
marks obtained:                                                                 
part1=89part2=89                                                                
 score=89                                                                       
 total=288                                                                      
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
