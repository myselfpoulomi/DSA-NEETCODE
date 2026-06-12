class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int, int>mp;
        // vector<int>result;

        for (int i=0;i<numbers.size();i++) {
           

            if (mp.find(target-numbers[i])==mp.end()){
                 mp[numbers[i]]=i+1;
            } else {
                int num=target-numbers[i];
               
                if (mp[num]<(i+1)) {
                    return {mp[num],i+1};
                } else {
                    return {i+1,mp[num]};
                }
            }
        }  

        
       


    }
};
