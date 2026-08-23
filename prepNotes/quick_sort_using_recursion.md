```cpp
class Solution {
	public:
	void quickSort(vector<int>& arr, int low, int high) {
		if (low >= high)
			return;
		int pivot = partition(arr, low, high);
		quickSort(arr, low, pivot - 1); // left half
		quickSort(arr, pivot + 1, high); // right half
		
	}
	
	int partition(vector<int>& arr, int low, int high) {
		int pivot = arr[high];
		int i = low - 1;
		for (int j = low; j < high; j++) {
			if (arr[j] <= pivot) {
				i++;
				swap(arr[i], arr[j]);
			}
		}
		// putting pivot to its correct position
		i++;
		swap(arr[i], arr[high]);
		
		return i;
	}
};

```