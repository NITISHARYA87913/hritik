#include <iostream>
using namespace std;
 void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
 }
void adjacent(int arr[], int n){
    for(int i=0;i<n;i+=2){
        if(i+1 < n){
            swap(arri],arr[i+1]);
        }
    }
}
int main()
{

int arr[6]={4, 31, 6 , 2, 6 ,7};
adjacent(arr, 6);

printArray(arr,6);
 return 0;
}