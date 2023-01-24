#include <iostream>
using namespace std;
int main(){

for (int i = 0; i <= 10; i++){

    if (i==4){//bracket and semicolon confusion
    break;
    
    }

cout<<i<<endl;
} 

for (int a=2 ; a<=15 ;a++){

if (a==6){

    continue; // continue is to skip the value
}
 if (a==8){
    break;

cout<<"this is continue:"<<a<<endl;
}

/* break and continue in while loop
int i=0;
while (i<10){
cout<<i<<endl;
i++;
if(i==4){
    break;
}*/



    return 0;
}