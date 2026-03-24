/*Problem : For a given array find the sum of all possible subarrays.*/

//Solution :

#include <bits/stdc++.h>
using namespace std;

int subarraySum(vector<int> &arr) {
    int n=arr.size(), sum=0;
    for(int i=0; i<n; i++) {
        sum+=arr[i]*(i+1)*(n-i);
    }
return sum;
}

int main() {
    vector<int> arr={3,2,6,4,1};
    cout << subarraySum(arr);
    return 0;
}