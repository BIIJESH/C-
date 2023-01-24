#include <iostream>
using namespace std;
int main(){
int a=10;
 int b=15;

cout<<((a>b)&&(b<a))<<endl;
 //     10>15  15>10
cout<<((a<b)||(b>=a))<<endl;
cout<<!(a=b)<<endl;

    return 0;
}