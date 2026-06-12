class Solution {
   public:
    bool isPalindrome(string s) {
        string newS = "";
        for (int i = 0; i < s.size(); i++) {
            s[i] = tolower(s[i]);
            if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= '0' && s[i] <= '9') {
                newS = newS + s[i];
            }
        }

        // for (int i=0;i<newS.size();i++) {
        //      int j = newS.size() - 1;
        //         if (newS[i] != newS[j]) {
        //             return false;
        //         }
        //         j--;
        // }
        int i = 0;
        int j = newS.size() - 1;

        while (i < j) {
            if (newS[i] != newS[j]) {
                return false;
            }
            i++;
            j--;
        }

        return true;
    }
};
