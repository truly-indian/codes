#include <iostream>
using namespace std;

int main()
{
    //Program to find ceil of an element.

    int arr[] = {1, 2, 2, 4, 5};
    int s = 0;
    int e = 4;
    int el = 5;
    int ans = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid ] == el) {
           ans = arr[mid];
           break;
        }else if(arr[mid] > el) {
            ans = arr[mid];
            e = mid - 1;
        }else s = mid + 1;
        
    }
cout<<ans<<endl;
    return 0;
}