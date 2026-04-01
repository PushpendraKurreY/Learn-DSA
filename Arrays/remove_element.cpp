/*Problem : An array and a value is given. Remove the all occurance of value 
from array inplace. Bring all other elements at front in array and return 
number of elements left.*/

//Solution :

#include <bits/stdc++.h>
using namespace std;

int elements(vector<int> &nums, int val) {
    int n=nums.size(), count=0, index=0;
    while(index<n) {
        if(nums[index]!=val) {
            nums[count]=nums[index];
            count++;
        }
        index++;
    }
    return count;
}

int main() {
    vector<int> nums={1,2,2,0,3,0,0,4};
    int val=0; 
    cout << elements(nums, val);
    return 0;
}