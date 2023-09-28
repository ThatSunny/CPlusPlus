#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int>arr{1, 3, 4, 4, 4, 4, 4, 6, 7};
    int key = 4;

    // First Occurence | Lower Bound
    auto ans = lower_bound(arr.begin(), arr.end(), key);

    // Last Occurence | Upper Bound
    auto ans2 = upper_bound(arr.begin(), arr.end(), key);

    // Total Occurence
    cout << "Total number of occurences are: " << ans2-ans + 1;
    return 0;
}