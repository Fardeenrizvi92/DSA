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


//recursion
#include <iostream>
using namespace std;

bool isPrime(int n, int i = 2) {
    if (n <= 1)
        return false;

    if (i * i > n)
        return true;

    if (n % i == 0)
        return false;

    return isPrime(n, i + 1);
}

int main() {
    int n;
    cin >> n;

    if (isPrime(n))
        cout << "Prime Number";
    else
        cout << "Not Prime Number";

    return 0;
}