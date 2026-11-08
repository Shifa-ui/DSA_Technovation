class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());

        int longest = 0;

        for (int num : s) {
            // Check if num is the starting point
            if (s.find(num - 1) == s.end()) {
                int count = 1;
                int current = num;

                // Count consecutive numbers
                while (s.find(current + 1) != s.end()) {
                    current++;
                    count++;
                }

                longest = max(longest, count);
            }
        }

        return longest;
    }
    
};
