#include <iostream>
#include <string>
using namespace std;
int main(){
string cars[5]={"volvo", "benz","bmw",};
cars[3]="mazda";
cars[4]="tesla";
cout<<"my first car is: "<<cars[0]<<endl;
for (int i=0; i<5;i++){
    if (i==0){
        continue;
    }
cout<<"my cars are: "<<cars[i]<<endl;
}

    return 0;
}