#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        // Step 1: Count frequency
        unordered_map<int, int> freq;
        for (int i = 0; i < nums.size(); i++) {
            freq[nums[i]]++;
        }

        // Step 2: Store into vector of pairs
        vector<pair<int, int>> arr;
        for (auto it = freq.begin(); it != freq.end(); it++) {
            arr.push_back({it->first, it->second});
        }

        // Step 3: Sort manually (Bubble sort - beginner friendly)
        for (int i = 0; i < arr.size(); i++) {
            for (int j = 0; j < arr.size() - i - 1; j++) {
                if (arr[j].second < arr[j + 1].second) {
                    swap(arr[j], arr[j + 1]);
                }
            }
        }

        // Step 4: Take top k elements
        vector<int> result;
        for (int i = 0; i < k; i++) {
            result.push_back(arr[i].first);
        }

        return result;
    }
};