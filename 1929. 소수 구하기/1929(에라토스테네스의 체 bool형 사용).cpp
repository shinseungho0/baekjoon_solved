#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);
	int s, e;
	cin >> s >> e;
	vector<bool>v(e + 1, true);
	v[1] = false;
	for (int i = 2; i < e + 1; i++) {
		if (v[i] == true) {
			for (int j = i + i; j < e + 1; j += i) {
				v[j] = false;
			}
		}
	}
	for (int i = s; i < e + 1; i++) {
		if (v[i] == true) cout << i << '\n';
	}
}