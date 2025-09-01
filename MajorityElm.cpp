#include<iostream>
#include<vector>
using namespace std;

// brute force 
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