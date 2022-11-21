#include<iostream>
using namespace std;

int reverse(int arr[] , int size)
{
    int start = 0;
    int end = size - 1;
    while(start<=end)
    {
        swap(arr[start] , arr[end]);
        start++;
        end--;
    }
}

void printarray(int arr[], int size)
{
    for(int i =0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int ar[5] = {1,2,3,4,5};
    int br[6] = {6,5,4,3,2,1};

    reverse(ar,5);
    reverse(br,6);

    printarray(ar,5);
    printarray(br,6);
}