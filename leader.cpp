// Leaders in an Array
// Subscribe to TUF+

// Hints
// Company
// Given an integer array nums, return a list of all the leaders in the array.



// A leader in an array is an element whose value is strictly greater than all elements to its right in the given array. The rightmost element is always a leader. The elements in the leader array must appear in the order they appear in the nums array.


// Example 1

// Input: nums = [1, 2, 5, 3, 1, 2]

// Output: [5, 3, 2]

// Explanation:

// 2 is the rightmost element, 3 is the largest element in the index range [3, 5], 5 is the largest element in the index range [2, 5]

// Example 2

// Input: nums = [-3, 4, 5, 1, -4, -5]

//Output: [5, 1, -4, -5]


class Solution {
public:
    vector<int> leaders(vector<int>& nums) {
        vector<int> ans;
        int maxi = INT_MIN;

        for (int i = nums.size() - 1; i >= 0; i--) {
            if (nums[i] >= maxi){
                ans.push_back(nums[i]);
                maxi = nums[i];}
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};