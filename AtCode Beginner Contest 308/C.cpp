#include <iostream>
#include <vector>
#include <unordered_map>
#include <utility>
#include <algorithm>
using namespace std;

int main()
{

    long long int size;
    cin >> size;

    vector<pair<long long int, long long int>> nums(size);

    for (long long int i = 0; i < size; i++)
    {
        long long int a, b;
        cin >> a >> b;
        nums[i] = make_pair(a, a + b);
    }

    auto comapre = [&](int i, int j)
    {
        long long ai, bi, aj, bj;
        ai = nums[i].first;
        bi = nums[i].second;
        aj = nums[j].first;
        bj = nums[j].second;

        return (ai * bj > aj * bi);
    };

    vector<long long int> memo(size);

    for (int i = 0; i < size; i++)
        memo[i] = i;

    stable_sort(memo.begin(), memo.end(), comapre);

    for (auto x : memo)
        cout << x + 1 << " ";
    return 0;
}
