#include <stdio.h>

int main() {
    int arr[5];
    int index = 0;

    while (index < 5) {
        printf("Enter a number for array: ");
        scanf("%d", &arr[index]);
        index++;
    }
 
    int  max = arr[0];
    index = 1 ;
    while (index < 5) {
	 if(max < arr[index]) {
	max = arr[index];

	}
      index++;

 } 
    printf("The maximum value in the array is: %d\n", max);
    return 0;
}
