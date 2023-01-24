#include <iostream>
using namespace std;
void myfunc (string name="bijesh"){//this is a default parameter.
    cout<<name<<endl;
}


int main(){
    myfunc();
myfunc("bigya");



    return 0;
}
