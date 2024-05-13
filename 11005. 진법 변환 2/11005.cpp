#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int>v;
int main() {
	long n, b;
	cin >> n >> b;

	if (n < b) {
		if (n > 9 && n < 36) {
			cout << char(n + 55);
		}
		else cout << n;
		return 0;
	}

	while (1) {
		long tmp = n % b;
		v.push_back(tmp);
		n /= b;
		if (n < b) {
			v.push_back(n);
			break;
		}
	}
	for (int i = v.size() - 1; i >= 0; i--) {
		if (v[i] > 9 && v[i] < 36) {
			cout << char(v[i] + 55);
		}
		else cout << v[i];
	}
}