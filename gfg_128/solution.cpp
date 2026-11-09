
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

                     int len = stoi(s.substr(i, j - i));

         
            string str = s.substr(j + 1, len);

            ans.push_back(str);

         
            i = j + 1 + len;
        }

        return ans;
    }
};
