#include "stdio.h"

int search(int* arr, int size, int target){
    int left = 0;
    int right = size - 1;
    
    int mid;

    while (left <= right){
        mid = left + (right - left) / 2;

        if (arr[mid] == target)
            return mid;
        
        /* Find a sorted array */
        if (arr[left] <= arr[mid]){
            /* target within range */
            if (arr[left] <= target && arr[mid] >= target)
                right = mid - 1;
            
            else
            /* search other sub array */
                left = mid + 1;
        }

        /* Find a sorted array */
        else{
            /* Find if target is within this range */
            if (arr[right] >= target && arr[mid] <= target)
                left = mid + 1;
            
            else
            /* search other sub array */
                right = mid - 1;
        }
    }

    return -1;
}

// nums = [5,6,0,1,2,3,4], target = 0
// idx      L = 0  Mid = 3 R = 6
// nums = [5,6,0], target = 0
// idx      L = 0  Mid = 1 R = 2
