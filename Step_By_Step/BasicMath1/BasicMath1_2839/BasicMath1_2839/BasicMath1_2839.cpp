#include <iostream>
using namespace std;
int Count(int kweightg);
int main()
{
	int N;
	cin >> N;
	cout << Count(N);
	return 0;
}

int Count(int weight)
{
	int count = 0;
	while (weight >= 0)
	{
		if (weight % 5 == 0)
		{
			count += weight / 5;
			return count;
		}
		else 
		{
			weight -= 3;
			count++;
		}
		
	}
	 return -1;
}