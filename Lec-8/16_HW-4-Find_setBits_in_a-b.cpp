// Program to find total number of set-bits(1) in a & b--->
// e.g., a=2(10), b=3(11)-->setbits: 3
#include<iostream>
using namespace std;
#include<cmath>

// Function to count set bits in an integer
int countSetBits(int a) {

    int count = 0;

    while(a){
        count = count + (a & 1);
        a = a  >> 1;
    }
    return count;
}

// Function to find total set bits in a and b
int totalSetBits(int a, int b) {
     int totalBits = 0;

    totalBits = totalBits + countSetBits(a);
    totalBits = totalBits + countSetBits(b);
    return totalBits;
}

int main() {
    int a, b;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;
    // Find and display total set bits in a and b
    int result = totalSetBits(a,b);
    cout << "Total Number of set bits in a and b: " << result << endl;
 
    return 0;
}
