#include <iostream>
using namespace std;
// 되게 비효율적으로 풀었다고 생각... 그 이유는 for문을 너무 많이 사용하였음.
// 함수 사용하기
int Check_self_number(int num);

int main()
{
	int array[10000];
	// 만든 배열에 1부터 10000값을 집어 넣기
	for (int i = 0; i < 10000; i++)
	{
		array[i] = i + 1;
	}
	// 10000까지 돌리면서 만약에 self_number가 아닌 수가 나오면 그 index에 대한 값을 0으로 만들어주기
	for (int i = 0; i < 10000; i++)
	{
		int x = Check_self_number(i);
		for (int i = 0; i < 10000; i++)
		{
			if (array[i] == x)
			{
				array[i] = 0;
				break;
			}
		}		
	}
	// 출력은 1이상 한 것만 하면 똑같음
	for (int i = 0; i < 10000; i++)
	{
		if (array[i] > 0)
			cout << array[i] << endl;
	}
	return 0;
}

int Check_self_number(int num)
{
	int sum = num;
	while (num != 0)
	{
		int add_num = num % 10;
		sum += add_num;
		num /= 10;
	}

	return sum;
}