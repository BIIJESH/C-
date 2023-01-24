#include <iostream>
using namespace std;

int main (){
    cout<<"convert kmph to mph"<<endl;
    double kmph, mph;
    cout<<"enter the distane in kmph: ";
    cin>>kmph;
    mph=(kmph * 0.6213712);
    cout<<"the kmph means "<<mph<<"miles per hour.";



    return 0;
}
