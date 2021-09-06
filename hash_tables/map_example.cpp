#include<iostream>
#include<map>

using namespace std;

int main() {

    map<string, int> menu;

    // inserting key values in map ->O(logn) operation
    menu["dosa"] = 99;
    menu["colddrink"] = 10;
    menu["maggi"] = 15;
    menu["pizza"] = 499;
    menu["indianplatter"] = 399;

    // updating query O(logn) operation
    menu["dosa"] = (1 + 0.1) * menu["dosa"];

    // deleting query O(logn) operation
    menu.erase("dosa");

    // searching a key in map -> O(logn) operation
    string item;
    cin >> item;
    if (menu.count(item) == 0)
        cout << item << " is not available" << endl;
    else
        cout << item << " is available and its cost is " << menu[item] << endl;

    // we can iterate over all the key-value pairs that are present
    for (auto pair: menu) {
        cout << pair.first << " - " << pair.second << endl;
    }
    return 0;
}