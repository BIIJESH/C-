#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
cout<<"find the area of triangle"<<endl;

float leng1, leng2, leng3, s, area;
cout<<"enter the first side: ";
cin>>leng1;
cout<<"enter the second side: ";
cin>>leng2;
cout<<"enter the third side: ";
cin>>leng3;
s=(leng1+leng2+leng3)/2;
area= sqrt (s*(s-leng1)*(s-leng2)*(s-leng3));
cout<<"the area of triangle is: "<<area;







    return 0;
}



