#include <iostream>
using namespace std;

void quickSort(int arr[], int low, int high) 
{
if (low >= high)
return;

int pivot = arr[high];
int i = low;

for (int j = low; j < high; j++) 
{
if (arr[j] < pivot) 
{
swap(arr[i], arr[j]);
i++;
}
}
swap(arr[i], arr[high]);
quickSort(arr, low, i - 1);
quickSort(arr, i + 1, high);
}

int main() {
int n;
cout << "Enter size: ";
cin >> n;

int arr[100];
cout << "Enter elements: ";
for (int i = 0; i < n; i++)
cin >> arr[i];

quickSort(arr, 0, n - 1);

cout << "Sorted array: ";
for (int i = 0; i < n; i++)
cout << arr[i] << " ";
return 0;
}
