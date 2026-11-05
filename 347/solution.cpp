class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
          unordered_map<int, int> mp;

        // Count frequency of each element
        for(int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }

        // Store elements and their frequencies
        vector<pair<int, int>> v;

        for(auto it : mp) {
            v.push_back({it.first, it.second});
        }

        // Sort according to frequency (highest first)
        sort(v.begin(), v.end(), [](auto a, auto b) {
            return a.second > b.second;
        });

        // Store top k frequent elements
        vector<int> ans;

        for(int i = 0; i < k; i++) {
            ans.push_back(v[i].first);
        }

        return ans;
    }
        
    
};
