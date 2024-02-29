//Leetcode problem - 7. Reverse Integer
/*Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

Example 1:
Input: x = 123
Output: 321

Example 2:
Input: x = -123
Output: -321

Example 3:
Input: x = 120
Output: 21
 
Constraints: -231 <= x <= 231 - 1
*/
#include<iostream>
#include<math.h>
#include<climits>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number to reverse: ";
    cin>>n;
    
    int ans=0;
    while(n != 0) {
        if((ans > INT_MAX/10) || (ans < INT_MIN/10)){// header file <climits> is used to avail those functions
            return 0;
        }
        int digit = n%10;
        n=n/10;
        ans = ans * 10 + digit;
    }
    cout<<ans;
}