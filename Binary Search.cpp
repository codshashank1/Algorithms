//All insights to Binary Search
// 1. Array MUST be sorted.
// 2. The exit condition of the loop must be carefully scrutinized so that it is exhausted to only 1 element at maximum.
// 3. Overflow issues with mid index calculation must be manipulated.

//Basic Algorithm
int binarySearch(int A[], int n, int x){
    int start = 0, end = n - 1, mid;
    while(start <= end){
        mid = start + (end - start)/2; // avoiding overflow issues
        // 3 cases
        if(x == A[mid])
            return mid;
        else if(x < A[mid])
            end = mid - 1;
        else
            start = mid + 1;
    }
    return -1; // in case no index matching to x found.
}
