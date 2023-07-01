#include <iostream>
#include <vector>
#include <unordered_map>
#include <utility>
#include <algorithm>
using namespace std;

bool compare(const pair<double, long long int> &a, const pair<double, long long int> &b)
{
    if (a.first != b.first)
        return (a.first > b.first);
    else
        return (a.second < b.second);
}

int main()
{
    long long int size;
    cin >> size;

    vector<pair<double, long long int>> nums(size);

    for (long long int i = 0; i < size; i++)
    {
        double a, b;
        cin >> a >> b;
        nums[i] = make_pair((a / (a + b)), i);
    }

    sort(nums.begin(), nums.end(), compare);

    for (auto x : nums)
    {
        cout << x.second + 1 << " ";
    }

    return 0;
}
