#include<stdio.h>
#include<string.h>
#include<stdio.h>
#define MAX 1000000

int main(){
	int T;//number of test cases
	scanf("%d", &T);
	char str[MAX];
	
	
	for(int i=0; i<T; i++){
		scanf("%s", &str);
		int right = 0; //variable to count opening brackets
		int left = 0; //variable to count closing brackets
		for(int j=0; j<strlen(str); j++){
			if(str[j] == '<'){
				right++;
			}
			else{
				left++;
			}
			if(left>right){
				break;
			}
		}
		printf("%d", 2*right);
	}
	return 0;
}
