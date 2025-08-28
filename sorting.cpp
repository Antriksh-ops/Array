// array sorted in ascending 
// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the size of array: "<<endl;
//     cin>>n;

//     int *arr = new int[n];

//     cout<<"Enter the elements of array: "<<endl;
//     for(int i = 0; i < n; i++){
//         cin>>arr[i];
//     }

//     for( int i = 0; i < n - 1; i++){
//         for ( int j = 0 ; j < n - i - 1; j++){
//             if (arr[j] > arr[j + 1]){
//                 // swap
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }

//     cout<<"Sorted array: "<<endl;
//     for(int i = 0 ; i < n; i++){
//         cout<<arr[i]<<" ";
//     }
// }

// array sorted in descending

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;

    int *arr = new int[n];

    cout<<"Enter the elements of array: "<<endl;
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    for( int i = 0; i < n - 1; i++){
        for ( int j = 0 ; j < n - i - 1; j++){
            if (arr[j] < arr[j + 1]){
                // swap
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout<<"Sorted array: "<<endl;
    for(int i = 0 ; i < n; i++){
        cout<<arr[i]<<" ";
    }
}