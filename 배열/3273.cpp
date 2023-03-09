#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int arr[100000] = { 0 };

int main() {

	int n, x, result = 0;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	cin >> x;

	sort(arr, arr + n);

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[i] + arr[j] == x) result += 1;
			else if (arr[i] + arr[j] > x) break;
		}
	}

	cout << result;

	return 0;
}