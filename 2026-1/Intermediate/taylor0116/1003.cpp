#include<iostream>
using namespace std;
/* 피보나치 함수
int fib(int a)
{
    if (a == 0)
    {
        cout << "0";
        return 0;
    }
    else if (a == 1)
    {
        cout << "1";
        return 1;
    }
    
    else
    {
        return fib(a - 1) + fib(a - 2);
    }
}
*/
int main()
{
    int a = 0;
    int fib[50] = {0,1,1};
    for (int i = 3; i < 50; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        int b = 0;
        cin >> b;
        if (b == 0)
        {
            cout << 1 << " " << 0 << endl;
        }
        else if (b == 1)
        {
            cout << 0 << " " << 1 << endl;
        }
        else
        {
            cout << fib[b - 1] << " " << fib[b] << endl;
        }
    }
}