#include <iostream>
using namespace std;

int main(){
    int a=1;
    int b=2;
    
    if(a-- > 0 || ++b > 2){//Second part is'nt executed because in OR any one condition should be true
    cout<<"hey ";
    }
    else{
    cout<< "hello";
   }
   cout<<a << " " << b <<endl;
}
