//Program to find the n'th term of fibonacci series--->
#include<iostream>
using namespace std;

int nthFibonacciNumber(int n) {
    int a = 0;
    int b = 1;

    for (int i = 1; i < n; i++){
        int nextNum = (a + b);
        a = b;
        b = nextNum;
    }
    return a;
}

int main() {
    int n;
    cout << "Enter the term you want from the fibonacci series: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid input. Please enter a positive integer for the term." << endl;
        return 1; // Exiting with an error code
    }
    int result = nthFibonacciNumber(n);
    cout << "The " << n << "th term of fibonacci series is: " << result;

    return 0;
}