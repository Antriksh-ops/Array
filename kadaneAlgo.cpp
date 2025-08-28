#include <iostream>
#include <vector>
using namespace std;

int maxSubArray(vector<int>& num){
    int maxSum = num[0];
    int currentSum = 0;

    for(int x : num){
        currentSum += x;
        if (currentSum > maxSum)
        {
            maxSum = currentSum;
        }

        if (currentSum < 0)
        {
            currentSum =  0;
        }
        
        
    }

    return maxSum;
}

int main(){
    int n;
    vector<int> num ;
    cout<<"Enter size of array: "<<endl;
    cin>>n;
    cout<<"Enter elements of array: "<<endl;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        num.push_back(x);
    }
    
    cout<<maxSubArray(num);
}
