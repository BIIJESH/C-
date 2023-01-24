#include <iostream>
using namespace std;

int main(){

int secretnum=8;
int guess;
int guesscount = 0;
int guesslimit =3;
bool outofguess;

cout<<"guess the number: "<<endl;
cin>>secretnum;

while (secretnum !=guess && !outofguess )
 if(guesscount < guesslimit) {
    cout<<"enter guess: ";
    cin>>guess;
    guesscount ++;
}
   if (outofguess==true)
    {
    cout<<"you lose";
    }
else  {
cout<<"you win";
}
    


return 0;
}