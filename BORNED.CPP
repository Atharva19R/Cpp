/*Write a program in C++ that initializes a ratio class with no parameter as a default constructor .The program must print the message “OBJECT IS BORN” during initialization it should display the message that “X IS ALIVE” when the first member function ratio  x is called.
 The program must display “OBJECT DIES” when the class destructor is called for the object when it reaches the end of its scope. *\

#include<iostream.h>
#include<conio.h>
class ratio
{
public:
ratio();
void ratio_x();
~ratio();
};
ratio::ratio()
{
cout<<"\nobject is born\n";
}
void ratio::ratio_x()
{
cout<<"\nx is alive\n";
}
ratio::~ratio()
{
cout<<"\nobject dies\n";
}
void main()
{
clrscr();
cout<<"\n*******output*******\n";
ratio obj;
obj.ratio_x();
getch();
}

*******output*******                                                            
                                                                                
object is born                                                                  
                                                                                
x is alive                                                                      
                                                                                
object dies
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

