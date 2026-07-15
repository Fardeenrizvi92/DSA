
//count frequency of element
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int num=5;
    int count=0;
    for(int i=0;i<n;i++){
        if(num==arr[i]) count++;
    }
    cout<<count;
}