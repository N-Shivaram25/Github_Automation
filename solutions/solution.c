void sortedSquares(int* nums, int size, int* result) {
    int left = 0, right = size - 1, pos = size - 1;

    while (left <= right) {
        if (abs(nums[left]) > abs(nums[right])) {
            result[pos] = nums[left] * nums[left];
            left++;
        } else {
            result[pos] = nums[right] * nums[right];
            right--;
        }
        pos--;
    }
}