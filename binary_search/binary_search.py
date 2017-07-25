#!/usr/bin/python

#
# This program is an implementation of Recursive Binary Search.
#

def binary_search(arr, key, low, high):
	if high >= low:

		mid = (low + high)/2
		
		# If If key element is present in the middle.
		if arr[mid] == key:
			return mid

		# If key element is smaller than the middle value.
		if arr[mid] > key:
			return binary_search(arr, key, low, mid-1)

		# If key element is greater than the middle value.
		if arr[mid] < key:
			return binary_search(arr, key, mid+1, high)
	else:
		return -1; 	

def main():
	arr = [1, 2, 5, 7, 10, 15, 20];
	low = 0
	high = len(arr) - 1;

	key = input("Enter the key element: ");

	val = binary_search(arr, key, low, high)
	
	if val == -1:
		print "The key element is not present."
	else:
		print "The key element is found at ", val , " index position." 

if __name__ == "__main__":
	main()	
