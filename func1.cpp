//sum of digits using function
#include<iostream>
using namespace std;

int sumofdigits(int n){
    int sum=0;
    while(n>0){
        sum+=n%10;
        n/=10;
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    int s=sumofdigits(n);
    cout<<s;
}