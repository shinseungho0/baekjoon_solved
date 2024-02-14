#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++) {
		string str;
		getline(cin, str);
		str += ' ';
		int s = 0;
		for (int j = 0; j < str.length(); j++) {
			if (str[j] == ' ') {
				for (int e = j - 1; e >= s; e--) {
					cout << str[e];
				}
				cout << ' ';
				s = j + 1;
			}
		}
		cout << '\n';
	}
}