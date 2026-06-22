//print the nth fibonacci term
#include<iostream>
using namespace std;
void fibo(int n){
    int a=0,b=1;
    for(int i=2;i<=n;i++){
       int c=a+b;
        a=b;
        b=c;    
    }
    cout<<b;
}
int main(){
    int n;
    cin>>n;
    fibo(n);
}

