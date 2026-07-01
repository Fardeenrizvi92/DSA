// #include<iostream>
// using namespace std;
// #include<vector>
// int main(){
//     vector <int> vec={1,2,3};
//     cout<<vec[0];
// }

// 2..
// #include<iostream>
// using namespace std;
// #include<vector>
// int main(){
//     // vector <int> vec(5,1);
//     vector <char> vec={'a','e','i','o','u'};
//     for(char i:vec){
//     cout<<i<<endl;
//     }
// }

// 3..push_back func
// #include<iostream>
// using namespace std;
// #include<vector>
// int main(){
//     vector <int> vec;
//     cout<<vec.size()<<endl;
//     vec.push_back(25);
//     vec.push_back(35);
//     vec.push_back(45);
//     vec.push_back(145);
//     cout<<"after push back "<<vec.size()<<endl;
//     for(int val:vec)
//     cout<<val<<endl;
//     vec.pop_back();
//     cout<<vec.front()<<endl;
//     cout<<vec.back()<<endl;
//     cout<<vec.at(1);//35

// }


// leetcode prob 136 single number
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(int val:nums){
            ans=ans^val;
        }
        return ans;
        
    }
};
