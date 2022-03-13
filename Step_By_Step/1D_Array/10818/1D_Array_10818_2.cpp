#include <iostream>
using namespace std;

int main()
{
    int size;
    cin >> size;

    int* array = new int[size]; // 배열의 동적할당 이 형태는 잘 외워두는게 좋을듯?

    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    int max = -10000000;
    int min = 10000000;

    for (int i = 0; i < size; i++)
    {
        if (max < array[i])
            max = array[i];
        if (min > array[i])
            min = array[i];
    }
    cout << min << " " << max;
    delete[] array;
    return 0;
}


