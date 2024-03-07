//Finding Maximum and Minimum Values of an Array
#include<iostream>
#include<climits>
using namespace std;

// Function to find the maximum value in the array
int getMax(int num[],int size){
    // Initialize maxValue to the smallest possible integer value
    int maxValue = INT_MIN;
     // Iterate through each element in the array
    for(int i = 0; i < size; i++) {
        // Compare the current element with maxValue and update if larger
        maxValue = max(maxValue, num[i]);
    }
    // Return the final maximum value found in the array
    return maxValue;
}

// Function to find the minimum value in the array
int getMin(int num[],int size){
    // Initialize minValue to the largest possible integer value
    int minValue = INT_MAX;
    // Iterate through each element in the array
    for(int i = 0; i < size; i++) {
        // Compare the current element with minValue and update if smaller
        minValue = min(minValue, num[i]);
    }
    // Return the final minimum value found in the array
    return minValue;
}

int main() {
    int size;

    // Get the length of the array from the user
    cout << "Enter the lenght of array: ";
    cin >> size;

    int num[100];
    //taking input for the array elements
    for(int i = 0; i < size; i++){
        cin >> num[i];
    }
     // Calculate and display the maximum and minimum values of the array
    cout << "Maximum value of the given array is: " << getMax(num, size) << endl;
    cout << "Minimum value of the given array is: " << getMin(num, size) << endl;
    
    return 0;
}