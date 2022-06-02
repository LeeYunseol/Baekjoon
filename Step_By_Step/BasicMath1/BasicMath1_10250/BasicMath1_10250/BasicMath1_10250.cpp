#include <iostream>
using namespace std;

int Assign_room(int h, int w, int n);

int main()
{
	int how_many;
	cin >> how_many;

	for (int i = 0; i < how_many; i++)
	{
		int H, W, N;
		cin >> H >> W >> N;
		cout << Assign_room(H, W, N) << endl;;
	}

	return 0;
}
// 그림을 그려보면 쉽게 이해 가능
int Assign_room(int h, int w, int n)
{
	int temp;
	if (n % h == 0)
		temp = h;
	else
		temp = n % h;

	int temp2;
	if (n / h == 0)
		temp2 = 1;
	else if (n % h == 0)
		temp2 = n / h;
	else
		 temp2 = n / h + 1;

	return temp * 100 + temp2;
}