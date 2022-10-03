
#include <bits/stdc++.h>
using namespace std;
void merge(int arr[], int beg, int mid, int end, int maxele)
{
	int i = beg;
	int j = mid + 1;
	int k = beg;
	while (i <= mid && j <= end) {
		if (arr[i] % maxele <= arr[j] % maxele) {
			arr[k] = arr[k] + (arr[i] % maxele) * maxele;
			k++;
			i++;
		}
		else {
			arr[k] = arr[k] + (arr[j] % maxele) * maxele;
			k++;
			j++;
		}
	}
	while (i <= mid) {
		arr[k] = arr[k] + (arr[i] % maxele) * maxele;
		k++;
		i++;
	}
	while (j <= end) {
		arr[k] = arr[k] + (arr[j] % maxele) * maxele;
		k++;
		j++;
	}
	for (int i = beg; i <= end; i++)
		arr[i] = arr[i] / maxele;
}

void mergeSortRec(int arr[], int beg, int end, int maxele)
{
	if (beg < end) {
		int mid = (beg + end) / 2;
		mergeSortRec(arr, beg, mid, maxele);
		mergeSortRec(arr, mid + 1, end, maxele);
		merge(arr, beg, mid, end, maxele);
	}
}


void mergeSort(int arr[], int n)
{
int maxele = *max_element(arr, arr+n) + 1;
mergeSortRec(arr, 0, n-1, maxele);
}

int main()
{
	int arr[] = { 999, 612, 589, 856, 56, 945, 243 };
	int n = sizeof(arr) / sizeof(arr[0]);
	
	mergeSort(arr, n);

	cout << "Sorted array \n";
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	return 0;
}
