// #include<iostream>
// using namespace std;
// int main(){
//     int n,m;
//     cin>>n>>m;
//     int arr[n][m];
//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//             cin>>arr[i][j];
//         }
//     }
//     int key;
//     cin>>key;
//     cout<<"Matrix is : "<<endl;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//             if(arr[i][j]==key){
//             cout<<i<<j;
//             }
//         }
//     }
// }
//------------------------------------------------------------------------------
// #include <iostream>
// using namespace std;
// int main(){
//     int row,col;
//     cin>>row>>col;
//     int a[row][col];
//     int b[row][col];
//     cout<<"Enter first matrix: ";
//     for(int i=0; i<row; i++){
//         for(int j=0; j<col; j++){
//             cin>>a[i][j];
//         }
//     }
//     cout<<"Enter second matrix: ";
//     for(int i=0; i<row; i++){
//         for(int j=0; j<col; j++){
//             cin>>b[i][j];
//         }
//     }
//     int c[row][col];
//     for(int i=0; i<row; i++){
//         for(int j=0; j<col; j++){
//             c[i][j]=a[i][j]+b[i][j];
//         }
//     }
//     cout<<"Addition of matrix is: "<<endl;
//     for(int i=0; i<row; i++){
//         for(int j=0; j<col; j++){
//             cout<<c[i][j]<<" ";
//         }
//         cout<<endl;
//     }

// }
//----------------------------------------------------------------------------------------
// #include <iostream>
// using namespace std;
// int main(){
//     int row, col;
//     cin>>row>>col;
//     int a[row][col];
//     int b[row][col];
//     cout<<"Enter the first matrix: ";
//     for(int i=0; i<row; i++){
//         for(int j=0; j<col; j++){
//             cin>>a[i][j];
//         }
//     }
//     cout<<"Enter the Second matrix: ";
//     for(int i=0; i<row; i++){
//         for(int j=0; j<col; j++){
//             cin>>b[i][j];
//         }
//     }
//     int c[row][col];
//         for(int i=0; i<row; i++){ 
//            for(int j=0; j<col; j++){
//                c[i][j]=0;
//                  for(int k=0; k<col; k++){
//                      c[i][j]+=a[i][k]*b[k][j];
                     

//                 }
//               }
//           }
//           cout<<"Multiplied matrix is: "<<endl;
//           for(int i=0; i<row; i++){
//               for(int j=0; j<col; j++){
//                   cout<<c[i][j]<<" ";
//               }
//               cout<<endl;
//           }

//         return 0;
// }
//-----------------------------------------------------------------------------
#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    cout<<"Enter the matrix: "<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>a[i][j];
        }
    }
    //logic
    for(int i=0; i<n; i++){
        for(int j=i; j<m; j++){
              int temp=a[i][j];
              a[i][j]=a[j][i];
              a[j][i]=temp;

        }
    }
    cout<<"Transpose matrix is: "<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}