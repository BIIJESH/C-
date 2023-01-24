#include <iostream>
using namespace std;
 int main (){
int secretnum;
for ( int i = 1; i <= 4; i++)
{
    cout<<"guess the number: ";
cin>>secretnum;

if (secretnum ==36)
{
    cout<<"you win"<<endl;
}

else 
{
    cout<<"you lose"<<endl;
}
}

    return 0;
 }