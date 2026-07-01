class Solution {
public:
    int lengthOfLongestSubstring(string s)
     { int low=0;
     int high=0;
     int n=s.size();
     int count =0;
     unordered_map<char,int>mp;
     while(high<n)
     {
        mp[s[high]]++;
       
        while(mp[s[high]]>1)
        {
            mp[s[low]]--;
            low++;
        }
        count=max(count,high-low+1);
        
         high++;

     }
     return count;
     
        
    }
};
