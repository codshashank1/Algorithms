//All insights to Binary Search

// 1. Array MUST be sorted.
// 2. The exit condition of the loop must be carefully scrutinized so that it is exhausted to only 1 element at maximum.
// 3. Overflow issues with mid index calculation must be manipulated.
// 4. Typical example of Divide and Conquer Technique.



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



//Recursive Approach.
//At any given search space in the sorted array, we would require its start and end position, the array, and 
//the element to be searched as the arguments of recursive function.

int binarySearch(int a[], int start, int end, int x){
    // base case
    if(start > end)
        return -1;


     int mid = start + (end - start) / 2;
     if(x == a[mid])
        return mid;
     else if(x < a[mid])
       return binarySearch(a, start, mid - 1, x);
     else 
        return binarySearch(a, mid + 1, end, x);     
}

//Finding the first occurence of the search element(eg. 10)
//[2,4,5,6,7,7,7,7,10,10,10,10,10,10,10,10,10,10,20,30]
int search1stPsn_Of_x(int a[],int n, int x)
{
    int low = 0, high = n - 1, mid;
    int result = -1;
    while(high >= low){
        mid = low + (high - low) / 2;
        if(x == a[mid]){
            result = mid; // as of now, 
            //the first position of x is at mid, found
            //so far.
            high = mid - 1; // to search in the leftside search space.
        }
        else if(x < a[mid]){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
        return result;
    }

}
// only one change needed to obtain the last occurence
//of given x in the sorted array. 





