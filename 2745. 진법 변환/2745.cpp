#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	int n;
	cin >> str >> n;
	int tmp = 0;
	int cnt = 0;
	if (str[str.length() - 1] >= 65) {
		cnt = str[str.length() - 1] - 55;
	}
	else cnt = str[str.length() - 1] - 48;
	int j = 1;
	for (int i = str.length() - 2; i >= 0; i--) {
		tmp = 0;
		if (str[i] >= 65) {
			tmp = str[i] - 55;
		}
		else tmp = str[i] - 48;
		for (int k = 0; k < j; k++) {
			tmp *= n;
		}
		cnt += tmp;
		j++;
	}
	cout << cnt;
}