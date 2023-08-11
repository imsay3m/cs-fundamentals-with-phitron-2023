#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7;
int arr[N];
void merge(int l, int r, int mid)
{
    int leftSz = mid - l + 1;
    int lArr[leftSz + 1];

    int rightSz = r - mid; // sz=r-(mid+1)+1
    int rArr[rightSz + 1];

    // left array
    for (int i = l, j = 0; i <= mid; j++, i++)
    {
        lArr[j] = arr[i];
    }
    // right array
    for (int i = mid + 1, j = 0; i <= r; j++, i++)
    {
        rArr[j] = arr[i];
    }

    // Ascending sort
    lArr[leftSz] = INT_MAX;  // infinity
    rArr[rightSz] = INT_MAX; // infinity//

    // merging
    int lp = 0, rp = 0; // left pointer,right pointer=0
    for (int i = l; i <= r; i++)
    {
        if (lArr[lp] <= rArr[rp])
        {
            arr[i] = lArr[lp];
            lp++;
        }
        else
        {
            arr[i] = rArr[rp];
            rp++;
        }
    }
}
void mergeSort(int l, int r)
{
    if (l == r)
        return;
    int mid = (l + r) / 2; // mid value
    mergeSort(l, mid);     // left ajaw
    mergeSort(mid + 1, r); // right a jaw
    merge(l, r, mid);      // merge
}
int main()
{
    int sz;
    cin >> sz;
    for (int i = 0; i < sz; i++)
    {
        cin >> arr[i];
    }
    mergeSort(0, sz - 1);
    for (int i = 0; i < sz; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}