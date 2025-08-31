#include <iostream>
#include <vector>
using namespace std;

int main(){

    int arr[5]; // this is static 
    vector<int> vec; // vectors are dynamic allocated

    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);

    cout<<vec.size()<<endl;
    cout<<vec.capacity();
}