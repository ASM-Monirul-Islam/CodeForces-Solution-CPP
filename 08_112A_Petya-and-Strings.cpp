#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s1, s2;
	cin >> s1 >> s2;
	if (s1.length() == s2.length() and s1.length() <= 100)
	{
		for (int i = 0; i < s1.length(); i++)
		{
			s1[i] = tolower(s1[i]);
			s2[i] = tolower(s2[i]);
		}
		if (s1 > s2)
			cout << "1" << endl;
		else if (s1 < s2)
			cout << "-1" << endl;
		else
			cout << "0" << endl;
	}

	return 0;
}