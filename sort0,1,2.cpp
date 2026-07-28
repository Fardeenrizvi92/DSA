// Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

// We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

// You must solve this problem without using the library's sort function.

 

// Example 1:

// Input: nums = [2,0,2,1,1,0]
// Output: [0,0,1,1,2,2]
// Example 2:

// Input: nums = [2,0,1]
// Output: [0,1,2]


//brute
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        sort(nums.begin(), nums.end());
    }
};


//better

class Solution {
public:
    void sortColors(vector<int>& nums) {

        map<int, int> freq;

        // Count frequency of each number
        for (int x : nums) {
            freq[x]++;
        }

        int index = 0;

        // Fill 0s
        while (freq[0]--) {
            nums[index++] = 0;
        }

        // Fill 1s
        while (freq[1]--) {
            nums[index++] = 1;
        }

        // Fill 2s
        while (freq[2]--) {
            nums[index++] = 2;
        }
    }
};



//optimal is here

class Solution {
public:
    void sortColors(vector<int>& nums) {
       int low=0;
       int mid=0;
       int high=nums.size()-1;
       while(mid<=high){
            if(nums[mid]==0){
                swap(nums[mid],nums[low]);
                low++;
                mid++;
            }
            else if(nums[mid]==1) mid++;
            else{
                swap(nums[mid],nums[high]);
                high--;
            }
       }
    }
};