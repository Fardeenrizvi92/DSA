Given an array of integers nums and an integer k, return the total number of subarrays whose sum equals to k.

A subarray is a contiguous non-empty sequence of elements within an array.

 it is for +ve nos. only

Example 1:

Input: nums = [1,1,1], k = 2
Output: 2
Example 2:

Input: nums = [1,2,3], k = 3
Output: 2

class Solution {   //brute
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int c=0;
      for(int i=0;i<n;i++){
        int s=0;
        for(int j=i;j<n;j++){
            s+=nums[j];
            if(s==k){
                c++;
            }
        }
      }  return c;
    }
};

optimal
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
       int right=0;
       int left=0;
       int count=0;
       int n=nums.size();
       int sum=nums[0];
       while(right<n){
        while(sum>k){
            sum-=nums[left];
            left++;
        }
        if(sum==k) count++;
        right++;
        if(right<n) sum+=nums[right];
       }
       return count; 
    }
};