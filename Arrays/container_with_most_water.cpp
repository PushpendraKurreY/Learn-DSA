#include <bits/stdc++.h>
using namespace std;

int maxArea(vector<int> &height) {
    int n=height.size(), left=0, right=n-1, temp=0, max=0;
    while(left<right) {
        temp=(right-left)*min(height[left], height[right]);
        if(max<temp) max=temp;
        if(height[left]>=height[right]) right--;
        else left++;
    }
    return max;
}

int main() {
    vector<int> height={7,8,7,2,1};
    cout << maxArea(height);
    return 0;
}