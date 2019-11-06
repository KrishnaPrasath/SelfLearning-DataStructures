#include <iostream>
using namespace std;

int findMissing(int arr[], int n)
{
    int i, total = 1;

    for (i = 2; i < n + 2; i++)
    {
        total += i;
        total -= arr[i - 2];
    }

    return total;
}

int main()
{
    int arr[] = {1, 2, 3, 5, 6, 4, 8};
    int n = sizeof(arr) / sizeof(*arr);
    cout << findMissing(arr, n);
}