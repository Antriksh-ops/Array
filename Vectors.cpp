#include <iostream>
#include <vector>
using namespace std;


int main(){
    vector<int> vec = {1,2,3};
    cout<<"Size = "<<vec.size()<<endl;
    // vector<int> vec1(3,0); // 3 size ka vector and 0 is at first index
    // cout<<vec[0]<<endl;
    // cout<<vec1[0]<<endl;
    vec.push_back(4);
    vec.push_back(5);
    vec.pop_back();
    
    // for(int elm : vec){ // enhanced loop
    //     cout<<elm<<" ";
    // }
    cout<<vec.front();
    cout<<endl;
    cout<<vec.back();
    cout<<endl;
    cout<<"Size after push_back = "<<vec.size()<<endl;
    return 0;
}