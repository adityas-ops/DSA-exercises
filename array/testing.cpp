#include <bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(vector<int> &nums)
{
    int max = 0;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == 1)
        {
            int temp = 0;
            int j = i;
            while (nums[j] == 1 && i < n)
            {
                temp++;
                j++;
            }
            if (max < temp)
            {
                max = temp;
            }
        }
    }
    return max;
}
int main()
{
    vector<int> v = {1,1,0,1};
    cout << findMaxConsecutiveOnes(v);
}