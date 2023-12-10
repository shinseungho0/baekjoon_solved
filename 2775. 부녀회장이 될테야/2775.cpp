#include <iostream>
#include <vector>
using namespace std;

int main() {
	int num;
	cin >> num;
	vector<vector<int>>v(20, vector<int>(20, 0));
	for (int i = 0; i < 15; i++) {
		v[0][i] = i;
	}
	for (int i = 1; i < 15; i++) {
		for (int j = 1; j < 15; j++) {
			for (int k = 1; k <= j; k++) {
				v[i][j] += v[i - 1][k];
			}
		}
	}
	for (int i = 0; i < num; i++) {
		int k, n;
		cin >> k >> n;
		cout << v[k][n] << '\n';
	}
}