// Moore's Voting Algorithm
#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> nums = {1,3,3,4,1,1,1};
    int n = nums.size();

    int freq = 0, ans = 0;

    // Phase 1: Find candidate
    for(int i = 0; i < n; i++) {
        if(freq == 0) {
            ans = nums[i];   // FIXED HERE
        }
        if(ans == nums[i]) {
            freq++;
        } else {
            freq--;
        }
    }

    // Phase 2 (Optional but safer): Verify candidate
    int count = 0;
    for(int val : nums) {
        if(val == ans) count++;
    }
    if(count > n/2) {
        cout << "Majority element: " << ans;
    } else {
        cout << "No majority element exists";
    }

    return 0;
}
