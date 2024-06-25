//O(n^2)
void ShakerSort(int* arr, int n)
{
	int left = 0;
	int right = n - 1;

	while (left < right)
	{
		for (int i = left; i < right; i++)
			if (arr[i] > arr[i + 1])
				Swap(arr[i], arr[i + 1]);
		--right;

		for (int i = right; i > left; i--)
			if (arr[i - 1] > arr[i])
				Swap(arr[i - 1], arr[i]);
		++left;
	}
}
