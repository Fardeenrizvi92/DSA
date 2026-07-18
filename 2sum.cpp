// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.

 

// Example 1:

// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
// Example 2:

// Input: nums = [3,2,4], target = 6
// Output: [1,2]
// Example 3:

// Input: nums = [3,3], target = 6
// Output: [0,1]
 

//brute   tc=O(n2)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i=0;
        vector<int> ans;
        while(i<nums.size()){
        for(int k=i+1;k<nums.size();k++){   //suppose if i checked 0,1 then when i=1 it again check 1,0 therefore it starts from i+1
                if((nums[i]+nums[k])==target && i!=k) { // != as indicies should not be same
                    ans.push_back(i);  //vector cannot add pairs so push one by one
                    ans.push_back(k);
                    return ans;
                }
                }
                i++;
        }
        return {}; //if not nos sum occur
    }
};



//optimal
class Solution {  //tc =O(n*log n) n for iterating in arr and log n for map and space comp=O(n) for hashmap 
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map <int,int> mpp;
        for(int i=0;i<nums.size();i++){
            int a=nums[i];
            int diff=target-a;
            if(mpp.find(diff)!=mpp.end()){
                return {mpp[diff],i};
            }
            mpp[a]=i;
        }
        return {};
    }
};
