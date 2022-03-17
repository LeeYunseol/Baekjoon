#include <vector>
long long sum(std::vector<int>& a) {
    long long ans = 0;
    for (int i = 0; i < a.size(); i++)
    {
        // vector의 index 접근 방법은 이것도 있고 a.at(i) 도 있음.
        ans += a[i];
    }
    return ans;
}
