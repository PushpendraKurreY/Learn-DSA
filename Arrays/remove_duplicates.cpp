/*Problem : A sorted array is given, remove the duplicates 
inpalce and bring all unique elements at the front of arrays maintaining 
there relative order. Return the number of unique elements.*/

//Solution :

#include <bits/stdc++.h>
using namespace std;

int unique(vector<int> &nums) {
    int n=nums.size(), count=0, index=1;
    if(!n) return 0;
    while(index<n) {
        if(nums[index-1]!=nums[index]) {
            count++;
            nums[count]=nums[index];
        }
        index++;
    }
    return count+1;
}

int main() {
    vector<int> nums={1,2,2,2,3,4,4,5,6,6,6,7,8,9,9};
    cout << unique(nums);
    return 0;
}