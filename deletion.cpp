// deleting last element

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter size of array: "<<endl;
//     cin>>n;

//     int *arr = new int[n];

//     cout<<"Enter elements of array: "<<endl;
//     for(int i = 0; i<n; i++){
//         cin>>arr[i];
//     }

//     if( n > 0){
//         n--;
//     }
//     else{
//         cout<<"Array is already empty"<<endl;
//     }

//     cout<<"Updated array: "<<endl;
//     for(int i = 0; i < n; i++){
//         cout<<arr[i]<<" ";
//     }

// }

// deleting element at any index

#include <iostream>
using namespace std;

int main(){
    int n ,pos;
    cout<<"Enter size of array: "<<endl;
    cin>>n;

    int* arr = new int[n];

    cout<<"Enter elements of array: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter position of element to delete: "<<endl;
    cin>>pos;

    if (pos < 1 or pos > n)
    {
        cout<<"Enter valid index!"<<endl;
    }

    for (int i = pos - 1; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    
    n--;
    cout<<"Updated Array is: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
}