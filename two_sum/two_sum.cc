class Solution {
public
    vectorint twoSum(vectorint& nums, int target) {
        vectorint ret;
        int i = 0, j = 0;
        for (vectorintiterator it1 = nums.begin(); it1 + 1 != nums.end(); it1++, i++) {
            j = i + 1;
            for (vectorintiterator it2 = it1 + 1; it2 != nums.end(); it2++, j++) {
                if (it1 + it2 == target) {
                    ret.push_back(i);
                    ret.push_back(j);
                    return ret; 
                }
                
            }
            
        }
    }
};