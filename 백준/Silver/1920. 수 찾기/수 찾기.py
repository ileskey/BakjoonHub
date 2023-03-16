import sys


def binary_search(arr, val):      # arr = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
    left = 0
    right = len(arr)-1

    while left <= right:
        mid = (left+right) // 2  # mid = 4 -> arr[mid] = 5

        if arr[mid] == val:
            return arr[mid]
        elif arr[mid] > val:
            right = mid-1
        else:
            left = mid + 1


N = int(sys.stdin.readline())
nums_1 = sorted(list(map(int, sys.stdin.readline().split())))

N = int(sys.stdin.readline())
nums_2 = map(int, sys.stdin.readline().split())


for i in nums_2:
    if binary_search(nums_1, i) == None:
        print(0)
    else:
        print(1)
