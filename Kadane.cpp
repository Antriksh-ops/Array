// #include <iostream>
// #include <vector>
// using namespace std;

// // maximum subarray sum using brute force
// int main(){
//     int n = 5;
//     int arr[5] = {1,2,3,4,5};

//     int maxSum = INT16_MIN;
//     for(int st = 0; st < n; st++){
//         int currSum = 0;
//         for(int end = st; end < n; end++){
//             currSum += arr[end];
//             maxSum = max(currSum, maxSum);
//         }
//     }
    
//     cout<<"Max subarray sum ="<<maxSum;
// }

// maximum subarray sum using kadanes

#include <iostream>
#include <vector>
using namespace std;

// maximum subarray sum using brute force
int main(){
    int n = 5;
    int arr[5] = {1,2,3,4,5};

    int curSum = 0 ;
    int maxSum = INT16_MIN;
    for(int i = 0; i < n; i++){
        curSum += arr[i];
        maxSum = max(curSum,maxSum);

        if(curSum < 0){
            curSum = 0;
        }
    }

    cout<<"Max subarray: "<<maxSum;
}