//Arithmatic Operators in c++--->
#include<iostream>
using namespace std;

int main() {
    int a = 2 + 5; //addition operator(+)
    cout<<"Addition is " << a << endl;

    int b = 2 - 5; //substraction operator(-)
    cout<<"substraction is " << b << endl;

    int c = 2 * 5; //Multiplication operator(-)
    cout<<"Multiplication is " << c << endl;

    //Division operator(-)
    int d = 2 / 5; 
    cout<<"division is " << d << endl;//Division of int/int=int
    float e = 2.0 / 5; 
    cout<<"Division is " << e << endl;//float/int=float
    double f= 2.0 / 5; 
    cout<<"Division is " << f << endl;//double/int=double
    float h = 2 / 5.0; 
    cout<<"Division is " << h << endl;//int/float=float

    int g = 5.5/2;
    cout<<g<<endl;//we have declared 'g' as int so it's not storing value in decimal
    cout<<5.5/2<<endl;//the output is in decimal because it's data is'nt declared

    int i = 5 % 2; //Modulus operator
    cout<<i<<endl;

    int j = 5;
    j++;//Increment
    cout<<j<<endl;

    int k = 5;
    k--;//Decrement
    cout<<k<<endl;
}
