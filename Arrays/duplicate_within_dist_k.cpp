/*Problem : We have to tell if there is any duplicate present 
with distance between them less or equal to k.*/

// Solution :

#include <bits/stdc++.h>

using namespace std;

string duplicateInK(vector<int> &arr, int k) {
    for(int i=0; i<arr.size(); i++) {
        for(int j=i+1; j<=i+k && j<arr.size(); j++) {
            if(arr[i]==arr[j]) return "YES";
        }
    }
    return "NO";
}

int main() {
    int k=19;
    vector<int> arr={1,2,3,4,5,3};
    cout << duplicateInK(arr, k);
    return 0;
}