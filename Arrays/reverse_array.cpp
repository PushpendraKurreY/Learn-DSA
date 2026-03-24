/*Problem : Reverse an given array.*/

//Solution :

#include <bits/stdc++.h>
using namespace std;

vector<int> reverseArray(vector<int> &arr) {
    int n=arr.size();
    for(int i=0; i<n/2; i++) {
        swap(arr[i],arr[n-i-1]);
    }
    return arr;
}

int main() {
   vector<int> arr={1,2,3,4,5};
   reverseArray(arr);
   for (int i = 0; i < arr.size(); i++) {
    cout << arr[i] << " ";
   }
   return 0;
}