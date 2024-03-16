/*
You are given two arrays 'A' and 'B' of size 'N' and 'M' respectively. Both these arrays are sorted in non-decreasing order. You have to find the intersection of these two arrays.

Intersection of two arrays is an array that consists of all the common elements occurring in both arrays.

Note :
1. The length of each array is greater than zero.
2. Both the arrays are sorted in non-decreasing order.
3. The output should be in the order of elements that occur in the original arrays.
4. If there is no intersection present then return an empty array.
*/
//solution(unoptimized){Approach-2}

#include <iostream>
#include <vector>

using namespace std;

vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	vector<int> ans;//declaration of "vector" type "int" named "ans"
	for(int i = 0; i < n; i++){
    int element = arr1[i];
		for(int j = 0; j  < m; j++){
        if (element == arr2[j]) {
            ans.push_back(element);//inserting the elements in vector
            arr2[j] = -873;
            break;
          }
      }
    }
  return ans;
}
int main() {
    // Example input arrays
    vector<int> arr1 = {1, 2, 3, 4, 5};
    vector<int> arr2 = {3, 4, 5, 6, 7};

    // Find intersection
    vector<int> intersection = findArrayIntersection(arr1, arr1.size(), arr2, arr2.size());

    // Output the intersection
    cout << "Intersection: ";
    for(int num : intersection) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}