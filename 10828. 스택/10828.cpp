#include <iostream>
#include<string>
#include <stack>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int num;
	cin >> num;
	string str;
	int n;

	stack<int>st;
	
	for (int i = 0; i < num; i++) {
		cin >> str;
		if (str == "push") {
			cin >> n;
			st.push(n);
		}
		if (str == "pop") {
			if (st.empty() == 1) {
				cout << -1 << '\n';
			}
			else {
				cout << st.top() << '\n';
				st.pop();
			}
		}
		if (str == "top") {
			if (st.empty() == 1) {
				cout << -1 << '\n';
			}
			else cout << st.top() << '\n';
		}
		if (str == "size") {
			cout << st.size() << '\n';
		}
		if (str == "empty") {
			cout << st.empty() << '\n';
		}
	}
}