/*Problem : For given array we have find two indices such that 
sum of elements from those indices equals to given target.*/

//Solution :

#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target) {
    int n=nums.size();
    vector<pair<int,int>> index(n);
    for(int i=0; i<n; i++) {
        index[i]={nums[i], i};
    }
    sort(index.begin(), index.end());
    int low=0, high=n-1;
    while(low<high) {
        int sum=index[low].first+index[high].first;
        if(sum==target) return {index[low].second, index[high].second};
        else if (sum<target) low++;
        else high--;
    }
    return {-1, -1};
}

int main() {
    vector<int> nums={3,4,2,8,0,1};
    int target=2;
    nums=twoSum(nums, target);
        cout << nums[0] << " " << nums[1];
        return 0;
 } 