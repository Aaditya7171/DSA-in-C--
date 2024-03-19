#include<iostream>
#include<climits>
using namespace std;

// Function to find the maximum value in the array
// Time complexity: O(n) - Worst case: Iterate through the array once.
// Space complexity: O(1) - Constant space as only a fixed number of variables are used.
int getMax(int num[], int size){
    int maxValue = INT_MIN;
    for(int i = 0; i < size; i++) {
        maxValue = max(maxValue, num[i]);
    }
    return maxValue;
}

// Function to find the minimum value in the array
// Time complexity: O(n) - Worst case: Iterate through the array once.
// Space complexity: O(1) - Constant space as only a fixed number of variables are used.
int getMin(int num[], int size){
    int minValue = INT_MAX;
    for(int i = 0; i < size; i++) {
        minValue = min(minValue, num[i]);
    }
    return minValue;
}

int main() {
    int size;

    cout << "Enter the length of array: ";
    cin >> size; // Time Complexity: O(1), Space Complexity: O(1)

    int num[100]; // Fixed-size array
    for(int i = 0; i < size; i++){ // Time Complexity: O(n), Space Complexity: O(1)
        cin >> num[i];
    }
    
    // Calculate and display the maximum and minimum values of the array
    cout << "Maximum value of the given array is: " << getMax(num, size) << endl; // Time Complexity: O(n), Space Complexity: O(1)
    cout << "Minimum value of the given array is: " << getMin(num, size) << endl; // Time Complexity: O(n), Space Complexity: O(1)
    
    return 0; // Time Complexity: O(1), Space Complexity: O(1)
}

/*
//How to avoid TLE(Time limit exceeded)--->
//10^8 rule->
         Constraints          time-complexity   
         <=[10...11]           O(n!), O(n^6)   ^ highest
         <[15...18]            O(2^n*n^2)      ^
         <[100]                O(n^4)          |
         <[400]                O(n^3)          |
         <[2000]               O(n^2*log n)    |
         <[10^4]               O(n^2)          |
         <[10^6]               O(n log n)      |
         <[10^8]               O(n), O(log n)  |  lowest

if (constraint = 1 < n < 10^6) then according to this rule, we can either go with O(n log n) or O(n)/O(log n), otherwise your code may suffer from TLE

*/         