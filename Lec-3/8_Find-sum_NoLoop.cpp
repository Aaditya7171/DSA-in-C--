//Program for Finding summation of 1 to input(n) {without loop} --->
#include<iostream>
using namespace std;

int main() {
    int n,sum;
    int a=1;
    cout<<"Enter a number: ";
    cin>>n;
    sum=(n/2)*(a+n);
    cout<<"Summation is: "<<sum;
}