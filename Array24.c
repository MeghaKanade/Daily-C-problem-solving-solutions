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
    
    int arr[n];
    
    printf("\nEnter the elements of array :");
    for(int i=0; i<n;i++)
    scanf("%d",&arr[i]);
     
    sort(arr, n);  //sort first array
    
    int median ; //variable to store the median
    
    if(n%2==0)
    median = ((arr[n/2]+arr[n/2+1])/2);
    
    else median = arr[n/2];
    
    int sum =0 ; // variable to hold the sum
    
    for(int i=0; i<n; i++){
     
     int x=arr[i]-median;
     if(x<0)
     sum += -x;
     
     else sum += x;
    }    
    printf("Minimum Absolute Difference Sum is %d", sum);
    return 0;
}