//23-08-26, Two Sum 
// By Shashank
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int* result = (int*)malloc(2 * sizeof(int));
    *returnSize = 2;

    for (int i = 0; i < numsSize; i++) {
        int c = target - nums[i];
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[j] == c) {
                result[0] = i;
                result[1] = j;
                return result;
            }
        }
    }
    return NULL; // not expected by problem but safe
}