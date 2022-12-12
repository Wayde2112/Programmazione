public class Solution {
    public int Search(int[] nums, int target) {
        
            int beginning = 0;
            int end = nums.Length - 1;
            int middle =0;
        
            while (beginning <= end)
            {
                middle = (beginning + end) / 2;

                if (nums[middle] == target)
                {
                    return middle;
                }
                else if (nums[middle] > target)
                {
                    end = middle - 1;
                }
                else
                {
                    beginning = middle + 1;
                }
            }
            return -1;
    }
}