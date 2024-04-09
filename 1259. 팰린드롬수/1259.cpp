#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	while (cin >> n) {
		if (n <= 0) break;
		int cnt = 0;
		string str = to_string(n);
		int i = 0;
		int j = str.length() - 1;
		while (i <= j) {
			if (str[i] != str[j]) {
				cout << "no\n";
				break;
			}
			else {
				cnt++;
				i++;
				j--;
			}
		}
		if (cnt > (str.length() - 1) / 2) cout << "yes\n";
	}
}