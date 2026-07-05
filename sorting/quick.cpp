#include<bits/stdc++.h>
using namespace std;

int func(vector<int> &arr,int low,int high){
    int pivot=arr[low];
    int i=low;
    int j=high;
    while(i<j){
        while(arr[i]<=pivot && i<=high-1) i++;
        while(arr[j]>pivot && j>=low+1) j--;
        if(i<j) swap(arr[i],arr[j]);
    }
    swap(arr[j],arr[low]);
    return j;
}
void qs(vector<int> &arr ,int low,int high){
    if(low<high){
        int partIndex=func(arr,low,high);
        qs(arr,low,partIndex-1);
        qs(arr,partIndex+1,high);
    }
}
void quicksort(vector<int> &arr){
    qs(arr,0,arr.size()-1);
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    quicksort(arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}