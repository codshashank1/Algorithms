#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &v , int p, int q, int r){
	int n1 = q - p + 1;
	int n2 = r - (q + 1) + 1;
  
	vector<int> left(n1);
	vector<int> right(n2);	

	for(int i = 0; i < n1; ++i){
		left[i] = v[p + i];
	}
	for(int i = 0; i < n2; ++i){
		right[i] = v[(q + 1) + i];
	}

	int i = 0, j = 0, k = p;
  
	while(i < n1 && j < n2){

		if(right[j] >= left[i]){
			v[k] = left[i];
			i++; k++;
		}
		else{
			v[k] = right[j];
			j++; k++;
		}
	}
	while(i < n1){
		v[k] = left[i];
		i++;
		k++;
	}
	while(j < n2){
		v[k] = right[j];
		j++;
		k++;
	}

}

void mergeSort(vector<int> &v, int p, int r){
	if(p < r){
		int q = (p + r)/2; // q is middle element and lower bound
		mergeSort(v, p, q);
		mergeSort(v, q + 1, r);
		merge(v, p, q, r);
		
	}
	
}

int main(){

	vector<int> v = {2,4,6,5,1,55,8,7};
	int r = v.size() - 1, p = 0;

	mergeSort(v,p,r);
	for(auto &value : v){
		cout << value << " ";
	}


	return 0;
}


///debugging errors

//1. the value of k should be p not 0 because p denotes the 
// the start of several smaller subarrays and not the start 
// of intial array which is to be sorted.

//2. 



// An even cleaner code is to come:

