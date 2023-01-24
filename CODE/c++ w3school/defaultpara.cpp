#include <iostream>
#include <string>
using namespace std;
void myfunction (string country="norway"){
cout<<country<<endl;
}
int main(){
myfunction("sweden");
myfunction("india");
myfunction();
myfunction("usa");



    return 0;
}