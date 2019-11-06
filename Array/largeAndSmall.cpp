#include <iostream>
#include <tuple>
using namespace std;

tuple<int, int> find(int arr[], int n)
{
    int min = arr[0];
    int max = 0;
    // int n = sizeof(arr) / sizeof(*arr);
    int i;

    for (i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }

        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return {min, max};
}

int main()
{
    int array[] = {1, 2, 8, 3, 45, 6};
    int n = sizeof(array) / sizeof(*array);

    auto [min, max] = find(array, n);
    cout << min << ", " << max;
}