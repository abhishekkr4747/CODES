#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0, end = size - 1;
    int mid = start + (end - start)/2;

    while(start<=end)
    {
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(key < arr[mid])
        {
            end = mid - 1;
        }
        else
        start = mid + 1;

        mid = start + ((end - start)/2);
    }
    return -1;
}

int main()
{
    int even[6] = {1,2,6,7,8,10};
    int odd[5] = {2,3,6,8,9};

   int evenIndex = binarySearch(even, 6, 8);
    cout<<"Index of 8 is "<<evenIndex<<endl;

    int oddIndex = binarySearch(odd, 5, 20);
    cout<<"Index of 3 is "<<oddIndex<<endl;
}