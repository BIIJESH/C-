#include <iostream>
using namespace std;

int main (){
cout<<"check whether the given num is pos or neg"<<endl;
signed long num1 =0;
cout<<"enter a number: "<<endl;
cin>>num1;
if (num1 > 0){
    cout<<"the enterd number is positive"<<endl;
}
else if (num1 < 0){
    cout<<"the given number is negative"<<endl;
}
else {
    std::cout<<"the number is 0.";
}
    return 0;
}