#include <stdio.h>

void insertionsort(int size, int arr[]);

int main(int argc, char *argv[])
{
	int i,
		arrSize = 6,
		testArr[6] = {'d','s','t','e','g','o'};

	for(i = 0; i < arrSize; i++)
	{
		printf("%c ", testArr[i]);
	}

	printf("\n");
	insertionsort(arrSize, testArr);

	for(i = 0; i < arrSize; i++)
	{
		printf("%c ", testArr[i]);
	}
}


void insertionsort(int size, int arr[])
{

	int i , j, key;

	for(j = 1; j < size; j++)
	{
		key = arr[j];
		i = j-1;
		while(i >= 0 && arr[i] > key)
		{
			arr[i+1] = arr[i];
			i = i - 1;
		}
		arr[i+1] = key;
	}
}
