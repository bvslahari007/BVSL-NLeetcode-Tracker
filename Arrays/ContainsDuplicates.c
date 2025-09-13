#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// comparison function for qsort
int cmp(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

// function to check duplicates
bool containsDuplicate(int *nums, int numsSize)
{
    qsort(nums, numsSize, sizeof(int), cmp);

    for (int i = 0; i < numsSize - 1; i++)
    {
        if (nums[i] == nums[i + 1])
        {
            return true;
        }
    }
    return false;
}

// check using the following sample input
int main()
{
    int nums[] = {1, 2, 3, 1};
    int numsSize = sizeof(nums) / sizeof(nums[0]);

    if (containsDuplicate(nums, numsSize))
    {
        printf("Duplicate found!\n");
    }
    else
    {
        printf("No duplicates.\n");
    }

    return 0;
}
