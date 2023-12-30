#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	int x, y;
	cin >> x >> y;
	vector <vector<int>>v(1000, vector<int>(1000, 0));
	for (int i = 1; i <= x; i++) {
		for (int j = 1; j <= y; j++) {
			int temp;
			cin >> temp;
			v[i][j] = v[i - 1][j] + v[i][j - 1] + temp - v[i - 1][j - 1];
		}
	}
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		cout << v[x2][y2] - v[x2][y1 - 1] - v[x1 - 1][y2] + v[x1 - 1][y1 - 1] << '\n';
	}
}
