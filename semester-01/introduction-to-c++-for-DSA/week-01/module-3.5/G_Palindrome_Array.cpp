#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (n == 1)
    {
        cout << "YES" << endl;
        return 0;
    }
    int flag = 0;
    int j = n - 1;
    for (int k = 0; k < n / 2; k++)
    {
        if (arr[k] != arr[j])
        {
            flag = 1;
            break;
        }
        j--;
    }
    if (flag)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }

    delete[] arr;
    return 0;
}
