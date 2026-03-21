/*Problem : In an array elements 1 to n any number 
is duplicate. We have to find that number.*/

#include <bits/stdc++.h>
using namespace std;

//XOR method :
int missing1(vector<int> &arr) {
    int n=arr.size(), x=0;
     for(int i=1; i<n; i++) {
      x^=arr[i]^i;
     }
      x^=arr[0];
     return x;                                    
}

//sum method :
int missing2(vector<int> &arr) {
    int n=arr.size(), sum1=(n*(n-1))/2, sum2=0;
    for(int i=0; i<n; i++) {
        sum2+=arr[i];
    }
    return sum2-sum1;
}

int main() {
    vector<int> arr{1,2,3,4,5,6,7,7,8,9};
    cout << missing1(arr) << endl;
    cout << missing2(arr);
    return 0;
}