//Coding ninjas problem: Number of occurrence--->
/*
Problem statement
You have been given a sorted array/list of integers 'arr' of size 'n' and an integer 'x'.
Find the total number of occurrences of 'x' in the array/list.

Example:
Input: 'n' = 7, 'x' = 3
'arr' = [1, 1, 1, 2, 2, 3, 3]
Output: 2
Explanation: Total occurrences of '3' in the array 'arr' is 2.

Expected time complexity:
The expected time complexity is O(log 'n').

Constraints:
1 <= n <= 10^4
1 <= arr[i] <= 10^9
1 <= x <= 10^9
Where arr[i] represents the element i-th element in the array/list.

Time Limit: 1sec
*/
#include<iostream>
using namespace std;

int firstOcc(int arr[], int n, int key){
    int start = 0, end = n - 1;
    int mid = start + (end - start) / 2;
    int ans = 0;
    
    while(start <= end) {
        if(arr[mid] == key) {
             ans = mid;
             end = mid - 1;
        }
        else if(arr[mid] > key){
            end = mid - 1;
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int lastOcc(int arr[], int n, int key){
    int start = 0, end = n - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    
    while(start <= end) {
        if(arr[mid] == key) {
             ans = mid;
             start = mid + 1;
        }
        else if(arr[mid] > key){
            end = mid - 1;
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main(){
    int arr[7] = {1,1,1,2,2,3,3};
    int firstIndex = firstOcc(arr,7,5);
    int lastIndex = lastOcc(arr,7,5);
    
    int totalOcc = lastIndex - firstIndex + 1;
    cout << "Number of occurences of 3 : " << totalOcc;

}
