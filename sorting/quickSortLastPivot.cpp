// #include <bits/stdc++.h>
#include <iostream>
using namespace std;

// function to swap values
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];

    int i = (low - 1);

    for (int j = low; j < high; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;

            swap(&arr[i], &arr[j]);
        }
    }

    // swap pivot with the greater element at i
    swap(&arr[i + 1], &arr[high]);

    return (i + 1);
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {

        int pivotIndex = partition(arr, low, high);

        quickSort(arr, low, pivotIndex - 1);

        quickSort(arr, pivotIndex + 1, high);
    }
}

int main()
{

    int data[] = {8, 7, 6, 1, 0, 9, 2};

    int n = (sizeof(data) / sizeof(data[0]));

    quickSort(data, 0, n - 1);

    cout << "Sorted array : ";
    for (int i = 0; i < n; i++)
    {
        cout << data[i] << "  ";
    }

    return 0;
}