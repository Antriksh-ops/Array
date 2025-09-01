/*
#include<iostream>
#include<vector>
using namespace std;

// Majority element using brute force 
int main(){
    vector<int> v = {1,2,2,6,6,6};
    int n = v.size();
    for(int val : v){
        int freq = 0;
        for(int el : v){
            if(el == val){
                freq++;
            }
        }
        if(freq >= n/2){
            cout<< val;
            break;
        }
    }
}
*/


#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

// Majority element using optimal method (sorting)
class Solution{
    public:
        int majorityElement(vector<int>& nums){
            int n = nums.size();

            // sort
            sort(nums.begin(),nums.end());

            //freq count
            int freq = 1, ans = nums[0];
            for (int i = 0; i < n; i++)
            {
                if(nums[i] == nums[i-1]){
                    freq++;
                }
                else{
                    freq = 1;
                    ans = nums[i];
                }

                if(freq > n/2){
                    return ans;
                }
            }
            
            return ans;
        }
};