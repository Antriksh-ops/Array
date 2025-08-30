#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int arr[5] = {1,2,3,4,5};
    int target = 7;

    for(int i = 0; i < n; i++){
        int sum = 0;
        sum = arr[i] + arr[i+1];

        if(sum == target){
            cout<< i <<" "<< i+1 <<endl;
            cout<< arr[i] <<" "<< arr[i+1] <<endl;
            return 0 ;
        }
    }

    return 0;
}