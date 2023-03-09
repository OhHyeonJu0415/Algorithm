#include <iostream>
#include <string>

using namespace std;

int arr[26] = { 0 };

int main() {

	string str = "";

	cin >> str;

	for (int i = 0; i < str.length(); i++) {
		arr[str[i] - 97] += 1;
	}

	for (int i = 0; i < 26; i++) {
		cout << arr[i] << " ";
	}
}