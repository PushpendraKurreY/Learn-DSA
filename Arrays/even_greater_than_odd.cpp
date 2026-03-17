/*Problem : we have to rearrange the array 
so that even positioned are greater than the odd.*/

//Solution : 

#include <bits/stdc++.h>
using namespace std;

vector<int> rearrangeArray(vector<int> &arr) {
    int n=arr.size();
    vector<int> newArr(n);
    sort(arr.begin(), arr.end());
    for(int i=0; i<n; i+=2) {
      newArr[i]=arr[i/2];
    }
    for(int i=1; i<n; i+=2) {
      newArr[i]=arr[n-1-i/2];
    }
return newArr;
}

int main() {
    vector<int> arr={1,3,2};
    arr=rearrangeArray(arr);
    for(auto x:arr) {
        cout << x << " ";
    }
    return 0;
}