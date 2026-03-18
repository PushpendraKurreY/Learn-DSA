/*Problem : We have to buy and sell stocks such that we make max profit.*/

//solution :

#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &arr) {
    int n=arr.size(), profit=0, count=0;
  for(int i=0; i<n-1; i++) {
    if(arr[i]>arr[i+1]) {
     profit+=arr[i]-arr[count];
     count=i+1;
    }
  }
  if(arr[n-1]>arr[count]) {
    profit+=arr[n-1]-arr[count];
  }
  return profit;
}

int main() {
    vector<int> arr={1,5,3,4};
    cout << maxProfit(arr);
    return 0;
}