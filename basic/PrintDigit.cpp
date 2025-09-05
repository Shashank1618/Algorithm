//Print digits in reverse order

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n=54321,digit=0;
    while(n!=0){
        digit=n%10;
        cout<<digit<<" ";
        n=n/10;
    }
    return 0;
}