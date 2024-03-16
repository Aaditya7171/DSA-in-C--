//Coding-Ninjas problem: Swap alternate---->
/*
You have been given an array/list(ARR) of size N. You need to swap every pair of alternate elements in the array/list.

You don't need to print or return anything, just change in the input array itself.
Sample Input 1:
1
6
9 3 6 12 4 32
Sample Output 1 :
3 9 12 6 32 4
*/
#include<iostream>
using namespace std;

int revAlt(int arr[], int size){
    int start = 0;
    int end = start + 1;

    while(end < size) {
        swap(arr[start], arr[end]);
        start += 2;
        end += 2;
    }
}

void  printaltRev(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[6] = {1,2,3,4,5,6};
    int arr1[5] = {9,8,7,6,6};

    revAlt(arr, 6);
    revAlt(arr1, 5);

    printaltRev(arr, 6);
    printaltRev(arr1, 5);

    return 0;
}