#include<iostream>
#include<unordered_set>
using namespace std;

int main(){

	unordered_set<int> s;
	s.insert(10);
	s.insert(20);
	s.insert(30);
	s.erase(10);
	int key;
	cin>>key;

	if(s.find(key)==s.end())
		cout<<"Element not found"<<endl;
	else
		cout<<"Element "<<key<<" found"<<endl;

	for(int x: s){
		cout<<x<<" ";
	}
	return 0;
}