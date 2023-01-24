#include <iostream>
using namespace std;

void swapnums(int&x ,int&y) {//swap is a function in itself.
int z=x;
    x=y;
    y=x;

}
int main(){
    int firstnum =10;
    int secondnum =20;
    cout<<"before swap:"<<endl;
cout<<firstnum<<" "<<secondnum<<endl;

swapnums(firstnum,secondnum);

cout<<"after swap:"<<endl;
cout<<firstnum<<" "<<secondnum;
return 0;


}

