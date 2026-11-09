
class Solution {
public:
    string encode(vector<string>& arr) {
        string s = "";

        for (string str : arr) {
            s += to_string(str.length()) + "/" + str;
        }

        return s;
    }

    vector<string> decode(string& s) {
        vector<string> ans;
        int i = 0;

        while (i < s.length()) {
            int j = i;

            // Find the delimiter '/'
            while (s[j] != '/') {
                j++;
            }

            // Extract the length
            int len = stoi(s.substr(i, j - i));

            // Extract the original string
            string str = s.substr(j + 1, len);

            ans.push_back(str);

            // Move to the next encoded string
            i = j + 1 + len;
        }

        return ans;
    }
};
