#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[]={2,1,7,3,6,5};
int n=6;
int pivot=arr[n-1];
int j=0;
for(int i=0;i<n;i++){
    if(arr[i]<pivot){
        swap(arr[i],arr[j]);
        j++;
    }
}
swap(arr[j],arr[n-1]);
for(auto i:arr){
    cout<<i<<" ";
}
cout<<endl;
cout<<"position of pivot is: "<<j;
}