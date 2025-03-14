// https://leetcode.com/problems/h-index/?envType=study-plan-v2&envId=top-interview-150

class Solution
{
public:
    int hIndex(vector<int> &citations)
    {
        sort(citations.rbegin(), citations.rend()); // Sort in descending order
        int h = 0;
        for (int i = 0; i < citations.size(); i++)
        {
            if (citations[i] >= i + 1)
            {
                h = i + 1;
            }
            else
            {
                break;
            }
        }
        return h;
    }
};