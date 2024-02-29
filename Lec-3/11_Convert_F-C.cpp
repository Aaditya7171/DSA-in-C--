//Program to convert Fahrenheit to celsius--->
#include<iostream>
using namespace std;

int main() {
    float f,c;
    cout<<"Enter fahrenheit value to convert in celsius: ";
    cin>>f;
    
    c=(f - 32.0) * 5.0/9.0;
    cout<<"Given value in celsius is: "<< c <<" C";
}