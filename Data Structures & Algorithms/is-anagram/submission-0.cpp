class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length()!=t.length()) {
            return false;
        }
        unordered_map<char,int>mp;
        for (int i=0;i<s.length();i++) {
            char ch=s[i];
            
            if (mp.find(ch)==mp.end()) {
                mp[ch]=1; 
            }else {
                int count=mp[ch];
                mp[ch]=count+1;
            }
        }

        unordered_map<char,int>mp1;
        for (int i=0;i<t.length();i++) {
            char ch=t[i];
            
            if (mp1.find(ch)==mp1.end()) {
                mp1[ch]=1; 
            }else {
                int count=mp1[ch];
                mp1[ch]=count+1;
            }
        }
        if (mp==mp1) {
            return true;
        } else {
            return false;
        }
    }
};
