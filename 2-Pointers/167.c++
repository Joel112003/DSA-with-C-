// 	Pair with Target Sum 
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 7, 11, 15};
    int target = 9;

    int n = sizeof(arr) / sizeof(arr[0]); 
    int i = 0;
    int j = n - 1;

    while (i < j)
    {
        int sum = arr[i] + arr[j];

        if (sum == target)
        {
            cout << i + 1 << " " << j + 1;
            return 0;
        }
        else if (sum < target)
        {
            i++;
        }
        else
        {
            j--;
        }
    }

    return 0;
}

//Time Complexity = o(n) cuz each pointer moves only onces.