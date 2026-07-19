// Given an array nums of size n, return the majority element.

// The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

 

// Example 1:

// Input: nums = [3,2,3]
// Output: 3
// Example 2:

// Input: nums = [2,2,1,1,1,2,2]
// Output: 2
 
//brute in copy

//better
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map <int,int> mpp;
        //N log N   log n for map and n for loop to traverse
        //sc = o(n)
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
            if(mpp[nums[i]]>(nums.size()/2)) return nums[i];
        }
        return 0;
    }
};

//optimal
