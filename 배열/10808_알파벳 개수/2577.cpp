#include <iostream>
#include <string>

using namespace std;

int arr[10] = { 0 };

int main() {

	int A, B, C;
	string result = "";

	cin >> A >> B >> C;

	result = to_string(A * B * C);

	for (int i = 0; i < result.length(); i++) {
		arr[result[i] - '0'] += 1;
	}


	for (int i = 0; i < 10; i++) {
		cout << arr[i] << "\n";
	}

}