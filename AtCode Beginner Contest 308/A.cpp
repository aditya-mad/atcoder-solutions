#include <iostream>
using namespace std;

int main()
{
    int num, prev;
    cin >> num;
    prev = num;
    bool flag = (num % 25 == 0 && num >= 100 && num <= 675);

    for (int i = 2; i <= 8; i++)
    {
        cin >> num;
        if (num < prev || num % 25 != 0 || num < 100 || num > 675)
            flag = false;
        prev = num;
    }

    if (flag)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}