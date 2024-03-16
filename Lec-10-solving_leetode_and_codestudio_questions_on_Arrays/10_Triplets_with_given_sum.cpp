//Homework-3
//Have to RETRY
//Coding Ninjas problem---->
/*
You are given an array/list ARR consisting of N integers. Your task is to find all the distinct triplets present in the array which adds up to a given number K.
An array is said to have a triplet {ARR[i], ARR[j], ARR[k]} with sum = 'K' if there exists three indices i, j and k such that i!=j, j!=k and i!=j and ARR[i] + ARR[j] + ARR[k] = 'K'.

Note:
1. You can return the list of values in any order. For example, if a valid triplet is {1, 2, -3}, then {2, -3, 1}, {-3, 2, 1} etc is also valid triplet. Also, the ordering of different triplets can be random i.e if there are more than one valid triplets, you can return them in any order.
2. The elements in the array need not be distinct.
3. If no such triplet is present in the array, then return an empty list, and the output printed for such a test case will be "-1".

Constraints:
1 <= T <=  50
1 <= N <= 10^3  
-10^6 <= ARR[i] <= 10^6
-10^9 <= K <= 10^9

Time Limit: 1 sec

Sample Input 1:
1
5
10 5 5 5 2
12
Sample Output 1:
5 5 2
Explanation for Sample Input 1:
5 5 2 is the only triplet that adds up to 12. Note that the order of the output doesn’t matter, so 5 2 5 or 2 5 5 is also acceptable.
*/

//two pointer approach(learned from GPT)
//This is just a temporary solution,we'll be back into this after learning better apraoches
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<vector<int>> findTriplets(vector<int> arr,int n, int K){
    sort(arr.begin(), arr.end());
    vector<vector<int>> result;

    for(int i = 0; i < n - 2; i++){
        int left = i + 1;
        int right = n - 1;
        
        while(left < right){
            int sum = arr[i] + arr[left] + arr[right];
            if (sum == K){
                result.push_back({arr[i], arr[left], arr[right]});
                left++;
                right--;
                while(left < right && arr[left] == arr[left - 1]) left++;
                while(left < right && arr[right] == arr[right - 1]) right++;
            }
            else if(sum < K){
                left++;
            }
            else { 
                right--;
            }
        }
        while(i  < n - 2 && arr[i] == arr[i + 1]) i++;
    }
    return result;
}

int main() {
    vector<int> arr = {1,2,3,4,5,6,7,8,9};
    int n = arr.size();
    int K = 15;

    vector<vector<int>> triplets = findTriplets(arr, n, K);

    for(const auto& triplet : triplets){
        cout << "triplet: " ;
        for(int i = 0; i < 3; ++i){
            cout << triplet[i] << " ";
        }
        cout << endl;
    }
    return 0;
}