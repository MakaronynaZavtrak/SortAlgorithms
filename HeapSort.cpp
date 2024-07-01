void Heapify(int* arr, int n, int i)
{
	int largest = i;
	int left = 2 * i + 1;
	int right = 2 * i + 2;
	if (left < n) 
		if (arr[largest] < arr[left])
			largest = left;

	if (right < n) 
		if (arr[largest] < arr[right])
			largest = right;

	if (largest != i && largest < n) 
	{
		Swap(arr[i], arr[largest]);
		Heapify(arr, n, largest);
	}
}

void HeapSort(int* arr, int n)
{
	for (int i = n / 2 - 1; i >= 0; i--)
		Heapify(arr, n, i);
	
	for (int i = n-1; i >= 0; i--)
	{
		if (arr[0] != arr[i])
			Swap(arr[0], arr[i]);
		Heapify(arr, i, 0);
	}

}
