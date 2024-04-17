//selection short;;;;;;

#include<iostream>
using namespace std;



int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
        //shorting
        for(int x=0;x<n-1;x++){
            for(int y=x+1;y<n;y++){
                if(arr[y]<arr[x]){
                    int temp=arr[x];
                    arr[x]=arr[y];
                    arr[y]=temp;
                }
            }
        }
   

   for(int j=0;j<n;j++)
    cout<<arr[j]<<" ";


    return 0;
}