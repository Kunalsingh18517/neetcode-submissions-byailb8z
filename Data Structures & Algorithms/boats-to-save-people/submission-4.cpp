class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int n = people.size();
        int i=0;
        int j =n-1;
        int  total= 0;
        int minimum =0;

        while(i<=j)
        {
             total= people[i]+people[j];
           
             if(total<=limit)
            {
                i++;
            }
            
            
                
                j--;
                minimum++;
            
            
        }
        return minimum;
    }
};