#include<iostream>
using namespace std;

int main()
{
    //input
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }


//      bubble short
       for(int t=0;t<n-1;t++){
           for(int y=0;y<n-1-t;y++){
               if(arr[y]>arr[y+1]){
                   int temp=arr[y];
                   arr[y]=arr[y+1];
                   arr[y+1]=temp;
               }
           }
       }




    //output
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";



    return 0;
}