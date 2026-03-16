/*Problem : we have to make size of the array equals to 1 
by picking two elements at once and eleminating the greater one 
and smaller one is cost. so output is sum of all costs.*/

/*Solution : pick the smallest number in array every time 
in the pair.*/

#include <bits/stdc++.h>

using namespace std;

int costSum(vector<int> &arr) {
   return (arr.size()-1)*(*min_element(arr.begin(), arr.end()));
}
    
int main() {
    vector<int> arr={2,3,4,5};
    cout << costSum(arr);
    return 0;
}