//tc=O(n)
//sc=O(1)
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ispalin=1;
    int arr[n];
    for(int i=1;i<=n;i++) cin>>arr[i];

    for(int i=0;i<n/2;i++){
        if(arr[i]!=arr[n-1-i]){
            ispalin=0;
            break;
        }
    }
    if(ispalin==1) cout<<"palin";
    else cout<<"not";
}