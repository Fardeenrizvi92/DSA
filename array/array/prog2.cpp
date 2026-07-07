// Given an array, arr[] of integers, your task is to return the smallest and second smallest element in the array. If the smallest and second smallest do not exist, return -1.

// Examples:

// Input: arr[] = [2, 4, 3, 5, 6]
// Output: [2, 3] 
// Explanation: 2 and 3 are respectively the smallest and second smallest elements in the array.
// Input: arr[] = [1, 1, 1]
// Output: [-1]
// Explanation: Only element is 1 which is smallest, so there is no second smallest element.

class Solution {
  public:
    vector<int> minAnd2ndMin(vector<int> &arr) {
        // code here
        int sml=arr[0];
        int secsml=INT_MAX;
        for(int i=0;i<arr.size();i++){
            if(arr[i]<sml){
                secsml=sml;
                sml=arr[i];
            }
            if(arr[i]>sml && arr[i]<secsml)
            secsml=arr[i];
        }
        if(secsml==INT_MAX)
        return {-1};
        else
        return {sml,secsml};
    }
};