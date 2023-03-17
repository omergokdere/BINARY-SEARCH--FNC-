#include <stdio.h>
#define SIZE 15

int binarySearch(  int b[], int searchKey, int low, int high);

int main(void)
{
	int a[SIZE];
	int i, key, result;

	for(i=0; i<SIZE; i++){
		a[i] = 2 * i;
	}
	
	printf("Enter number btw 0 and 28: ");
	scanf("%d", &key);

	result= binarySearch(a, key, 0, SIZE-1);

	if(result != -1){
		printf("\n%d found in array elemet %d\n", key, result);
	}else{
		printf("\nKey not found!\n");
	}
	 printf(" \n\n\n\n"
	      "	                                                    *****************\n"
          "			                                    * OMER GOKDERE  *\n"
          "	                                                    *****************\n");
	return 0;

}

int binarySearch(  int b[], int searchKey, int low, int high)
{
	int middle;

	while(low<= high){
		middle=(low+high)/2;

		if(searchKey == b[middle]){
			return middle;
		}else if(searchKey < b[middle]){
			high= middle - 1;
		}else{
			low = middle + 1;
		}
	}

	return -1;
}
