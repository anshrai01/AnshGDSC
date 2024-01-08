#include <stdio.h>
void count_sort(int arr[], int n, int k)
{
	int count[k+1];
	for (int i = 0; i <= k; i++)
	{
		count[i] = 0;
	}
		for (int i = 0; i < n; i++)
		{
		if (arr[i] < 0 || arr[i] > k)
		{
		printf("Invalid data found in input array\n");
		return;
		}
		count[arr[i]]++;
}
		for (int i = 1; i <= k; i++)
		{
		count[i] += count[i-1];
		}
		
		
		int output[n];
		for (int i = n-1; i >= 0; i--) 
		{
			output[count[arr[i]]-1] = arr[i]; 
			count[arr[i]]--;
		}
		
		
			printf("Elements in the array after performing count sort:\n");
			for (int i = 0; i < n; i++) 
			{
			printf("%d ", output[i]);
			}
			printf("\n");
			}
			
			int main()
			{
				int n, k;
				printf("Enter no of elements: ");
				scanf("%d", &n);
				printf("Enter value k (maximum range) of input data: "); 
				scanf("%d", &k);
				printf("Enter elements of array:\n");
				int arr[n];
				for (int i = 0; i < n; i++)
				{
					while (1)
					{
					int x;
					scanf("%d", &x);
					if (x >= 0 && x <= k)
					{
						arr[i] = x;
						break;
					}
					else
					{
						printf("Invalid data please scan this value again\n");
					}
					}
				}
				count_sort(arr, n, k);
				
				return 0;
				}
			