class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
          vector<bool> result;
  int maxCandies = candies[0];
  for (int i = 0; i < candies.size(); i++) {
    if (maxCandies < candies[i]) {
      maxCandies = candies[i];
    }
  }
  cout << maxCandies;

  for (int j = 0; j < candies.size(); j++) {
    if (candies[j] + extraCandies >= maxCandies) {
      result.push_back(true);
    } else {
      result.push_back(false);
    }
  }
  return result;
    }
};