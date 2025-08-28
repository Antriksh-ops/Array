// inserting at the last

// #include<iostream>
// using namespace std;

// int main(){

//     int  max_arr[100];
//     int n,elm;
//     cout<<"Enter the size of array: "<<endl;
//     cin>>n;

//     cout<<"Enter the elements of array: "<<endl;
//     for (int i = 0; i < n; i++){
//         cin>>max_arr[i];
//     }

//     cout<<"Enter element to add: "<<endl;
//     cin>>elm;

//     max_arr[n] = elm;
//     n = n + 1;

//     cout<<"New array "<<endl;

//     for(int i = 0; i < n; i++){
//         cout<<max_arr[i]<<" ";
//     }
// }

// inserting at any index enter by the user
// inserting at the last

#include <iostream>
using namespace std;

int main(){

    int n,elm,pos;
    int max_arr[100];
    
    cout<<"Enter size of array: "<<endl;
    cin>>n;

    cout<<"Enter elements of array: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>max_arr[i]; 
    }

    cout<<"Enter element to add: "<<endl;
    cin>>elm;

    cout<<"Enter at which position to add: "<<endl;
    cin>>pos;

    for (int i = n; i >= pos; i--)
    {
        max_arr[i] = max_arr[i - 1];
    }

    max_arr[pos - 1] = elm;
    n++;
    
    cout<<"New array is: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<max_arr[i]<<" ";
    }
    
    
    
}