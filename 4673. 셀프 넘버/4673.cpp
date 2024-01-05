#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<long>v(15000, 0);
	for (int i = 1; i < 10001; i++) {
		int a = i;
		int sum = i;
		while (a != 0) {
			sum += a % 10;
			a /= 10;
		}
		v[sum] = 1;
	}
	for (int i = 1; i < 10001; i++) {
		if (v[i] == 0) cout << i << '\n';
	}
}