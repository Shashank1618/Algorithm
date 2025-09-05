//Print digits in fornt order

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n=000400,q=0,count=0,temp=n;
    while(temp!=0){
        count++;
        temp=temp/10;
    }
    cout<<count<<endl;
    int d=pow(10,count-1);
    
    while(d!=0){
        q=n/d;
        cout<<q<<" ";
        n=n%d;
        d=d/10;
        
    }
    return 0;
}