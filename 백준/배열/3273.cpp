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
	
	int i = 0, j = n - 1;

	while (true) {
		if (i > j || i==j) break;
		int temp = arr[i] + arr[j];
		if (temp < x) {
			i++;
		}
		else if (temp == x) {
			result++;
			i++;
			j--;
		}
		else {
			j--;
		}
	}

	cout << result;

	return 0;
}
