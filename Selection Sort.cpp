class Solution
{
    public:
    int select(int arr[], int i)
    {
       int n = sizeof(arr)/sizeof(arr[0]);
        
        for(i; i<n; i++)
        {
            cin>>arr[i];
        }
        
         selectionSort( arr,  n);
    }
     
    void selectionSort(int arr[], int n)
    {
       for(int i=0; i<n; i++)
       {
           int min_index = i;
           
           for(int j=i+1; j<n; j++)
           {
               if(arr[j] < arr[min_index])
               {
                   min_index = j;
               }
           }
           int temp = arr[i];
           arr[i] = arr[min_index];
           arr[min_index] = temp;
       }
    }
};