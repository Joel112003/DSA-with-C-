// Remove Duplicates from Sorted Array
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 1, 2, 2, 2, 3, 3, 3, 4, 5, 5, 5, 6, 6, 7, 7, 7, 8, 8, 8, 9, 9, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int officer = 0;
    int unique = 1;
    int cm = 1;

    while (cm < n)
    {
        if (arr[cm] != arr[cm - 1])
        {
            officer++;
            arr[officer] = arr[cm];
            unique++;
        }
        cm++;
    }
    cout << unique;
    return 0;
}