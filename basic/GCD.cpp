//Print digits in fornt order

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n1,n2;
    cin>>n1>>n2;
    int rem=n1%n2;
    while(rem!=0){
        n1=n2;
        n2=rem;
        rem=n1%n2;
    }
    cout<<n2<<endl;
    return 0;
}