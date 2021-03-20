/*Implement a circle class in c++ each object of this class will represent a circle ,storing its radius and x and y coordinates of its centre as floats.Include a default constructor possess area() function and circumference() function . the program must print its o-ordinate with radius , area and circumference of this circle . \*
#include<iostream.h>
#include<conio.h>
class circle
{
private:
int r,x,y;
float a,c;
public:
circle();
void area();
void circumference();
void display();
};
circle::circle()
{
cout<<"enter the radius of circle";
cin>>r;
cout<<"enter x and y coordinate of the circle ";
cin>>x>>y;
}
void circle::area()
{
a=3.14*r*r;
}
void circle::circumference()
{
c=2*3.14*r;
}
void circle::display()
{
cout<<"\n*********output**********\n";
cout<<"x and y coordinates of centre of circle are"<<x<<"&"<<y<<endl;
cout<<"radius of circle="<<r<<endl;
cout<<"area of the circle="<<a<<endl;
cout<<"circumference of the circle="<<c<<endl;
}
void main()
{
clrscr();
circle c;
c.area();
c.circumference();
c.display();
getch();
}
enter the radius of circle5
enter x and y coordinate of the circle 5                                        
6                                                                               
/*                                                                                
*********output**********                                                       
x and y coordinates of centre of circle are5&6                                  
radius of circle=5                                                              
area of the circle=78.5                                                         
circumference of the circle=31.4                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
