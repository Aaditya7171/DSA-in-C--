//Program for Bitwise operators--->
#include <iostream>
using namespace std;

int main() {
    int a;
    cout<<"Enter first number: ";
    cin>>a;
    int b;
    cout<<"Enter second number: ";
    cin>>b;

    cout<<"Value of (a&b) is: "<< (a&b)<<endl;
    cout<<"Value of (a|b) is: "<< (a|b)<<endl;
    cout<<"Value of (~a) is: "<< (~a)<<endl;
    cout<<"Value of (~b) is: "<< (~b)<<endl;
    cout<<"Value of (a^b) is: "<< (a^b)<<endl;
}
