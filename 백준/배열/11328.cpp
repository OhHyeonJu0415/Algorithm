#include <iostream>
#include <string>

using namespace std;

int arr[26] = { 0 };
int arr1[26] = { 0 };

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	char temp;
	cin >> n;
	string a, b;

	for (int i = 0; i < n; i++) {
		
		fill(arr, arr + 26, 0);
		fill(arr1, arr1 + 26, 0);

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
		string ret = "Possible";

		
		for (int i = 0; i < 26; i++) {
			if (arr[i] != arr1[i]) {
				ret = "Impossible";
				break;
			}
		}
		cout << ret << "\n";
	}


	return 0;
}
