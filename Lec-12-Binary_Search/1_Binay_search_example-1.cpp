//Implementation of Binary search--->
#include<iostream>
using namespace std;

// Function to perform binary search on a sorted array
// Parameters:
// arr[]: sorted array to search in
// size: size of the array
// key: element to be found
// Returns: index of the key if found, otherwise -1
int binarySearch(int arr[], int size, int key) {
    int start = 0; // Start index of the array
    int end = size - 1; // End index of the array
    // Calculate the middle index of the array
    // Note: Using (start + end) / 2 could lead to integer overflow for large values of start and end
    int mid = start + (end - start) / 2;

    // Binary search works efficiently on sorted arrays only (monotonic functions).
    // Ensure that the array provided is sorted either in ascending or descending order.

    // Repeat the process until the start index is less than or equal to the end index
    while (start <= end) {
        
      

        // If the key is found at the middle index, return the index
        if (arr[mid] == key) {
            return mid;
        }

        // If the key is greater than the element at the middle index, search the right half of the array
        else if (key > arr[mid]) {
            start = mid + 1; // Update the start index to mid + 1
        }

        // If the key is less than the element at the middle index, search the left half of the array
        else {
            end = mid - 1; // Update the end index to mid - 1
        }
        mid = start + (end - start) / 2;
    }

    // If the key is not found, return -1
    return -1;
}

int main() {
    // Sorted arrays for testing
    int arr1[6] = {2, 6, 8, 26, 44, 60};
    int arr2[7] = {3, 9, 11, 45, 77, 95, 97};

    // Testing binary search function with different keys
    cout << "Index of 44 in arr1 is : " << binarySearch(arr1, 6, 44) << endl;
    cout << "Index of 2 in arr1 is : " << binarySearch(arr1, 6, 2) << endl;
    cout << "Index of 50 in arr1 is : " << binarySearch(arr1, 6, 50) << " (Key not found)."  << endl;
    cout << "Index of 11 in arr2 is: " << binarySearch(arr2, 7, 11) << endl;
    cout << "Index of 95 in arr2 is: " << binarySearch(arr2, 7, 95) << endl;
    cout << "Index of 100 in arr2 is: " << binarySearch(arr2, 7, 100) << " (Key not found)." << endl;
  
    return 0; // Indicate successful completion of the program
}
