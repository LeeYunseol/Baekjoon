#include <iostream>
using namespace std;

int main()
{
    int num;
    // 배열을 0으로 초기화하는 방법
    int array[42] = {};
    for (int i = 0; i < 10; i++)
    {
        cin >> num;
        int remain = num % 42;
        array[remain]++;
    }
    int count=0;
    for (int i = 0; i < sizeof(array) / sizeof(int); i++)
    {
        if (array[i] > 0)
            count++;
    }
    cout << count;
}
