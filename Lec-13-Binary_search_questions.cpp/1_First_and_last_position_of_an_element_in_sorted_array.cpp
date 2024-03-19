//coding ninjas problem:  First and Last Position of an Element In Sorted Array---->
/*
Problem statement
You have been given a sorted array/list 'arr' consisting of ‘n’ elements. You are also given an integer ‘k’.
Now, your task is to find the first and last occurrence of ‘k’ in 'arr'.

Note :
1. If ‘k’ is not present in the array, then the first and the last occurrence will be -1. 
2. 'arr' may contain duplicate elements.

Example:
Input: 'arr' = [0,1,1,5] , 'k' = 1
Output: 1 2
Explanation:
If 'arr' = [0, 1, 1, 5] and 'k' = 1, then the first and last occurrence of 1 will be 1(0 - indexed) and 2.
Time Limit : 1 second
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
    int ans = 0;
    
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
    int arr[6] = {1,2,3,3,3,5};

    cout << "First Occurence of 3 is at index : " << firstOcc(arr, 6, 3) << endl; 
    
    cout << "Last Occurence of 3 is at index : " << lastOcc(arr, 6, 3) << endl;
    
    return 0;
}