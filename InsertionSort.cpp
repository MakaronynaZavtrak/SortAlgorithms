void InsertionSort(int* arr, int n)
{
	for (int i = 1; i < n; i++)
		for (int j = i; j > 0 && arr[j - 1] > arr[j]; j--)
			Swap(arr[j], arr[j - 1]);
}
