#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int arr[10] = { 0 };

int main() {

	string N = "";

	cin >> N;

	for (int i = 0; i < N.length(); i++) {
		arr[N[i] - '0'] += 1;
	}

	int maxNum = *max_element(arr, arr + 10);

	if (arr[6] == maxNum || arr[9] == maxNum) {

		int temp = arr[6] + arr[9];
		arr[6] = arr[9] = temp / 2;
		if (temp % 2 != 0) {
			arr[6] += 1;
		}
		maxNum = *max_element(arr, arr + 10);
	}
	cout << maxNum << "\n";
}
