class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) { 
        vector<int> k(m + n);
        int i =0;
        int j =0;
         
         int idx=0;
        while(i<m && j<n)
        {
            if(nums1[i]<nums2[j])
            {
                k[idx]=nums1[i];
                i++;
                idx++;
            }
            else
            {
                k[idx]=nums2[j];
                j++;
                idx++;
            }
        }
        while(i<m)
        {
            k[idx]=nums1[i];
            i++;
            idx++;
        }
        while(j<n)
        {
            k[idx]=nums2[j];
            j++;
            idx++;
        }
       
for (int x = 0; x < m + n; x++) {
    nums1[x] = k[x];
}
        
    }
};