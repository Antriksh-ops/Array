#include <iostream>
using namespace std;

int main(){

    int n1, n2;
    cout<<"Enter the size of first array: "<<endl;
    cin>>n1;
    int *arr1 = new int[n1];
    
    cout<<"Enter the elements of first array: "<<endl;
    for(int i = 0; i < n1; i++){
        cin>>arr1[i];
    }

    cout<<"Enter the size of second array: "<<endl;
    cin>>n2;
    int *arr2 = new int[n2];

    cout<<"Enter the elements of second array: "<<endl;
    for(int i = 0; i < n2; i++){
        cin>>arr2[i];
    }
    int n3 = n1 + n2;

    int *merged = new int[n3];

    for ( int i = 0; i < n1; i++){
        merged[i] = arr1[i];
    }

    for(int i = 0 ; i < n2; i++){
        merged[n1 + i] = arr2[i];
    }
    

    for ( int i = 0; i < n3 - 1; i++){
        for ( int j = 0; j < n3-i-1; j++){
            if ( merged[j] > merged[j+1]){
                
                int temp = merged[j];
                merged[j] = merged[j+1];
                merged[j+1] = temp;
            }
        }
    }

    cout<<"Sorted Merged array is as follows: "<<endl;
    for (int i = 0; i < n3; i++){
        cout<<merged[i]<<" ";
    }
}