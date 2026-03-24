/*Problem : Rotate an given array by given number n times.*/

//Solution :

#include <bits/stdc++.h>
using namespace std;

vector<int> rotateArray(vector<int> &arr, int N) {
    int n=arr.size();
    N=N%arr.size();
    vector<int> newArr(n);
    for(int i=0; i<n-N; i++) {
      newArr[i+N]=arr[i];
    }
    for(int i=0; i<N; i++) {
      newArr[i]=arr[n-N+i];
    }
    return newArr;
}

int main() {
    vector<int> arr={0,1,2,3,4,5,6,7,8,9};
    int N;
    cin >> N;
    arr=rotateArray(arr, N);
    for(int i=0; i<arr.size(); i++) {
      cout << arr[i] << " ";
    }
    return 0;
}