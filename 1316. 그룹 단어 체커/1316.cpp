#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;
	int count = 0;
	int re = 0;
	string str;

	for (int i = 0; i < n; i++) {
		cin >> str;
		re = 0;
		bool arr[26] = { false, };
		arr[str[0] - 97] = true;
		for (int j = 1; j < str.length(); j++) {
			if (str[j] == str[j - 1]) continue;
			else if (str[j] != str[j - 1] && arr[str[j] - 97] == true) {
				re--; 
				break;
			}
			else arr[str[j] - 97] = true;
		}
		if (re == 0) count++;
	}
	cout << count;
}