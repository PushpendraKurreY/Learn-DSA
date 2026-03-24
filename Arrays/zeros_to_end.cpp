/*Problem : In a given array shift all the zeroes to the end.*/

//Solution :

#include <bits/stdc++.h>
using namespace std;

vector<int> zerosToEnd(vector<int> &arr) {
    vector<int> newArr;
    int count=0;
    for(int i=0; i<arr.size(); i++) {
        if(arr[i]!=0) {
            newArr.push_back(arr[i]);
            count++;
        }
    }
    for(int i=count; i<arr.size(); i++) {
        newArr.push_back(0);
    }
  return newArr;
}

int main() {
    vector<int> arr={1,0,2,0,3,0,0,0,0,0};
    arr=zerosToEnd(arr);
    for(int i=0; i<arr.size(); i++) {
        cout << arr[i] << " ";
    }
    return 0;
}