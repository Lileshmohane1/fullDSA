// 0s and ones sort 
#include<iostream>
using namespace std;
void arange(int arr[],int n){
    int left= 0;
    int right = n-1;
    while (left<right)
    {
      while (arr[left]==0 && left<right)
      {
        left++;
      }
      while (arr[right]==1 && left<right)
      {
          right--;
      }
        if (left<right)
        {
            swap(arr[left++],arr[right--]);
        }
        
    }
}
void printarr(int arr[],int n){
    for (int  i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";

    }
    cout<<endl;
}
int main(){
 int arr[6]={0,1,0,1,0,1};
 arange(arr,6);
 printarr(arr,6);
return 0;
}
