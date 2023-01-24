#include <iostream>
using namespace std;

class car {
    public:
    string brand;
    string model;
    int year;

};

int main(){
//create an object of a car
car carobj1;
carobj1.brand="BMW";
carobj1.model="X5";
carobj1.year=1995;

//create another object for car2
 car carobj2;
carobj2.brand="FORD";
carobj2.model="MUSTANG";
carobj2.year=1969;

//print attribute values
cout<<carobj1.brand<<" "<<carobj1.model<<" "<<carobj1.year<<endl;
cout<<carobj2.brand<<" "<<carobj2.model<<" "<<carobj2.year<<endl;

    return 0;
}