//check if a no is prime or not
// #include<iostream>
// using namespace std;
// int isprime(int n){
//     for(int i=2;i*i<=n;i++){
//         if(n%i==0) {
//             return 0;
//             break;}
//     }
//     return 1;
// }
// int main(){
//     int n;
//     cin>>n;
//     if(isprime(n))
//     cout<<"yes";
//     else cout<<"no";
// }
//print all prime no. from 2-N

#include<iostream>
using namespace std;
int isprime(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0) {
            return 0;
            break;}
    }
    return 1;
}
int main(){
    int n;
    cin>>n;
    for(int i=2;i<=n;i++){
    if(isprime(i))
    cout<<i<<" ";
    }
}