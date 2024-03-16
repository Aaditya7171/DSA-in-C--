//Approach-2: to find unique element int the array--->
#include<iostream>
using namespace std;

int checkUnique(int arr[], int size){
    int ans = 0;
    for(int i = 0; i < size; i++){
        ans = ans ^ arr[i];
    }
    return ans;
}
 
int main() {
    int size;
    cout << "Enter the number of elements of array: ";
    cin >> size;

    if (size <= 0) {
        cout << "Invalid array size." << endl;
        return 1;
    }

    int arr[size];
    cout << "Enter elements:" << endl;
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }
     
    int uniqueElement = checkUnique(arr, size);
    if(uniqueElement){
    cout << "unique element in the array:" << uniqueElement << endl;
    }
    else {
        cout << "No unique element found in the array." << endl;
    }

    return 0;
}
