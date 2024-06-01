class Solution:
    def minimumAddedInteger(self, nums1: List[int], nums2: List[int]) -> int:
        sort1 = sorted(nums1)
        sort2 = sorted(nums2)
        
        def helper(nums1, nums2, x, use_x: bool):
            # base case
            if len(nums1) - len(nums2) < 0:
                return float("inf")
            
            diff = 0
            res = float("inf")
            
            if not use_x:
                x = nums2[0] - nums1[0]
            
            for i in range(len(nums2)):
                if nums2[i] - nums1[i] != x:
                    return min(
                        # either remove the nums1[0] number, find new x
                        helper(nums1[1:], nums2, 0, False),
                        # or keep x and skip this number, replace -= 1
                        helper(nums1[:i] + nums1[i+1:], nums2, x, True)
                    )
            return min(x, helper(nums1[1:], nums2, 0, False), helper(nums1[2:], nums2, 0, False))
        
        return helper(sort1, sort2, 0, False)