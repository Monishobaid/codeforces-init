class Solution(object):
    def searchInsert(self, nums, target):
        l = 0
        r = len(nums) - 1
        n = 0
        while l <= r:
            n+=1
            print("loop number ------>", n)
            mid = (l + r) // 2
            print("value of mid", mid)
            if nums[mid] < target:
                print("old value of l", l)
                l = mid + 1
                print("new value of l", l)
            elif nums[mid] > target:
                print("old value of r", r)
                r = mid - 1
                print("new value of r", r)
            else:
                return mid
        return l

if __name__ == "__main__":
    # Take input from the user
    nums = list(map(int, input("Enter a sorted list of numbers (separated by spaces): ").split()))
    target = int(input("Enter the target number: "))

    # Create an instance of the Solution class
    solution = Solution()

    # Call the searchInsert method and print the result
    result = solution.searchInsert(nums, target)
    print(f"The target {target} should be inserted at index {result}.")

