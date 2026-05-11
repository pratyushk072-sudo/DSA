#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter the size of the first array: ";
    cin >> a;
    cout << "Enter the size of the second array: ";
    cin >> b;

    vector<int> arr1(a);
    vector<int> arr2(b);

    cout << "Enter the elements of the first array: ";
    for (int i = 0; i < a; i++)
    {
        cin >> arr1[i];
    }
    cout << "Enter the elements of the second array: ";
    for (int i = 0; i < b; i++)
    {
        cin >> arr2[i];
    }

    vector<int> UnionArr;

    int i = 0;
    int j = 0;

    while (i < a && j < b)
    {
        if (arr1[i] < arr2[j])
        {
            if (UnionArr.size() == 0 || UnionArr.back() != arr1[i])
            {
                UnionArr.push_back(arr1[i]);
            }
            i++;
        }

        else
        {
            if (UnionArr.size() == 0 || UnionArr.back() != arr2[j])
            {
                UnionArr.push_back(arr2[j]);
            }
            j++;
        }
    }

    while (j < b)
    {
        if (UnionArr.size() == 0 || UnionArr.back() != arr2[j])
        {
            UnionArr.push_back(arr2[j]);
        }
        j++;
    }

    while (i < a)
    {
        if (UnionArr.size() == 0 || UnionArr.back() != arr1[i])
        {
            UnionArr.push_back(arr1[i]);
        }
        i++;
    }

    cout << "The union of the two array is: ";
    for(int c = 0; c < UnionArr.size(); c++) {
        cout << UnionArr[c] << " ";
    }
}