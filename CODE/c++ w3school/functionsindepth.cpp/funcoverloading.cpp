#include <iostream>
using namespace std;
int plusfuncint(int x,int y){
    return x+y;
}

double plusdouble(double x, double y){
    return x+y;
}

int main(){
int mynum1 =plusfuncint(8, 9);
double mynum2 = plusdouble(10.1,10.5);
cout<<"int: "<<mynum1<<endl;
cout<<"double: "<<mynum2<<endl;


    return 0;
}