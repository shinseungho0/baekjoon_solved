#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	cin >> str;

	int start = 0;
	int end = str.size() - 1;
	int count = 0;

	while (start <= end) {
		if (str[start] == str[end]) {
			start++;
			end--;
			count += 1;
		}
		else {
			start++;
			end--;
		}
	}
	int tmp = 1 + (str.size() - 1) / 2;
	if (count == tmp) cout << 1;
	else cout << 0;
}