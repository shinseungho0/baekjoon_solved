#include <iostream>
using namespace std;

int main() {
	int e, s, m;
	cin >> e >> s >> m;
	int i = 1;
	int a = 1, b = 1, c = 1;
	while (1) {
		if (a == e && b == s && c == m) break;
		if (i % 15 == 0) a = 0;
		if (i % 28 == 0) b = 0;
		if (i % 19 == 0) c = 0;
		a++;
		b++;
		c++;
		i++;
	}
	cout << i;
}