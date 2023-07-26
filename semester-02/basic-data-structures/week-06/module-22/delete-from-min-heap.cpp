#include <bits/stdc++.h>
using namespace std;
void insertMinHeap(vector<int> &v)
{
    int sz;
    cin >> sz;
    for (int i = 0; i < sz; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        int curIndx = v.size() - 1;
        while (curIndx != 0)
        {
            int prntIndx = (curIndx - 1) / 2;
            if (v[curIndx] < v[prntIndx])
            {
                swap(v[curIndx], v[prntIndx]);
            }
            else
            {
                break;
            }
            curIndx = prntIndx;
        }
    }
}
void deleteMinHeap(vector<int> &v)
{
    v[0] = v[v.size() - 1];
    v.pop_back();
    int currIndx = 0;
    while (1)
    {
        int leftIndx = currIndx * 2 + 1;
        int rightIndx = currIndx * 2 + 2;
        int lastIndx = v.size() - 1;
        if (leftIndx <= lastIndx && rightIndx <= lastIndx)
        {
            // duitai ase
            if (v[leftIndx] <= v[rightIndx] && v[leftIndx] < v[currIndx])
            {
                // left boro
                swap(v[leftIndx], v[currIndx]);
                currIndx = leftIndx;
            }
            if (v[leftIndx] >= v[rightIndx] && v[rightIndx] < v[currIndx])
            {
                // right boro
                swap(v[rightIndx], v[currIndx]);
                currIndx = rightIndx;
            }
            else
            {
                break;
            }
        }
        else if (leftIndx <= lastIndx)
        {
            // left ase right nai
            if (v[leftIndx] < v[currIndx])
            {
                swap(v[leftIndx], v[currIndx]);
                currIndx = leftIndx;
            }
            else
            {
                break;
            }
        }
        else if (rightIndx <= lastIndx)
        {
            // right ase left nai
            if (v[rightIndx] < v[currIndx])
            {
                swap(v[rightIndx], v[currIndx]);
                currIndx = rightIndx;
            }
            else
            {
                break;
            }
        }
        else
        {
            // left o nai right o nai
            break;
        }
    }
}
void printHeap(vector<int> v)
{
    for (int i : v)
    {
        cout << i << " ";
    }
}
int main()
{
    vector<int> v;
    insertMinHeap(v);
    deleteMinHeap(v);
    printHeap(v);

    return 0;
}