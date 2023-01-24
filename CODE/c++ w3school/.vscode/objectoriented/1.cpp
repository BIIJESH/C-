#include <iostream>
using namespace std;

class myclass {  //the class
    public:     //Access specifier
    int mynum; //Attribute type (int var)
    string mystring;//Attribute type (string var)
};

int main(){
    myclass myobj; //creating an object

    //access attributes and set value
    myobj.mynum=15;
    myobj.mystring="some text";

    //print attribute values
    cout<<myobj.mynum<<endl;
    cout<<myobj.mystring;
    
    return 0;
 
}
