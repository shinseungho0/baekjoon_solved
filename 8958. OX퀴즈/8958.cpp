#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;
	string str;
	int count;
	int c;
	for (int i = 0; i < n; i++) {
		count = 0;
		c = 0;
		cin >> str;
		for (int j = 0; j < str.length(); j++) {
			if (str[j] == 'O') {
				c++;
				count += c;
			}
			else if (str[j] == 'X') {
				c = 0;
				count += c;
			}
		}
		cout << count << '\n';
	}
}