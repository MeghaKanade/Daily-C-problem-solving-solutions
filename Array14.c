#include <stdio.h>

void sort(int arr[],int n){
    int temp=0;
    for(int i=0;i<n;i++){
        
        for(int j=0;j<n;j++){
          
          if(arr[i]<arr[j]){
        
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        
           }
            
        }
    }
}
     
int main()
{
    int n;
    printf("Enter the size of the array :");
    scanf("%d",&n);
    
    int arr1[n], arr2[n];
    
    printf("\nEnter the elements of first array :");
    for(int i=0; i<n;i++)
    scanf("%d",&arr1[i]);
    
    printf("\nEnter the elements of second array :");
    for(int i=0; i<n;i++)
    scanf("%d",&arr2[i]);
     
    sort(arr1, n);  //sort first array
    sort(arr2, n);  //sort second array
    
    int res =0 ; // variable to hold maximum scalar product
    
    for(int i=0; i<n; i++)
    res +=(arr1[i]*arr2[i]);
    
    printf("Maximum Scalar Product : %d", res);
    return 0;
}