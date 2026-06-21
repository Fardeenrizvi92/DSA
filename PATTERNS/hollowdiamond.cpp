#include<iostream>
using namespace std;
int main(){
    int n; cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){//space1
            cout<<" ";
        }
        cout<<"*";

        if(i!=0){
            for(int j=1;j<=(2*i-1);j++) 
            cout<<" ";//inside spaces

            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=0;i<n-1;i++){
        //spaces
        for(int j=0;j<=i;j++) cout<<" ";
        cout<<"*";
        //spaces
        if(i!=n-2){
        for(int j=0;j<(2*(n-2-i)-1);j++) 
        cout<<" ";

        cout<<"*";
        }
        cout<<endl;
    }
}