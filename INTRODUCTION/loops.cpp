/*//ques> find char is in lower case or upper case
#include<iostream>
using namespace std;
int main(){
    char ch;
    cin>>ch;
    if(ch>=65 && ch<=90){//implicit type conversion
        cout<<ch<<" is in lowercase";
       }
       else cout<<ch<<"is in upper case";
}*/

/*//ques> check +ve or -ve
#include<iostream>
using namespace std;
int main(){
    int a=-45;
    cout<<(a>=0?"positive":"negative");
}*/

/*//ques> sum of no. from 1-n
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++) sum+=i;
    cout<<sum;
}*/



