#include <iostream>
using namespace std;
int main(){
int secretnum=7;
int guess;
cout<<"enter your guess: ";
cin>>guess;
if (secretnum == guess){
    cout<<"you won";
}
else{
    cout<<"try again";
}



    return 0;
}