#include <iostream>

using namespace std;

struct Girl
{
	int year1 = 0;
	int year2 = 0;
	int year3 = 0;
	int year4 = 0;
	int year5 = 0;
	int year6 = 0;
};

struct Boy
{
	int year1 = 0;
	int year2 = 0;
	int year3 = 0;
	int year4 = 0;
	int year5 = 0;
	int year6 = 0;
};

Girl g;
Boy b;

int setGirl(int y, int k) {
	int num = 0;
	switch (y)
	{
	case 1: num=g.year1; break;
	case 2: num = g.year2; break;
	case 3:  num = g.year3; break;
	case 4:  num = g.year4; break;
	case 5:  num = g.year5; break;
	case 6:  num = g.year6; break;
	default:
		break;
	}

	if (num % k == 0) return num / k;
	else return num / k +1;
}

int setBoy(int y, int k) {
	int num = 0;
	switch (y)
	{
	case 1: num = b.year1; break;
	case 2: num = b.year2; break;
	case 3:  num = b.year3; break;
	case 4:  num = b.year4; break;
	case 5:  num = b.year5; break;
	case 6:  num = b.year6; break;
	default:
		break;
	}

	if (num % k == 0) return num / k;
	else return num / k + 1;
}

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, k, s, y;

	cin >> n >> k;

	for (int i = 0; i < n; i++) {
		cin >> s >> y;
		if (s) {
			switch (y)
			{
			case 1: b.year1 += 1; break;
			case 2: b.year2 += 1; break;
			case 3: b.year3 += 1; break;
			case 4: b.year4 += 1; break;
			case 5: b.year5 += 1; break;
			case 6: b.year6 += 1; break;

			default:
				break;
			}
		}
		else {
			switch (y)
			{
			case 1: g.year1 += 1; break;
			case 2: g.year2 += 1; break;
			case 3: g.year3 += 1; break;
			case 4: g.year4 += 1; break;
			case 5: g.year5 += 1; break;
			case 6: g.year6 += 1; break;

			default:
				break;
			}
		}
	}

	int ret = 0;

	for (int i = 1; i <= 6; i++) {
		ret += setGirl(i, k);
		ret += setBoy(i, k);
	}
	
	cout << ret;


	return 0;
}
