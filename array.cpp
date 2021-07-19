#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    // //Reverse an array
    // int n;
    // cout<<"array length: ";
    // cin>>n;
    // int a[n];
    // cout<<"enter the element of array : ";
    // for(int i=0; i<n; i++){
    //     cin>>a[i];
    // }
    // cout<<"Reverse array : ";
    // //5int sum=0;
    // for(int i=n-1; i>=0; i--){
    //     cout<<a[i]<<" ";
        
    // }
    // //cout<<sum<<endl;
    //----------------------------------------------------------------------------------------------
    // int t;
    // cin>>t;
    // int i=0;
    
    // while (i!=t)
    // {
    //     int n,k; 
    //     cin>>n>>k;
    //     int a[n];
    //     for(int i=0; i<n; i++){
    //         cin>>a[i];
    //     }
    //     i++;
    // }
    // cout<<"o/p: "<<endl;
    // while (i!=t)
    // {
    //     int n,k; 
    //     cout<<n<<k<<endl;
    //     int a[n];
    //     for(int i=0; i<n; i++){
    //         cout<<a[i];
    //     }
    //     i++;
    // }
    //------------------------------------------------------------------------------------
    //sorting of array
    // selection sort
    // int n;
    // cin>>n;
    // int a[n];
    // for (int i=0; i<n; i++){
    //     cin>>a[i];
    // }
    // for(int i=0; i<n-1; i++){
    //     for(int j=i+1; j<n; j++){
    //         if(a[j]<a[i]){
    //             int temp=a[j];
    //             a[j]=a[i];
    //             a[i]=temp;
    //         }
    //     }
    // }
    // cout<<"sorted array is: ";
    // for(int i=0; i<n; i++){
    //     cout<<a[i]<<" ";
    // }
    //---------------------------------------------------------------------
    //bubble sort
    // int n;
    // cin>>n;
    // int a[n];
    // for  (int i=0; i<n; i++){
    //     cin>>a[i];
    // }
    // int counter=1;
    // while(n>counter){
    //     for(int i=0; i<n-i; i++){
    //         if(a[i+1]<a[i]){
    //             int temp=a[i];
    //             a[i]=a[i+1];
    //             a[i+1]=temp;

    //         }
    //     }
    //     counter++;
    // }
    // for(int i=0; i<n; i++){
    //     cout<<a[i]<<" ";
    // }
    //-------------------------------------------------------------------------------
   // insertion sort
    // int n;
    // cin>>n;
    // int a[n];
    // for(int i=0; i<n; i++){
    //     cin>>a[i];
    // }    
   
    // for(int i=0; i<n; i++){
    //     cout<<a[i];
    // }
  //--------------------------------------------------------------------------
  //max till i
//   int n; 
//   cin>>n;
//   int a[n];
//   for(int i=0; i<n; i++){
//       cin>>a[i];
//   }
//    int mx=-999999;
//    for(int i=0; i<n; i++){
//        mx=max(mx,a[i]);
//    }
//    cout<<mx<<endl;
//------------------------------------------------------------------------------------
// sum of all subarray and total no. of subarray
// int n;
// cin>>n;
// int a[n];
// for(int i=0; i<n; i++){
//     cin>>a[i];
// }
// int sum;
// int totalsum=0;
// int count=0;
// for(int i=0; i<n; i++){
//     sum=0;
//     for(int j=i; j<n; j++){
//         sum=sum+a[j];
//        // cout<<sum<<endl;
//         totalsum=totalsum+sum;
//        count++;
//     }
// }
// cout<<count<<endl;
// cout<<totalsum<<endl;
//------------------------------------------------------------------------------------
// Longest Arithmetic subarray google kick start
int n; 
cin>>n;
int a[n];
for(int i=0; i<n; i++){
    cin>>a[i];
}
int ans=2;
int pd=a[1]-a[0];
int curr=2;
int j=2;

while (j<n)
{
    if(pd==a[j]-a[j-1])
    {
        curr++;
        
    }
    else{
        pd=a[j]-a[j-1];
        curr=2;
    }
    ans=max(ans,curr);
    j++;
}
cout<<ans<<endl;
//-----------------------------------------------------------------------------
//Record Breaker Google Kick start


return 0;

}