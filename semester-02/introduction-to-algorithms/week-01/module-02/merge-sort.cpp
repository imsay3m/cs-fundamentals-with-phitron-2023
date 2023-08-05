#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7;
int nums[N];
void merge(int l, int r, int mid)
{
    int leftSz = mid - l + 1;
    int L[leftSz + 1];

    int rightSz = r - mid;
    int R[rightSz + 1];
    for (int i = l, j = 0; i < mid + 1; i++, j++)
    {
        L[j] = nums[i];
    }
    for (int i = mid + 1, j = 0; i < r + 1; i++, j++)
    {
        R[j] = nums[i];
    }

    L[leftSz] = INT_MAX;
    R[rightSz] = INT_MAX;

    int lp = 0, rp = 0;
    for (int i = l; i < r + 1; i++)
    {
        if (L[lp] <= R[rp])
        {
            nums[i] = L[lp];
            lp++;
        }
        else
        {
            nums[i] = R[rp];
            rp++;
        }
    }
}
void mergeSort(int l, int r)
{
    if (l == r)
    {
        // base case
        return;
    }
    int mid = (l + r) / 2;
    mergeSort(l, mid);
    mergeSort(mid + 1, r);
    merge(l, r, mid);
}
void merge()
{
}
int main()
{
    int sz;
    cin >> sz;
    for (int i = 0; i < sz; i++)
    {
        cin >> nums[i];
    }
    mergeSort(0, sz - 1);
    for (int i = 0; i < sz; i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}