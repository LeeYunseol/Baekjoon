
#include <iostream>
using namespace std;
#include <algorithm>
int main() {
    int size;
    cin >> size;
    
    int array[1000000];

    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }


    sort(array, array + size);

    cout << array[0] << " " << array[size - 1];

    return 0;
}
