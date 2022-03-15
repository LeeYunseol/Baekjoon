#include <iostream>
using namespace std;
#include <cmath>
int main()
{
	int num;
	cin >> num;

	for (int i = 0; i < num; i++)
	{
		int num_student;
		cin >> num_student;
		
		double* array = new double[num_student];
		for (int i = 0; i < num_student; i++)
		{
			cin >> array[i];
		}
		double average = 0;
		for (int i = 0; i < num_student; i++)
		{
			average += array[i];
		}

		average /= num_student;

		double count = 0;
		for (int i = 0; i < num_student; i++)
		{
			if (array[i] > average)
				count++;
		}
		// 소수점 조절하는 코드
		cout.setf(ios::fixed);
		cout.precision(3);
		// c++에서는 round에 소수점 몇 째자리까지 하는게 없어서 round()안에 천을 곱하고 다시 천을 나눠야 소수점 3째자리까지 남음
		cout << roundf((count / num_student * 100.0)*1000) / 1000<< "%" << endl;

		delete[] array;
	}
	
	return 0;
}