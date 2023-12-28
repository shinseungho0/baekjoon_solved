#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;
	int result = 0;
	for (int i = 1; i < n; i++) {
		int num = i;
		string str = to_string(i);
		for (int j = 0; j < str.length(); j++) {
			int a = str[j] - 48;
			num += a;
		}
		if (num == n) {
			result = i;
			break;
		}
	}
	cout << result;
}
