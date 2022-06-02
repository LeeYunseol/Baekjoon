#include <iostream>
using namespace std;
// x랑 y가 2개씩 한 쌍 총 4개가 있어야함
int main()
{
	int array[6];
	for (int i = 0; i < 6; i++)
	{
		cin >> array[i];
	}

	int x;
	if (array[0] == array[2])
		x = array[4];
	else if (array[0] == array[4])
		x = array[2];
	else
		x = array[0];

	int y;
	if (array[1] == array[3])
		y = array[5];
	else if (array[1] == array[5])
		y = array[3];
	else
		y = array[1];

	cout << x << " " << y << endl;

	return 0;
}