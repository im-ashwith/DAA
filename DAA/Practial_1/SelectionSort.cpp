#include <iostream>
using namespace std;
int main()
{
    int n, i;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for(i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for(i = 0; i < n-1; i++)
    {
        int min_idx = i;
        for(int j = i+1; j < n; j++)
        {
            if(arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }
        // Swap arr[i] and arr[min_idx]
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
    cout << "Sorted array: ";
    for(i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }   
cout << endl;
    return 0;
}