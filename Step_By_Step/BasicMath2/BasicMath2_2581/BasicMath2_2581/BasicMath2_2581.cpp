#include <iostream>
using namespace std;
int Return_min_prime(const int num1, const int num2);
int Add_all_primes(const int num1, const int num2);
bool Check_prime(const int num);

int main()
{
	int num1, num2;
	cin >> num1 >> num2;
	cout << Add_all_primes(num1, num2);
	return 0;
}

int Return_min_prime(const int num1, const int num2)
{
	for (int i = num1; i <= num2; i++)
	{
		if (Check_prime(i))
			return i;
	}
	// 만약에 사이에 소수가가 없으면
	return -1;
}

int Add_all_primes(const int num1, const int num2)
{
	int check_factor = Return_min_prime(num1, num2);
	if (check_factor == -1)
		return check_factor;
	else
	{
		int sum = 0;
		for (int i = num1; i <= num2; i++)
		{
			if (Check_prime(i))
				sum += i;
		}
		cout << sum << endl;
		return Return_min_prime(num1, num2);
	}
}

bool Check_prime(const int num)
{
	if (num == 1)
		return false;
	for (int i = 2; i < num; i++)
	{
		if (num % i == 0)
			return false;
	}
	return true;
}