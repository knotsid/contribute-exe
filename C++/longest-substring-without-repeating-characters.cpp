//Leetcode problem link-https://leetcode.com/problems/longest-substring-without-repeating-characters/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> freq;        
        int n = s.length(), st = 0, end = 0, ans = 0;		
        while(end < n){            
            freq[s[end]]++;            
            while(freq[s[end]] != 1){
                freq[s[st]]--;
                st++;
            }            
            ans = max(ans, end - st + 1);
            end++;                   
        }        
        return ans;  

     }
};