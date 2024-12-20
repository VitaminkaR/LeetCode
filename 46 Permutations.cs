using System.Collections.Generic;
using System.Drawing;

var x = new Solution().Permute(new int[3] { 1, 2, 3 });
Console.ReadKey();

public class Solution
{
    public IList<IList<int>> Permute(int[] nums)
    {
        int n = nums.Length;
        IList<IList<int>> perms = new List<IList<int>>();
        int[] c = new int[n];
        perms.Add((IList<int>)nums.Clone());

        int i = 0;
        while (i < n)
        {
            if (c[i] < i)
            {
                if (i % 2 == 0)
                {
                    int t = nums[i];
                    nums[i] = nums[0];
                    nums[0] = t;
                }
                else
                {
                    int t = nums[c[i]];
                    nums[c[i]] = nums[i];
                    nums[i] = t;
                }
                perms.Add((IList<int>)nums.Clone());
                c[i] += 1;
                i = 0;
            }
            else
            {
                c[i] = 0;
                i += 1;
            }
        }
        return perms;
    }
}