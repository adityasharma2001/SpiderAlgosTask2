#include<stdio.h>

int main(){
	long long int n;//number of elements
	scanf("%lld", &n);
	long long int arr[n];
	for(long long int i=0; i<n; i++){
		arr[i] = i+1;
	}
	
	long long int q;
	scanf("%lld", &q);
	for(long long int i=0; i<q; i++){
		long long int l, r, v;
		scanf("%llr llr llr", &l, &r, &v);
		for(long long int j = l-1; j<r; j++){
			arr[j] += v;
		}
	}
	long long int max = 0;
	for(long long int i = 0; i<n; i++){
		if(max<arr[i]){
			max = arr[i];
		}
	}
	printf("%lld", max);
	
	return 0;
}
