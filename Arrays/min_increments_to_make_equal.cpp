/*This code is for finding min number of total increments by k 
needed to make all elements of array equal.*/
#include <bits/stdc++.h>

using namespace std;

int minIncrements(vector<int> &arr, int k) {
    int count=0;
    int max= *max_element(arr.begin(), arr.end());
    for(auto x:arr) {
      if(((max-x)%k)!=0) return -1;
      else count+=abs(max-x);
    }
    return count/k;
}

int main() {
    int k=3;
    vector<int> arr={0,0,0,0};
    cout << minIncrements(arr, k);
    return 0;
}