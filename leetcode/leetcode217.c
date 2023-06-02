#include "stdio.h"

bool containsDuplicate(int* nums, int numsSize){
	int arr[100000];
	int  i = 0;

	for (i = 0; i < numsSize; i++){
		arr[nums[i]]++;

		if (arr[nums[i]] > 1)
			return true;
	}

	return false;
}


int main(){
	int nums[] = {1,1,1,3,3,4,3,2,4,2};
	int numsSize = sizeof(nums) / sizeof(nums[0]);

	printf("%b", containsDuplicate(nums, numsSize));
	
	return 0;
}
