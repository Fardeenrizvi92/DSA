// Given an array nums of size n, return the majority element.

// The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

 

// Example 1:

// Input: nums = [3,2,3]
// Output: 3
// Example 2:

// Input: nums = [2,2,1,1,1,2,2]
// Output: 2
 
//brute 
#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int>& nums)
{
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        int count = 0;

        // Count frequency of nums[i]
        for (int j = 0; j < n; j++)
        {
            if (nums[j] == nums[i])
            {
                count++;
            }
        }

        // Check if it is majority
        if (count > n / 2)
        {
            return nums[i];
        }
    }

    return -1;   // No majority element
}

int main()
{
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};

    cout << "Majority Element = " << majorityElement(nums);

    return 0;
}

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

//optimal   moore voting algo
class Solution {  //tc=O(2n)
public:
    int majorityElement(vector<int>& nums) {
        int freq=0;
        int ele=0;
        
        for(int i=0;i<nums.size();i++){
            if(freq==0){
                ele = nums[i];   //after dec if freq dec then assign new(next) element to ele and then check its frequency.
                //if that ele is in majority then that will be left and if not then second loop is to verify whether that is the only element which has high majority
            }
            if(nums[i]==ele){ 
                freq++;   //if same element then freq inc and if different ele then freq dec 
                
            }
            else freq--;
        }
        int c=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==ele) c++;     //count whether ont the left element is in majority or not 
            if(c>(nums.size()/2)) return ele;
        }
        return 0;
    }
};
