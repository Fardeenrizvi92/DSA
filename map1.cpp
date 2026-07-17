#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    map <int,int> mpp;
    //precompute
    for(int i=0;i<n;i++){
        mpp[arr[i]]++; }//         map<int,int> freq;
                                   // Initially
                                    // (empty)
                                    // Now execute
                                    // freq[10]++;
                                    // There is no key 10.
                                    // So map automatically creates it with a default value of 0:
                                    // 10 -> 0
                                    // Then ++ increases it:
                                    // 10 -> 1
    

    //printing of map
    for(auto it:mpp){
        cout<<it.first<<"->"<<it.second<<endl;
    }
    int q;
    cin>>q;
    while(q--){
        int number;
        cin>>number;
        cout<<mpp[number]<<endl;
    }

}