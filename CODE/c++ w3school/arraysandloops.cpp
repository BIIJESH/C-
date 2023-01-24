#include <iostream>
#include <string>
using namespace std;
int main(){
string cars[4]={"volvo","bmw","benz","ford"};
for (int i = 1; i < 4; i++)
{
    cout<<i<<":"<<cars[i]<<endl;//shows the number where the values are stored in
    //first it prints i and then puts : and then shows the cars 
}

/*
for (int a = 0; a < 5; a++)
{
    cout<<a<<endl;
}
*/


    return 0;
}