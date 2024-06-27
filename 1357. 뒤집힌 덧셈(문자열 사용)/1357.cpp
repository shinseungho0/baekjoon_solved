#include <iostream>
#include <string>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;

	string str1 = to_string(a);
	string str2 = to_string(b);
	string st1 = "";
	string st2 = "";
	int cnt = 0;
	for (int i = str1.length() - 1; i >= 0; i--) {
		st1 += str1[i];	
	}
	for (int i = str2.length() - 1; i >= 0; i--) {
		st2 += str2[i];
	}
	for (int i = 0; i < st1.length(); i++) {
		if (st1[i] == '0') cnt++;
		else break;
	}
	string c1 = st1.substr(cnt, 10);
	cnt = 0;
	for (int i = 0; i < st2.length(); i++) {
		if (st2[i] == '0') cnt++;
		else break;
	}
	string c2 = st2.substr(cnt, 10);

	int n = stoi(c1);
	int m = stoi(c2);

	int k = n + m;

	string str3 = to_string(k);
	string st3 = "";
	for (int i = str3.length() - 1; i >= 0; i--) {
		st3 += str3[i];
	}
	cnt = 0;
	for (int i = 0; i < st3.length(); i++) {
		if (st3[i] == '0') cnt++;
		else break;
	}
	cout << st3.substr(cnt, 10);
}