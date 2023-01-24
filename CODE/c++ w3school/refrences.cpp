#include <iostream>
#include <string>
using namespace std;
int main(){
string food="pizza";
string tiffin="jerry";
string &meal=food;
string &dinner=tiffin;


cout<<&food<<endl;
cout<<meal<<endl;
cout<<dinner<<endl;
cout<<tiffin;
    return 0;
}