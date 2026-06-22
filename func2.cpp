//calc binomial coff nCr
#include<iostream>
using namespace std;

int fact(int n){
    int prod=1;
    for(int i=1;i<=n;i++){
        prod*=i;
    }
    return prod;
}

int main(){
    int n,r;
    cin>>n>>r;
    float binocoeff=fact(n)/(fact(r)*fact(n-r));
    cout<<binocoeff;
}