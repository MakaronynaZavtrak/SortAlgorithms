//O(n^2)
void BubbleSort(int* arr, int n)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n - 1 - i; j++)
			if (arr[j] > arr[j + 1])
				Swap(arr[j], arr[j + 1]);
}
