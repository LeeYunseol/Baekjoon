#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
void swap(int& num1, int& num2);

int main() {

	// int 하면 범위 너무 커졌다 bool로 하고 true, false 넣어줄 띵크!
	bool a[10001];
	const int MAX = 10000;
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

	int how_many;
	cin >> how_many;
	for (int i = 0; i < how_many; i++)
	{
		vector<int> Primes;
		int num;
		cin >> num;
		for (int i = 0; i <= num; i++)
		{
			if (a[i] == true)
				Primes.push_back(i);
		}

		int min = 1000000; // 일부러 큰 수로 지정
		int answer_num1;
		int answer_num2;
		for (vector<int>::const_iterator iter_left = Primes.cbegin(); iter_left != Primes.cend(); ++iter_left)
		{
			int num1 = *iter_left;
			for (vector<int>::const_iterator iter_right = Primes.cbegin(); iter_right != Primes.cend() ; ++iter_right)
			{
				int num2 = *iter_right;
				if (num1 >= num2&& num1 + num2 == num)
				{
					if (num1 - num2 <= min)
					{
						min = num1 - num2;
						answer_num1 = num2;
						answer_num2 = num1;
					}
				}
			}
			
		}
		cout << answer_num1 << " " << answer_num2 << endl;
	}

	return 0;
}

void swap(int& num1, int& num2)
{
	int temp = num1;
	num1 = num2;
	num2 = num1;
}

