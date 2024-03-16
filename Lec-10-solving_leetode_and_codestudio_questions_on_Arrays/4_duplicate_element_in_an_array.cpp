//Coding-Ninjas Problem:(Bruteforce solution)
/*Problem statement
You are given an array ‘ARR’ of size ‘N’ containing each number between 1 and ‘N’ - 1 at least once. There is a single integer value that is present in the array twice. Your task is to find the duplicate integer value present in the array.

For example:
Consider ARR = [1, 2, 3, 4, 4], the duplicate integer value present in the array is 4. Hence, the answer is 4 in this case.
Note :
A duplicate number is always present in the given array.

Sample Input 1:
2
5
4 2 1 3 1
7
6 3 1 5 4 3 2
Sample Output 1:
1

Constraints:
1 <=  T  <= 10
2 <=  N <= 10 ^ 5
1 <=  ARR[i]  <= N - 1

Time limit: 1 sec
*/
#include<iostream>
using namespace std;

void checkDuplicate(int arr[], int size){
    for(int i = 0; i < size-1; i++) {
        for(int j = i+1; j < size; j++) {
            if(arr[i] == arr[j]){
                cout << arr[i] << endl;
            }
        }
    }
}
 
int main() {
    int arr[7] = {1,3,5,2,3,6,5};

    checkDuplicate(arr, 7);
}