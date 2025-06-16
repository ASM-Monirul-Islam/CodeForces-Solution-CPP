#include<bits/stdc++.h>
using namespace std;
int main() {
	string s1,s2;
	cin>>s1>>s2;
	sort(s1.begin(), s1.end());
	sort(s2.begin(), s2.end());
	for(int i=0; i<s1.length(); i++) {
		s1[i]=tolower(s1[i]);
		s2[i]=tolower(s2[i]);
	}
	int output = s1.compare(s2);
	cout<<output<<endl;
	return 0;
}