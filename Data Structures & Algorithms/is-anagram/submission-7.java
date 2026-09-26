class Solution {
    public boolean isAnagram(String s, String t) 
    {
        HashMap<Character,Integer>mp= new HashMap<>();
         HashMap<Character,Integer>mpm= new HashMap<>();
        for(int i =0;i<s.length();i++)
        {
            
            char ch=s.charAt(i);
            if(!mp.containsKey(ch))
            {
                mp.put(ch,1);
            }
            mp.put(ch,mp.get(ch)+1);
            
            
            
        }
        for(int j=0;j<t.length();j++)
            {
                char c=t.charAt(j);
                if(!mpm.containsKey(c))
            {
                mpm.put(c,1);

            }
            mpm.put(c,mpm.get(c)+1);
            }
            if(mp.equals(mpm))
            {
                return true;
            }
            return false;
                
    }
}
