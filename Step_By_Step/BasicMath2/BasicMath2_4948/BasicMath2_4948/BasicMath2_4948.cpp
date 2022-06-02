#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;


int main() {

	// int 하면 범위 너무 커졌다 bool로 하고 true, false 넣어줄 띵크!
	bool a[246913];
	const int MAX = 246912;
	a[0] = false;
	a[1] = false;
	//계속 틀렸던 이유.  i를 N으로 했다. 만약 1부터면 1을 다시 true만들어준 셈
	for (int i = 2; i <= MAX; i++) {
		a[i] = true;
	}

	for (int i = 2; i <= sqrt(MAX); i++) {
		if (a[i]) {
			for (int j = i * i; j <= MAX; j += i) {
				a[j] = false;
			}

		}
	}

	// true인 것이 소수
	while (true)
	{
		int num1;
		cin >> num1;
		if (num1 == 0)
			break;

		const int num2 = num1 * 2;
		int count = 0;
		for (int i = num1 +1 ; i <= num2; i++)
		{
			if (a[i] == true)
				count++;
		}
		cout << count << endl;
	}
	return 0;
}

