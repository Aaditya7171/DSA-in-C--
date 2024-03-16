//Reverse an Array--->
#include<iostream>
using namespace std;

int reverseArray(int arr[], int size){
    int start = 0;
    int end = size-1;

    while(start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }   
    //Since the function modifies the original array directly, there is no need to return anything (pass by reference)
}

void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr1[8] = {1,2,3,4,5,6,7,8};
    int arr2[5] = {5,4,3,2,1};
    int arr3[7] = {-1,2,5,0,5,7,-9};

    reverseArray(arr1, 8);
    reverseArray(arr2, 5);
    reverseArray(arr3, 7);

    printArray(arr1, 8);
    printArray(arr2, 5);
    printArray(arr3, 7);

    return 0;
}