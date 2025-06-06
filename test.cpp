#include<bits/stdc++.h>
using namespace std;

int main() {
	string str;
	getline(cin, str);
	// str.append("helo");
	cout<<str;
	cout<<"Enter another string: ";
	string str2;
	getline(cin, str2);
	str2.swap(str);
	cout<<str2;
	return 0;
}