#include<bits/stdc++.h>

using namespace std;

vector<int> pairSum(vector<int> arr, int target) {
    unordered_set<int> s;
    vector<int> res;
    for (int ele:arr) {
        int x = target - ele;
        if (s.find(x) != s.end()) {
            res.push_back(ele);
            res.push_back(x);
            return res;
        }
        s.insert(ele);
    }
    return {};
}

int main() {
    vector<int> arr{10, 5, 2, 3, -6, 9, 11};
    int target = 4;
    auto p = pairSum(arr, target);
    if (p.size() == 0)
        cout << "No such pair";
    else
        cout << p[0] << " " << p[1] << endl;
    return 0;
}