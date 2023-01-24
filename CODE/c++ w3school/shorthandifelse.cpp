#include<iostream>
#include <string>
using namespace std;
int main(){
int num;
int num2;
cout<<"type a number:"<<endl;
cin>>num;
cout<<"type number 2:"<<endl;
cin>>num2;
string result=(num<num2) ? "true." : "false";
   cout<<result;
    
    return 0;
}
