/*#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool isprime=true;
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            isprime=false;
            break;
        }
    }
    if(isprime) cout<<"true";
    else cout<<"false";
}*/

//medhod 2 and good one
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool isprime=true;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            isprime=false;
            break;
        }
    }
    if(isprime) cout<<"true";
    else cout<<"false";
}