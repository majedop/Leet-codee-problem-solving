#include <bits/stdc++.h>
using namespace std;
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2)
{
  vector<double> all_value;
  
  for (int i = 0; i < nums1.size(); i++)
    all_value.push_back(nums1[i]);

  for (int i = 0; i < nums2.size(); i++)
    all_value.push_back(nums2[i]);

  sort(all_value.begin(), all_value.end());

  int mid = all_value.size() / 2;

  if (all_value.size() % 2 == 1)
    return all_value[mid];
    return (all_value[mid] + all_value[mid - 1]) / 2;
}
