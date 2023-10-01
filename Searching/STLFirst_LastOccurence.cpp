#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int>arr{1, 3, 4, 4, 4, 4, 4, 6, 7};
    int key = 4;

    // First Occurence | Lower Bound
    auto ans = lower_bound(arr.begin(), arr.end(), key);
    cout << "First position: " << ans - arr.begin();

    cout << endl;

    // Last Occurence | Upper Bound
    auto ans2 = upper_bound(arr.begin(), arr.end(), key);
    cout << "Last position: " << ans2-arr.begin();

    return 0;
}