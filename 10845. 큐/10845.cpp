#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
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
		if (str == "pop") {
			if (q.empty()) cout << -1 << '\n';
			else {
				cout << q.front() << '\n';
				q.pop();
			}
		}
		if (str == "size") cout << q.size() << '\n';
		if (str == "empty") cout << q.empty() << '\n';
		if (str == "front") {
			if (q.empty()) cout << -1 << '\n';
			else cout << q.front() << '\n';
		}
		if (str == "back") {
			if (q.empty()) cout << -1 << '\n';
			else cout << q.back() << '\n';
		}
	}
}