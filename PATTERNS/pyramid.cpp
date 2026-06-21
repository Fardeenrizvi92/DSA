/*  1
  121
 12312
1234123
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++) cout<<" ";
        for(int j=0;j<=i;j++) cout<<(j+1);
        for(int j=1;j<=i;j++) cout<<j;
        cout<<endl;
    }
}*/

/* pyramid
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++) cout<<" ";
        for(int j=0;j<=i;j++) cout<<"*";
        for(int j=1;j<=i;j++) cout<<"*";
        cout<<endl;
    }
}*/

/*inverted pyramid
#include<iostream>
using namespace std;
int main(){
    int n; cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++) cout<<" ";
        for(int j=n-i;j>=1;j--) cout<<"*";
        for(int j=n-1-i;j>=1;j--) cout<<"*";
        cout<<endl;

    }
}*/

