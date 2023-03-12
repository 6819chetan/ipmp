// Time Complexity: O(n)
// Auxiliary Space: O(1)

class Solution
{
public:
    int trap(vector<int> &a)
    {
        int l = 0, lm = 0, r = a.size() - 1, rm = 0, h = 0;
        while (l < r)
        {
            if (a[l] < a[r])
            {
                if (a[l] >= lm)
                    lm = a[l];
                else
                    h += lm - a[l];
                l++;
            }
            else
            {
                if (a[r] >= rm)
                    rm = a[r];
                else
                    h += rm - a[r];
                r--;
            }
        }
        return h;
    }
};