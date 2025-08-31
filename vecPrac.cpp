#include<iostream>
#include <vector>
using namespace std;

// we will use bitwise operator xor operator
class Solution{
    public:
    int singleNumber(vector<int>& nums){
        int ans = 0;
        for (int val : nums){
            ans ^= val;
        }

        return ans;
    }
};

// single number
int main(){
    Solution s1;
    vector<int> v2 = {1,2,2,1,4,4,8};
    int result = s1.singleNumber(v2); 
    cout<<"The result is: "<<result;
    return 0;
     
}