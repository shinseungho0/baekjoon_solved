#include <iostream>
#include <stack>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(0);

	int n; // 명령의 수
	cin >> n;
	stack<int>s;

	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		if (num == 1) {
			int a;
			cin >> a;
			s.push(a);
		}
		if (num == 2) {
			if (s.empty() == 1) {
				cout << -1 << '\n';
			}
			else {
				cout << s.top() << '\n';
				s.pop();
			}
		}
		if (num == 3) {
			cout << s.size() << '\n';
		}
		if (num == 4) {
			cout << s.empty() << '\n';
		}
		if (num == 5) {
			if (s.empty() == 1) {
				cout << -1 << '\n';
			}
			else {
				cout << s.top() << '\n';
			}
		}
	}
}