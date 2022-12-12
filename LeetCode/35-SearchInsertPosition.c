int searchInsert(int* nums, int numsSize, int target) {
    int inizio = 0;
    int fine = numsSize - 1;
    int index;
    
    // Per capire se il numero è minore rispetto al primo
    if (target < nums[inizio])
        return inizio;
    
    // Per capire se il numero è maggiore rispetto a numsSize - 1
    if (target > nums[numsSize - 1])
        return numsSize;
    
    // Ciclo per capire le posizioni centrali
    while (inizio <= fine) {
        index = inizio + (fine - inizio) / 2;
        
        if (nums[index] == target)
            return index;
        
        if (nums[index] < target)
            inizio = ++index;
        
        else if (nums[index] > target)
            fine = --index;
    }
    
    // Se il numero è minore al target ritorna "fine"
    if (nums[fine] > target)
        return fine;
    
    // Se non è cosi, ritorna fine incrementato di 1
    else
        return ++fine;
}