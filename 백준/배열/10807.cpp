#include <iostream>

using namespace std;

int arr[100] = { 0 };

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, result = 0, v;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	cin >> v;

	for (int i = 0; i < n; i++) {
		if (arr[i] == v) result++;
	}

	cout << result;

	return 0;
}
