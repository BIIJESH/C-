#include  <iostream>
using namespace std;

int main (){ 
cout<<"find the area and perimeter of a rectangle"<<endl;
int length, width, area, perimeter;
cout<<"enter the length of a rectangle: ";
cin>>length;
cout<<"enter the width of a rectangle: ";
cin>>width;
area=(length*width);
cout<<"the area is : "<<area<<endl;
perimeter= 2*(length+width);
cout<<"the perimeter is: "<<perimeter;



    return 0;
}