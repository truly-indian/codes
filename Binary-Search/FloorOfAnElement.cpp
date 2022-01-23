#include <iostream>
using namespace std;

int main()
{ // program to find floor of an element.

    int arr[] = {1, 2, 3, 5, 8};
    int s = 0;
    int e = 4;
    int el = 4;
    int ans = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] == el)
        {
            ans = arr[mid];
            break;
        }
        else if (arr[mid] > el)
        {
            e = mid - 1;
        }
        else
        {
            ans = arr[mid];
            s = mid + 1;
        }
    }
    cout << ans << endl;
}