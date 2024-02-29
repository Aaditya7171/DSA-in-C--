//Program using cin.get() --->
#include<iostream>
using namespace std;

int main () {
    int n;
    n = cin.get();//we cant take input from cin like space,tab and enter but with cin.get() we can.
    cout<<"Value of n is: "<< n <<endl;//Returns ASCII values of input charecters:e.g.- {a-97} {space( )-32}
}