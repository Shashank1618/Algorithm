//Print digits in fornt order

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    
    cin>>n;
    int temp = n,rev=0;
    while(n>0){
        int digit=n%10;
        rev=rev*10+digit;
        n=n/10;
    }
    if(temp==rev){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not a Palindrome";
    }
    return 0;
}