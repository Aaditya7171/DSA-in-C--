//Program for finding that given number is +ve, -ve or zero(0) using {if-else}--->
#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    if(n > 0) {
        cout<<"Number is positive."<<endl;
    }
    else{
        if(n < 0){
            cout<<"Number is negative."<<endl;
        }
        else {
            cout<<"Number is 0"<<endl;
        }
    }
}