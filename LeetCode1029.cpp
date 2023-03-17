class Solution {
 public:
  int twoCitySchedCost(vector<vector<int>>& costs) {
    const int n = costs.size() / 2;
    int ans = 0;

    sort(begin(costs), end(costs), [](const auto& a, const auto& b) {
      return a[1] - a[0] > b[1] - b[0];
    });

    for (int i = 0; i < n; ++i)
      ans += costs[i][0] + costs[i + n][1];

    return ans;
  }
};
