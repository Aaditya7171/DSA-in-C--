//Coding-ninjas Problem--->
/*Problem statement
You have been given an integer array/list(ARR) of size N. Where N is equal to [2M + 1].

Now, in the given array/list, 'M' numbers are present twice and one number is present only once.

You need to find and return that number which is unique in the array/list.

Sample Input 1:
1
7
2 3 1 6 3 6 2
Sample Output 1:
1
Explanation: The array is [2, 3, 1, 6, 3, 6, 2]. Here, the numbers 2, 3, and 6 are present twice, and the number 1 is present only once. So, the unique number in this array is 1.

Constraints :
1 <= t <= 10^2
0 <= N <= 10^3
Time Limit: 1 sec
*/
#include<iostream>
using namespace std;

int checkUnique(int arr[], int size){
    for(int i = 0; i < size; i++){
        int count = 0;
        for(int j = 0; j < size; j++){
            if(arr[i] == arr[j]){
                count ++;
                
            }
        }
        if(count == 1){
                    return arr[i];
                }
    }
    return -1;//Return -1 if no unique element is found
}
 
int main() {
    int size;
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
    if(uniqueElement != -1){
    cout << "unique element in the array:" <<uniqueElement << endl;
    }
    else {
        cout << "No unique element found in the array." << endl;
    }

    return 0;
}
