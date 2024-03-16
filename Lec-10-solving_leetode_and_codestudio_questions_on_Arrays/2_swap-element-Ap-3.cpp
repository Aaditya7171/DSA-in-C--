//Program to swap alternate elements of the array(Approach-3: without using "swap" keyword:)--->
#include<iostream>
using namespace std;

int altRev(int arr[], int size){
    for(int i = 0; i < size; i+=2){
        if(i+1 < size){
            int temp;
            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
}

void printArray(int array[], int size) {
    for(int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main() {
    int array[6] = {10,20,30,40,50,60};
    int array2[5] = {5,10,15,20,25};

    altRev(array, 6);
    altRev(array2, 5);

    printArray(array, 6);
    printArray(array2, 5);

    return 0;
}