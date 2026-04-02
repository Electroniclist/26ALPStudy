#include<iostream>
using namespace std;
int main()
{
    int a = 0;
    int rec[1001] = {1, 1};
    for (int i = 2; i <= 1000; i++)
    {
        rec[i] = (rec[i - 1] + 2 * rec[i - 2]) % 10007;
    }
    cin >> a;
    cout << rec[a];
}