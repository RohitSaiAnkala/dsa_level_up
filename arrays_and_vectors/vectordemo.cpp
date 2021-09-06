#include<bits/stdc++.h>
using namespace  std;

int main(){
    vector<int> v={1,2,3,4,5};
    // fill constructor
    vector<int> v1(10,7);
    // removing element
    v.pop_back();
    // push_back O(1)
    v.push_back(6);
    v.push_back(7);
    // size of vector
    cout<<v.size()<<endl;
    // capacity of vector
    cout<<v.capacity()<<endl;
// Print all elements
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    for(auto ele: v1){
        cout<<ele<<" ";
    }
    cout<<endl;
    return 0;
}
