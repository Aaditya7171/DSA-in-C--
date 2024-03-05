//Program to find nCr --->
#include <iostream>
using namespace std;

int factorial (int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;//this function will return factorial
}

int nCr(int n, int r) {
    int numr = factorial(n);//calling factorial() function
    int dinr = factorial(r) * factorial(n-r);//calling factorial() function
    return numr/dinr; //this function will return nCr 
}

int main () {
    int n, r;
    cout << "Enter values of 'n' & 'r':";
    cin >> n >> r;
    int result = nCr(n,r);//calling nCr() function
    cout << "nCr of Given 'n & 'r' is: " << result;

    return 0;
}