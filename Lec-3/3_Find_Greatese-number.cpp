//program for finding greatest number between input a $ b--->
#include<iostream>
using namespace std;

int main() {
    int a,b;
    cout<<"Enter first number A: ";
    cin>>a;
    cout<<"Enter second number B: ";
    cin>>b;
    
    if(a>b) {
        cout<<"A="<<a<<" is greater.";
    }
    if(b>a) {
        cout<<"B="<<b<<" is greater.";
    }
}
