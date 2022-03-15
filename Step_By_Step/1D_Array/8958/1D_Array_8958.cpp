#include <iostream>
using namespace std;
#include <string>

int main()
{
    int num;
    cin >> num;
    
    
    for (int i = 0; i < num; i++)
    {
        int sum = 0;
        int count = 0;
        string answer;
        cin >> answer;
        for (char c : answer)
        {
            if (c == 'O')
            {
                ++count;
                sum += count;
            }
            else
                count = 0;
        }
        cout << sum << endl;
    }
    
}

