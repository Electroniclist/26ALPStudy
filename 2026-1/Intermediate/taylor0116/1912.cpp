#include<iostream>
using namespace std;

int main()
{
    int a = 0;
    cin >> a;
    int arr[100001];
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    int sum = arr[0];
    int max = arr[0];
    for (int i = 1; i < a; i++)
    {
        if (sum + arr[i] < arr[i])
        {
            sum = arr[i];
        }
        else
        {
            sum += arr[i];
        }
        if (max < sum)
        {
            max = sum;
        }
    }
    cout << max;
}