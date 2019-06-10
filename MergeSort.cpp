#include <iostream>
using namespace std;

int arr[] = {4, 2, 9, 3, 10, 5, 8};

void merge(int arr[], int l, int m, int h) {
  int arr1[10], arr2[10];

  int n1, n2, i, j, k;
  n1 = m - l + 1;
  n2 = h - m;

  for(i = 0; i < n1; i++)
    arr1[i] = arr[l + i];
  for(j = 0; j < n2; j++)
    arr2[j] = arr[m + j + 1];

  arr1[i] = 9999; //Para marcar el fin de cada arreglo temporal;
  arr2[j] = 9999;

  i = 0; j = 0;

  for(int k = l; k <= h; k++) {
    if(arr1[i] <= arr2[j])
      arr[k] = arr1[i++];
    else
      arr[k] = arr2[j++];
  }
}

void merge_sort(int arr[], int low, int high) {
  int mid;

  if(low < high) {
    int mid = (low + high) / 2;

    merge_sort(arr, low, mid);
    merge_sort(arr, mid + 1, high);

    merge(arr, low, mid, high);
  }
}

int main() {
  int n = sizeof(arr) / sizeof(arr[0]);

  merge_sort(arr, 0, n - 1);

  cout << "Sorted array: " << endl;

  for(int i = 0; i < n; i++)
    cout << arr[i] << ", ";

    cout << endl;
}
