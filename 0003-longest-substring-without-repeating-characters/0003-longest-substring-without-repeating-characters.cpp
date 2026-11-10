class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    int n =s.size();
    unordered_map<char,int> mp;
    int  i =0;
    int maxlen = 0;

    for(int j =0;j<n;j++){
        if(mp.find(s[j])!= mp.end() && mp[s[j]]>=i){
            i = mp[s[j]]+1;
        }
      mp[s[j]] = j;
      maxlen = max(maxlen,j-i+1);
    }
    return maxlen;
    }
};