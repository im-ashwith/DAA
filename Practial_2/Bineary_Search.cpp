#include<iostream>
using namespace std;
int main()
{
    int n, i;
    int low, high,mid;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for(i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int target;
    cout<<"Enter the target value:";
    cin>>target;
    low = 0;
    high = n - 1;
    while(low <= high)
    {
        mid = (low + high) / 2;
        if(arr[mid] == target)
        {
            cout << "Element found at index: " << mid << endl;
            return 0;
        }
        else if(arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    cout << "Element not found" << endl;
    return 0;
}
