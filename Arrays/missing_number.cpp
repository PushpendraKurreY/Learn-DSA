/*Problem : We are given a array of 1 to n number 
but one number is missing. so we have to find that number.*/

/*Solution : find the difference betweeen sum of 1 to n 
numbers and sum of elements of arrray.*/ 

#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int> &arr) {
    int sum1=0, n=arr.size(), sum2=((n+1)*(n+2))/2;
    for(int i=0; i<arr.size(); i++) {
        sum1+=arr[i];
    }
    return sum2-sum1;   
}

int main() {
    vector<int> arr={1,2,3,4,6,7,8};
    cout << missingNumber(arr);
}