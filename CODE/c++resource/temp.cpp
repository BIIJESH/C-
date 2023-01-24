#include <iostream>
using namespace std;

double celsius(){
    double cel, frh;
cout<<"enter the celsius: ";
cin>>cel;
frh=(cel*9.0 )/ 5.0 + 32;
cout<<"converison of celsius to fahrenheit = "<<frh<<endl;
return frh;
}

double fahrenheit(){
    double cel, frh;
cout<<"enter the faherenheit: ";
cin>>frh;
cel=((frh*5.0)-(5.0 * 32))/9;
cout<<"conversion of fahrenheit to celsius= "<<cel<<endl;
return cel;
}

double kelvin(){   
    double kelv, frh;
cout<<"enter the kelvin: "<<endl;
cin>>kelv;
frh=(9.0 / 5)*(kelv - 273.15);
cout<<"conversion of kelvin into fahrenhiet= "<<frh;
return frh;
}

int main (){
    celsius();
    fahrenheit();
    kelvin();
//SYSTEM ("PAUSE") == PRESS ANY KEY TO CONTINUE

    return 0;
}