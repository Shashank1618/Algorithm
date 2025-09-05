//Count total number of digits

#include<bits/stdc++.h>
using namespace std;

int main(){
    int count=0;
    int n=54321;
    while(n!=0){
        count++;
        n=n/10;
    }
    cout<<count;
}