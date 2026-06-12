class Solution {
public:
    bool isPalindrome(string s) {
        string newS="";
       
        for (int i=0;i<s.size();i++) {
           s[i]=tolower(s[i]);
            if (s[i]>='a'&&s[i]<='z'||s[i]>='0'&&s[i]<='9') {
                newS=newS+s[i];
            }
        }
        string str=newS;
        reverse(newS.begin(),newS.end());
        if (str==newS) {
            return true;
        }else {
            return false;
        }

    }
};
