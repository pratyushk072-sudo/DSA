#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int a;
    cout << "Enter the size of the array: ";
    cin >> a;

    vector<int> arr(a);
    cout << "Enter the elements of the array with 0, 1, and 2 in it: ";

    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }

    int mid = 0, low = 0, high = a - 1;

    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            mid++;
            low++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(arr[mid], arr[high]);
                high--;
        }
    }

    cout << "Array after sorting in terms of 0s, 1s, 2s : ";
    for (int i = 0; i < a; i++)
    {
        cout << arr[i] << " ";
    }
}