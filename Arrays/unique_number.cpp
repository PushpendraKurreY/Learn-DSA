/*Problem : every number in given array will be double 
except one we have to identify that number.*/

// Solution : We use XOR :

#include <bits/stdc++.h> 
using namespace std;

int unique(vector<int> &arr) {
    int num=0;
   for(int i=0; i<arr.size(); i++) {
    num=num^arr[i];
   }
   return num;
}

int main() {
    vector<int> arr={3,3,1,2,4,2,5,1,5};
    cout << unique(arr);
}