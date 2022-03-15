#include <iostream>
using namespace std;
#include <algorithm>
int main()
{
	int num;
	cin >> num;

	double* array = new double[num];
	// 배열에 점수 입력
	for (int i = 0; i < num ; i++)
	{
		cin >> array[i];
	}
	
	// 이렇게 해줘도 돼고 max =0하고 하나씩 돌아가면서 찾는 것도 괜찮음
	sort(array, array + num);

	double max = array[num-1];

	// 점수 변환(모든 점수까지 봐꿔야해서 num까지, num-1까지 아님)
	for (int i = 0; i < num; i++)
	{
		array[i] = (double)array[i] / max * 100;
	}

	// 합 구하기
	double sum = 0;
	for (int i = 0; i < num; i++)
	{
		sum += array[i];
	}

	cout << sum / (double)num;

	delete[] array;
	
	return 0;
}