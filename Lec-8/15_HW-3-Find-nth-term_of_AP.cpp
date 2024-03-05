//Program to find n'th term of Arithmetic progression--->
// a, a + d, a + 2d, a + 3d,.....,a +(n-1)d
//d = n'th term - (n-1)th term
// Given, AP= (3 * n + 7){take n from user}

#include<iostream>
using namespace std;

int findNthTerm(int n) {
    int nthTerm = (3 * n + 7);
    return nthTerm; 
}

int main() {
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    cout << "n'th term of Ap(3 * n + 7) while n = " << n << " is: " << findNthTerm(n);

    return 0;
}