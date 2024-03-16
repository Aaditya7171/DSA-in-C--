//Linear search--->
#include<iostream>
using namespace std;

bool search(int arr[], int size, int key) {
    for(int i = 0; i <= size; i++) {
        if(arr[i] == key) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int arr[10] = {0,5,10,15,20,-1,-10,-20,-30,-40};
    int key;
    cout << "Enter the element you want to search: ";
    cin >> key;

    bool found = search(arr, 10, key);

    if(found) {
        cout << "Key is present in the array." << endl;
    }
    else{
        cout << "Key is absent. " << endl;
    }
    
    return 0;
    
}