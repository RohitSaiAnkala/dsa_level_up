#include<bits/stdc++.h>
using namespace  std;

int  main(){
    // 2D Vector
    vector<vector<int>> arr = {{1,2,3},{4,5,6},{7,8,9,10},{11,12}};
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[i].size();j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    arr[0][0]+=10; // updating val -->access vector val using indexing
    cout<<"----------\n";
     for(auto v: arr){
        for(auto val:v){
            cout<<val<<" ";
        }
        cout<<endl;
    }

    return 0;
}