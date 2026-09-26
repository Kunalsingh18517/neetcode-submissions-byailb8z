

class Solution {
    public int[] topKFrequent(int[] nums, int k) {

        HashMap<Integer, Integer> mp = new HashMap<>();

        // Frequency count
        for (int i = 0; i < nums.length; i++) {

            int num = nums[i];

            if (mp.containsKey(num)) {
                mp.put(num, mp.get(num) + 1);
            } else {
                mp.put(num, 1);
            }
        }

        int[] ans = new int[k];

        for (int x = 0; x < k; x++) {

            int first = 0;
            int firstKey = 0;

            for (int key : mp.keySet()) {

                int val = mp.get(key);

                if (val > first) {
                    first = val;
                    firstKey = key;
                }
            }

            ans[x] = firstKey;

            mp.remove(firstKey);
        }

        return ans;
    }
}