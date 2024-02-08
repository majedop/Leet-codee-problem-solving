#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
  vector<int> ans;
  int ii, jj;
  for (int i = 0; i < nums.size(); i++)
  {
    for (int j = 0; j < nums.size(); j++)
    {
      if (i == j)
        continue;
      if (nums[i] + nums[j] == target)
      {
        ii = i;
        jj = j;
        break;
      }
    }
  }
  ans.push_back(ii);
  ans.push_back(jj);
  return ans;
}
int main()
{

  vector<int> nums = {3, 2, 4};
  vector<int> ans = twoSum(nums, 6);
  for (int i = 0; i < ans.size(); i++)
    cout << ans[i] << " ";
  return 0;
}
