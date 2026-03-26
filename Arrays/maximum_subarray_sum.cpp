/*Problem : In a given array find a continuous subarray 
of any size which maximum value when all elements are added.*/

//Solution :

#include <bits/stdc++.h>
using namespace std;

int maxSum(vector<int> &arr) {
    int n=arr.size(), sum=0, max=INT_MIN;
    for(int i=0; i<n; i++) {
        sum+=arr[i];
      if(sum>max) max=sum;
      if(sum<0) sum=0;
    }
    return max;
}

int main() {
    vector<int> arr={2,3,-8,7,-1,2,3};
    cout << maxSum(arr);
    return 0;
}