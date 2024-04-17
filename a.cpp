#include<iostream>
using namespace std;

int main(){
  

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
      cin>>arr[i];

      int sum;
      cin>>sum;


      int s=-1,e;
      for(int j=0;j<n;j++){
        s++;
        for(int k=j;k<n;k++)
        {
          e=-1;
          e++;
          if((arr[s]+arr[e])==sum)
              break;

          if(arr[s]+arr[e]>sum)
          continue;
          
        }
        
      }

cout<<s<<" "<<e;


  return 0;
}