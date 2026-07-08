// Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

// Note that you must do this in-place without making a copy of the array.

 

// Example 1:

// Input: nums = [0,1,0,3,12]
// Output: [1,3,12,0,0]
// Example 2:

// Input: nums = [0]
// Output: [0]

//tc = o(n^2)
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       int n=nums.size();
       for(int i=n-1;i>=1;i--){
        for(int j=0;j<=i-1;j++){
            if(nums[j]==0)
            swap(nums[j],nums[j+1]);
        }
       } 
    }
};

//optimal tc=o(n)
class Solution {
public:
    void moveZeroes(vector<int>& arr) {
       int n=arr.size();
       int j=-1;
       for(int i=0;i<n;i++){        //tc=x where x=index of first 0 element
        if(arr[i]==0) {j=i;
        break;}

       }
       if(j==-1) return;
       for(int i=j+1;i<n;i++){  //tc=n-x where becox loop strts from x till n so total comp is (x+n-x)=o(n);
        if(arr[i]!=0){
            swap(arr[j],arr[i]);
            j++;
        }
       } 
    }
};