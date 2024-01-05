#include <iostream>
#include <string>
using namespace std;

int main() {
	int n, f;
	cin >> n >> f;

	string str = to_string(n);
	int a = str.length();

	while (1) {
		for (int i = 0; i <= 9; i++) {
			for (int j = 0; j <= 9; j++) {
				str[a - 2] = i + 48;
				str[a - 1] = j + 48;
				int b = stoi(str);
				if (b % f == 0) {
					cout << i << j;
					return 0;
				}
			}
		}
	}
	cout << a;
}