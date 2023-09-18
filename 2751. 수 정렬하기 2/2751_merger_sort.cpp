#include <iostream>
#include <vector>
using namespace std;

vector<int>v;
vector<int>tmp;

void merge_sort(int s, int e) {
	if (e - s < 1) return;

	int m = s + (e - s) / 2;

	merge_sort(s, m);
	merge_sort(m + 1, e);

	for (int i = s; i <= e; i++) {
		tmp[i] = v[i];
	}

	int k = s; 
	int index1 = s;
	int index2 = m + 1;

	while (index1 <= m && index2 <= e) {
		if (tmp[index1] < tmp[index2]) {
			v[k] = tmp[index1];
			k++;
			index1++;
		}
		else {
			v[k] = tmp[index2];
			k++;
			index2++;
		}
	}

	while (index1 <= m) {
		v[k] = tmp[index1];
		k++;
		index1++;
	}

	while (index2 <= e) {
		v[k] = tmp[index2];
		k++;
		index2++;
	}
}

int main() {
	int n;
	cin >> n;

	v = vector<int>(n + 1, 0);
	tmp = vector<int>(n + 1, 0);

	for (int i = 1; i <= n; i++) {
		cin >> v[i];
	}

	merge_sort(1, n);

	for (int i = 1; i <= n; i++) {
		cout << v[i] << '\n';
	}
}