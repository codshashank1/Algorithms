int* bubbleSort(int a[], int n){
	//n-1 iterations as in the n-1th iteration,
	// only 2 elements will be there which will be the smallest
	// of all other elements in the already sorted rightmost subarray.

	// 2 modifications ,
	// 1 to avoid comparisons in already sorted array specially for the best case running time.
	// another to run the second loop only desired no. of times.
	for(int i = 1; i < n; ++i){
		int flag = 0;
		for(int j = 0; j < n - i; ++j){
		    if(a[j] > a[j + 1]){
			    swap(a[j], a[j + 1]);
			    flag = 1;
			}
		}
		if(flag == 0){
			break;
		}		
	}
	return a;
}
