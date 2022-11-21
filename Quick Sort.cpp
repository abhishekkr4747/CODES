class Solution
{
    public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int low, int high)
    {
        if(low>=high) return;
        int pivot = partition ( arr,  low,  high);
        
        
        quickSort(arr , low , pivot-1);
        quickSort(arr , pivot+1 , high);
    }
    
    public:
    int partition (int arr[], int low, int high)
    {
       int count = 0;
       int pivot = low;
      
       
       for(int i=low+1; i<=high; i++)
       {
           if(arr[i] <= arr[pivot])
           {
               count++;
           }
       }
       pivot = count + low;
       swap(arr[pivot] , arr[low]);
       
       int i = low;
       int j = high;
       
       while(i<pivot && j>pivot)
       {
           while(arr[i] <= arr[pivot] )
           {
              i++;
           }
         
            while(arr[j] > arr[pivot] )
           {
              j--;
           }
           
           if(i < pivot && j > pivot)
           {
           swap(arr[i++] , arr[j--]);
           }
       }
       
       return pivot;
    }
};