#include <iostream>
#include <string>
using namespace std;

void Swap(string& num);

int main()
{
	string num1, num2;
	cin >> num1 >> num2;

	Swap(num1);
	Swap(num2);
	//  문자열 string을 int형으로 형변환하기 위하여 stoi (string to integer)을 사용하였다.
 
	int num_1 = stoi(num1);
	int num_2 = stoi(num2);
	if (num_1 < num_2)
		cout << num_2;
	else
		cout << num_1;
	return 0;
}

void Swap(string& num)
{
	char temp = num[0];
	num[0] = num[2];
	num[2] = temp;
}