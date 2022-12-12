int* sortedSquares(int* nums, int numsSize, int* returnSize){
    
    int temp;
    *returnSize = numsSize;
    int *ris = (int *)malloc(numsSize * sizeof(int));
    
    // Ciclo per elevare al quadrato tuti gli elementi e salvarli in un altro array
    for (int i = 0; i < numsSize; i++)
        ris[i] = nums[i] * nums[i];
    for (int i = 0; i < numsSize; i++)
        for (int j = i + 1; j < numsSize; j++)
            if(ris[i] > ris[j]){
                temp = ris[i];
                ris[i] = ris[j];
                ris[j] = temp;
            }
    
    return ris;
}