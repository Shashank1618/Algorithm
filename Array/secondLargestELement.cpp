#include<bits/stdc++.h>
using namespace std;
 int getSecondLargest(vector<int> &arr) {
        int secondLargest=-1;
        int largest= arr[0];
        for(int i= 1 ; i< arr.size(); i++) {
            if (arr[i] > largest){
                secondLargest = largest;
                largest = arr[i];
            }
            else if (arr[i] < largest && arr[i] > secondLargest){
                secondLargest = arr[i];
            }
        }
        return secondLargest;
    }
int main(){
    vector<int> arr = {2,3,1,5,4};
    cout<<getSecondLargest(arr);
    return 0;
}