#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main()
{
    int pla, col;
    long long int ans = 0;
    cin >> pla >> col;

    vector<string> colours(col), plates(pla);
    unordered_map<string, int> memo;
    vector<int> prices(col + 1);

    for (int i = 0; i < pla; i++)
    {
        cin >> plates[i];
    }
    for (int i = 0; i < col; i++)
    {
        cin >> colours[i];
    }
    for (int i = 0; i < col + 1; i++)
    {
        cin >> prices[i];
    }

    for (int i = 0; i < col; i++)
    {
        memo[colours[i]] = prices[i + 1];
    }

    for (auto x : plates)
    {
        if (memo.count(x))
        {
            ans += memo[x];
        }
        else
        {
            ans += prices[0];
        }
    }
    cout << ans;
    return 0;
}