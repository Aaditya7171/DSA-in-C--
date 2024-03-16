//Coding-Ninjas Problem:(Optimized solution)
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

int checkDuplicate(int arr[], int size){
    int ans = 0;
    //XOR all elements of array
    for(int i = 0; i < size; i++) {
        ans = ans ^ arr[i];
    }
    //XOR [1, N-1]
    for(int i = 0; i < size; i++) {
        ans = ans ^ i;
    }
    return ans;
}
 
int main() {
    int arr[6] = {5,1,4,3,4,2};

    int result = checkDuplicate(arr, 6);
    cout << result;
}
