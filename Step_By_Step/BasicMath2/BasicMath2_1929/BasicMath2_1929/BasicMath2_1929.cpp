#include <iostream>
using namespace std;
#include <cmath>
#include <algorithm>
int main()
{
	
	bool array[1000001];
	int num1, num2;
	cin >> num1 >> num2;
	for (int i = 2; i <= num2; i++)
	{
		array[i] = true;
	}

	array[0] = false;
	array[1] = false;

	for (int i = 2; i <= sqrt(num2); i++) {
		if (array[i]) {
			for (int j = i * i; j <= num2; j += i) {
				array[j] = false;
			}

		}
	}

	for (int k = num1; k <= num2; k++)
	{
		if (array[k] == true)
			cout << k << endl;
	}
	
	return 0;
}
