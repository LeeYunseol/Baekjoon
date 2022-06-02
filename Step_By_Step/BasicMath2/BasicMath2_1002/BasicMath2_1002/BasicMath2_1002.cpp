#include <iostream>
#include <cmath>
using namespace std;

// 생각해보니깐 네가지 유형
// 1. 접점이 2개
// 2. 접점이 1개(2가지 유형)
// 3. 접점이 0개 (2가지 유형)
// 4. 아예 겹쳐서 접점이 무한대일때
int main()
{
	int how_many;
	cin >> how_many;
	for (int i = 0; i < how_many; i++)
	{
		int x1, y1, r1, x2, y2, r2;
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		// 두 점의 거리
		double distance = sqrt((x1 - x2) * (x1 - x2) + (y2 - y1) * (y2 - y1));

		double sub = abs(r1 - r2);

		if (distance == 0 && r1 == r2)
			cout << -1 << endl;
		else if (r1 + r2 == distance || sub == distance)
			cout << 1 << endl;
		else if (sub < distance && distance < r1 + r2)
			cout << 2 << endl;
		else
			cout << 0 << endl;
	}

	return 0;
}