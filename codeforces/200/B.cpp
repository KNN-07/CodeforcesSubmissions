#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int tmp, sum;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        sum += tmp;
    }
    cout << (sum * 1.0L) / n;
}