#include<iostream>
using namespace std;
int main()
{
    int n, i, key;
    cout << "Enter the number of elements: ";
    cin >> n;Line
    int arr[n];
    cout << "Enter the elements: ";
    for(i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the element to search: ";
    cin >> key;
    for(i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            cout << "Element found at index: " << i << endl;
            return 0;
        }
    }
    cout << "Element not found" << endl;
    return 0;
}