#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int maxSubArray(int* nums, int numsSize);
int main()
{
    char end;
    int n=0, k = 0;
    int num[100] = { 0 };
    while ((end = getchar()) && end != '\n') {
        ungetc(end, stdin);
        scanf("%d", &k);
        num[n++] = k;
    }
    printf("连续子数组最大和为：%d", maxSubArray(num,n));
    return 0;
}
int maxSubArray(int* nums, int numsSize) {
    int pre = 0, maxAns = nums[0];
    for (int i = 0; i < numsSize; i++) {
        pre = fmax(pre + nums[i], nums[i]);
        maxAns = fmax(maxAns, pre);
    }
    if (maxAns < 0)
    {
        maxAns = 0;
    }
    return maxAns;
}
