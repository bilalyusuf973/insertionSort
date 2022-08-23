#include <iostream>
using namespace std;
void printArray(int *arr, int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void insertionSort(int n, int *arr){
     int i=1, temp, j;
     while(i<n){
          temp=arr[i];
          j=i-1;
         while(j>=0 && temp<arr[j]){
             arr[j+1]=arr[j];
             j--;
         }
         arr[j+1]=temp;
         i++;
     }
}
int main()
{
    int arr[7]={4,3,5,8,6,9,1};
    insertionSort(7,arr);
    printArray(arr,7);
    return 0;
}