//Homework-2
//Leetcode problem-442: Find All duplicates in  array--->
/*
Given an integer array nums of length n where all the integers of nums are in the range [1, n] and each integer appears once or twice, return an array of all the integers that appears twice.
You must write an algorithm that runs in O(n) time and uses only constant extra space.

Example 1:
Input: nums = [4,3,2,7,8,2,3,1]
Output: [2,3]
*/

#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        sort(nums.begin(), nums.end()); // Sort the vector
        vector<int>result;
        for (int i = 0; i < nums.size() - 1; ++i) {
            if (nums[i] == nums[i + 1]) { // If current and next elements are same, it's a duplicate
                result.push_back(nums[i]); // Add the duplicate to result
                ++i; // Skip the next element to avoid counting the same duplicate multiple times
            }
        }
        return result;
        
    }
};
int main() {
    vector<int> nums = {4, 3, 2, 7, 8, 2, 3, 1};
    Solution solution;
    vector<int> duplicates = solution.findDuplicates(nums);

    cout << "Duplicates: ";
    for(int num : duplicates) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}