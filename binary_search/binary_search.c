#include <stdio.h>

/*
* This program is an implementation of Recursive Binary Search.
*/

int binary_search(int list[], int key, int low, int high){

	if(high >= low){
		int mid = (low + high)/2;

		// If key element is present in the middle.
		if(list[mid] == key) return mid;
	
		// If key element is smaller than the middle value.
		if(list[mid] > key) return binary_search(list, key, low, mid-1);

		// If key element is greater than the middle value.
		if(list[mid] < key) return binary_search(list, key, mid+1, high);

	}
	return -1;
	
}

int main(){

	int list[] = {1,2,5,7,10,15,20}; 
	int low = 0;
	int high = sizeof(list) / sizeof(list[0]);
	int key;

	printf("Enter the key element: ");
	scanf("%d", &key);

	int val = binary_search(list, key, low, high-1);

	if(val == -1){
		printf("The key element is not present.\n");
	}else{
		printf("The key element is at %d index position.\n", val);
	}

	return 0;
}
