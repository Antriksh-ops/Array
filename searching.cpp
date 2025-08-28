#include <iostream>
using namespace std;

int main(){

    int arr[5], item;
    cout<<"Enter array elements: "<<endl;
    for(int i = 0; i < 5; i++){
        cin>>arr[i];
    }

    cout<<"Enter element to search: "<<endl;
    cin>>item;

    int found = -1;

    for(int i = 0; i < 5; i++){
        if (arr[i] == item){
            found = i;
        }
    }

    if (found  != -1){
        cout<<"Element "<<item<<" found at "<<found<<" index"<<endl;
    }

    else{
        cout<<"Element not found";
    }
}