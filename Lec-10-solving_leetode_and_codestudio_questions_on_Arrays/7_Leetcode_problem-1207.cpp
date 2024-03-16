// Leetcode problem-1207 : Unique Number of Occurrences
//Homework-1
/*Given an array of integers arr, return true if the number of occurrences of each value in the array is unique or false otherwise.
 
Example 1:
Input: arr = [1,2,2,1,1,3]
Output: true
Explanation: The value 1 has 3 occurrences, 2 has 2 and 3 has 1. No two values have the same number of occurrences.

Constraints:
1 <= arr.length <= 1000
-1000 <= arr[i] <= 1000
*/

#include <iostream>
#include <algorithm>
using namespace std;

bool findUniqueOcc(int arr[], int size) {
    // Sort the array
    sort(arr, arr + size);//sort(first, last)

    // Arrays to store the occurrences and counts
    int occurrences[size];
    int counts[size];

    // Initialize occurrences and counts arrays
    for (int i = 0; i < size; i++) {
        occurrences[i] = arr[i];
        counts[i] = 1;
    }

    // Update counts based on consecutive equal elements
    int count = 1;
    for (int i = 1; i < size; i++) {
        if (arr[i] == arr[i - 1]) {
            counts[count - 1]++;
        } else {
            count++;
        }
    }

    // Check if counts are unique
    sort(counts, counts + count);
    for (int i = 1; i < count; i++) {
        if (counts[i] == counts[i - 1]) {
            return false;
        }
    }

    return true;
}

int main() {
    int size;
    cout << "Enter size of array: ";
    cin >> size;

    int arr[size];

    cout << "Enter elements of array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    bool check = findUniqueOcc(arr, size);
    if (check) {
        cout << "true";
    } else {
        cout << "false";
    }

    return 0;
}

