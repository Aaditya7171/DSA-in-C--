//practice question--->
//i/p: 1,0,0,1,0
//o/p: 0,0,0,1,1
//Two pointer appraoch
#include<iostream>
using namespace std;

int sort(int arr[], int n){
    int left = 0;
    int right = n - 1;
    while(left < right){
        while(arr[left] == 0 && left < right){
            left++;
        }
        while(arr[right] == 1 && left < right){
            right--;
        }
        
        if((arr[left] == 1 && arr[right] == 0 && left < right)){
        swap(arr[left], arr[right]);
        left++;
        right--;
        }
    }
}

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[8] = {0,1,1,0,1,0,1,0};
    sort(arr, 8);
    printArray(arr,8);

    return 0;
}