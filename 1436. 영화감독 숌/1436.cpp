#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;
	int count = 0;
	int i = 666;
	while (count != n) {
		int cnt = 0;
		string str = to_string(i);
		for (int j = 0; j < str.length() - 2; j++) {
			int a = str[j] - 48;
			int b = str[j + 1] - 48;
			int c = str[j + 2] - 48;
			if (a == 6 && a == b && b == c) {
				count++;
				break;
			}
		}
		i++;
	}
	cout << i - 1;
}