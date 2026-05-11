#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main()
{
    int a;
    cout << "Enter the size of the array: ";
    cin >> a;

    vector<int> arr(a);

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }

    map<int, int> m;
    int k;

    cout << "Enter the target sum: ";
    cin >> k;

    for (int i = 0; i < a; i++)
    {
        int needed = k - arr[i];

        if (m.find(needed) != m.end())
        {
            cout << "Indices: " << m[needed] << " " << i << endl;
            return 0; // ✅ correct return
        }

        m[arr[i]] = i;
    }

    cout << "No solution found" << endl;
    return 0;
}