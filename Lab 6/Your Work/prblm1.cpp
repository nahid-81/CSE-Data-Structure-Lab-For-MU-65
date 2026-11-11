
#include <iostream>
using namespace std;

void bubblesort(int arr[], int n)
{
    bool swapped;

    for (int i = 0; i < n - 1; i++)
    {
        swapped = false;

        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        if (!swapped)
        {
            break;
        }
    }
}

void printarray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    cout << "|\n";
}

int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};

    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Unsorted array: ";
    printarray(arr, n);

    bubblesort(arr, n);

    cout << "Sorted array (Bubble Sort): ";
    printarray(arr, n);

    return 0;
}
