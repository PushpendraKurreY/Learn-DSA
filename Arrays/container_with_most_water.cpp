/*Problem : You are given an integer array height of length n. 
There are n vertical lines drawn such that the two endpoints of 
the ith line are (i, 0) and (i, height[i]).
Find two lines that together with the x-axis form a container, 
such that the container contains the most water.
Return the maximum amount of water a container can store.*/

/*Solution : Two pointer approch, left and right. 
Move pointer for which element is smaller.*/

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