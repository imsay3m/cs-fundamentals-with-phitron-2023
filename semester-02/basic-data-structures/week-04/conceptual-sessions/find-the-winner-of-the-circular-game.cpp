class Solution
{
public:
    int findTheWinner(int n, int k)
    {
        queue<int> q;
        for (int i = 1; i <= n; i++)
        {
            q.push(i);
        }
        int cnt = k;
        while (q.size() > 1)
        {
            int val = q.front();
            q.pop();
            cnt--;
            if (cnt == 0)
            {
                cnt = k;
            }
            else
            {
                q.push(val);
            }
        }
        return q.front();
    }
};