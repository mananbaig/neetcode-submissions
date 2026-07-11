class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:

        my_map = {}

        for val in nums:
            if val in my_map:
                return True
            else:
                my_map[val] = 1

        return False