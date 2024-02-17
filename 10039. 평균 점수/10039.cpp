#include <iostream>
using namespace std;

int main() {
    int count = 0;
    for (int i = 0; i < 5; i++) {
        int n;
        cin >> n;
        if (n < 40) {
            count += 40;
            continue;
        }
        count += n;
    }
    cout << count / 5;
}