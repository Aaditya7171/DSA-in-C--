//Leetcode problem 191:Number of 1 Bits--->
/*
Write a function that takes the binary representation of an unsigned integer and returns the number of '1' bits it has (also known as the Hamming weight).

Example 1:
Input: n = 00000000000000000000000000001011
Output: 3
Explanation: The input binary string 00000000000000000000000000001011 has a total of three '1' bits.

Example 2:
Input: n = 00000000000000000000000010000000
Output: 1
Explanation: The input binary string 00000000000000000000000010000000 has a total of one '1' bit.
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter a Number: ";
    cin>>n;

    int count = 0;
    while(n!=0) {  
        if (n&1) {  // only (1&1=1) otherwise 0
            count ++;
        }
        n=n>>1;
    }
    cout<<endl<<count;
}
