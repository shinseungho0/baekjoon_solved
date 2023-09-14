#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	queue<int>q;

	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;
		if (str == "push") {
			int a;
			cin >> a;
			q.push(a);
		}
		if (str == "front") {
			if (q.empty() == 1) {
				cout << -1 << '\n';
			}
			else {
				cout << q.front() << '\n';
			}
		}

		if (str == "back") {
			if (q.empty() == 1) {
				cout << -1 << '\n';
			}
			else {
				cout << q.back() << '\n';
			}
		}

		if (str == "size") cout << q.size() << '\n';
		
		if (str == "empty") cout << q.empty() << '\n';

		if (str == "pop") {
			if (q.empty() == 1) {
				cout << -1 << '\n';
			}
			else {
				cout << q.front() << '\n';
				q.pop();
			}
 		}
	}
}