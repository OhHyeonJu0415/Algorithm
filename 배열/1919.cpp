#include <iostream>
#include <string>

using namespace std;

int arr[26] = { 0 };
int arr1[26] = { 0 };

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string a, b;

	
	cin >> a >> b;
	int j = 0, k = 0;
	while (true) {
		if (j >= a.length() && k >= b.length()) break;

		if (j < a.length()) {
			arr[a[j] - 97] += 1;

		}
		if (k < b.length()) {
			arr1[b[k] - 97] += 1;

		}
		j++; k++;
	}


	int ret = 0;

	for (int i = 0; i < 26; i++) {
		if (arr[i] != arr1[i]) {
			if (arr[i] > arr1[i]) {
				ret += arr[i] - arr1[i];
			}
			else {
				ret += arr1[i] - arr[i];
			}
		}
	}
	cout << ret;
	


	return 0;
}