class Solution
{
    public:
    void insert(int arr[], int i)
    {
    // //   int n = sizeof(arr)/sizeof(int);
        
    //     for(int j=0; j<i; j++)
    //     {
    //       cin>>arr[j];
    //     }
        
    //     insertionSort(arr, i);
        
    }
     public:
    //Function to sort the array using insertion sort algorithm.
    void insertionSort(int arr[], int n)
    {
        
        for(int i=1; i<n; i++)
        {
            int j = i-1;
            
            for(; j>=0; j--)
            {
                if(arr[j] > arr[j+1])
                {
                    int temp = arr[j+1];
                    arr[j+1] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }
};