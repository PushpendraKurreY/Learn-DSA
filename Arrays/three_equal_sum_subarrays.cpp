#include <bits/stdc++.h>
using namespace std;

vector<int> indices(vector<int> &arr) {
    int n=arr.size(), total=0, left=0;
    for(int i=0; i<n; i++) {
        total+=arr[i];
    }
    for(int i=0; i<n-2; i++) {
        left+=arr[i];                                                                                                                                
        int middle=0, right=0;
        for(int j=i+1; j<n-1; j++) {
          middle+=arr[j];
          right=total-left-middle;
          if(left==middle && middle==right) {
            return {i,j};
          }
        }
    }
    return {-1,-1};
}

int main() {
    vector<int> arr={1,-1,1,-1,1,-1,1,-1};
    arr=indices(arr);
    cout << arr[0] << " " << arr[1];
    return 0;
}