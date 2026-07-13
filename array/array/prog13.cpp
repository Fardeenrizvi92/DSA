// Missing in Array
// Difficulty: EasyAccuracy: 29.59%Submissions: 1.7MPoints: 2Average Time: 15m
// You are given an array arr[] of size n - 1 that contains distinct integers in the range from 1 to n (inclusive). This array represents a permutation of the integers from 1 to n with one element missing. Your task is to identify and return the missing element.

// Examples:

// Input: arr[] = [1, 2, 3, 5]
// Output: 4
// Explanation: All the numbers from 1 to 5 are present except 4.
// Input: arr[] = [8, 2, 4, 5, 3, 7, 1]
// Output: 6
// Explanation: All the numbers from 1 to 8 are present except 6.
// Input: arr[] = [1]
// Output: 2
// Explanation: Only 1 is present so the missing element is 2.


class Solution {   //tc=O(2n)
  public:
    int missingNum(vector<int>& arr) {
        // code here
        int exor=0;
        for(int i=0;i<arr.size();i++){
             exor^=arr[i];
        }
        for(int i=1;i<=arr.size()+1;i++){
            exor^=i;
        }
        return exor;
    }
};


class Solution { //tc =O(n)
  public:
    int missingNum(vector<int>& arr) {
        // code here
        int xor1=0,xor2=0;
        for(int i=0;i<arr.size();i++){
             xor1^=arr[i];
             xor2^=(i+1);
        }
        xor2^=(arr.size()+1);
        
        return xor1^xor2;
    }
};