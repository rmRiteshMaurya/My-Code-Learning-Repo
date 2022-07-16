#include<iostream>
using namespace std;

// int main(){
// int rows,columns;
// cin>>rows>>columns;

// for(int i=1; i<=rows; i++){
//     for(int j=1; j<=columns; j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }

// }

//===========space between================//

// ****
// *  *
// *  *
// ****

// int main(){
//     int rows,columns;
//     cin>>rows>>columns;

//     for(int i=1; i<=rows; i++){
//         for(int j=1; j<=columns; j++){
//             if(i==1 || i==rows || j==1 || j==columns){
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }

//============ half pyramid using *  =============//

// *
// **
// ***

// int main(){
//     int n;
//     cin>>n;

//     for (int i=1; i<=n; i++){
//         for (int j=1; j<=i; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//====== half pyramid after 180 degree rotation =====//

//   *
//  **
// ***

// int main() {
//     int n;
//     cin>>n;

//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n; j++){
//             if(j<=n-i){
//                 cout<<" ";
//             }else{
//                 cout<<"*";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//===========inverted half pyramid================//

// ***
// **
// *

// int main(){
//     int n;
//     cin>>n;

//     for(int i=n; i>=1; i--){
//         for(int j=1; j<=i; j++){
//                 cout<<"*";
//             }
//         cout<<endl;
//     }
// }

//==== inverted half pyramid after 180 degree rotation ====//

// ****
//  ***
//   **
//    *

// int main(){
//     int n;
//     cin>>n;

//     for (int i=n; i>=1; i--){
//         for (int j=1; j<=n; j++){
//             if(j<=n-i){
//                 cout<<" ";
//             }else{
//                 cout<<"*";
//             }
//         }
//         cout<<endl;
//     }
// }

//============= Half pyramid using number ============//

// 1
// 12
// 123

// int main(){
//     int n;
//     cin>>n;

//     for (int i=1; i<=n; i++){
//         for (int j=1; j<=i; j++){
//             cout<<j;
//         }
//         cout<<endl;
//     }
//     return 0;
// }


//========= Inverted Half pyramid using number ========//

// 1234
// 123
// 12
// 1

// int main(){
//     int n;
//     cin>>n;

//     for (int i=n; i>=1; i--){
//         for (int j=1; j<=i; j++){
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }

//===================================================//

//   1
//  12            
// 123
//1234

// int main(){
//     int n;
//     cin>>n;

//     for (int i=1; i<=n; i++){
//         for(int j=1; j<=n-i; j++){
//             cout<<" ";
//         }
//         int k=1;
//         for(int j=1; j<=i; j++){
//             cout<<k++;
//         }
//         cout<<endl;
//     }
// }

//=====================================================//

// 1234
//  123 
//   12
//    1

// int main(){
//     int n;
//     cin>>n;

//     for(int i=n; i>=1; i--){
//         for(int j=1; j<=n-i; j++){
//             cout<<" ";
//         }
//         int k=1;
//         for(int j=1; j<=i; j++){
//             cout<<k++;
//         }
//         cout<<endl;
//     }
// }

//======== half pyramid using two same number =========//

// 1
// 22
// 333
// 4444


// int main(){
//     int n;
//     cin>>n;

//     for (int i=1; i<=n; i++){
//         for (int j=1; j<=i; j++){
//             cout<<i;
//         }
//         cout<<endl;
//     }
// }

//==== half pyramid using two same number by 180 degree rotation ====//

//   1
//  22
// 333

// int main(){
//     int n;
//     cin>>n;

//     for(int i=1; i<=n; i++){
//         for (int j=1; j<=n; j++){
//             if(j<=n-i){
//                 cout<<" ";
//             }else{
//                 cout<<i;
//             }
//         }
//         cout<<endl;
//     }
// }

//========= inverted half pyramid using same number ========//

// 1111
// 222
// 33
// 4

// int main(){
//     int n;
//     cin>>n;

//     for (int i=n; i>=1; i--){
//         for (int j=1; j<=i; j++){
//             cout<<(n-i+1);
//         }
//         cout<<endl;
//     }
// }

//=======================================================//

// 11111
//  2222
//   333
//    44
//     5

// int main(){
//     int n;
//     cin>>n;

//     for (int i=n; i>=1; i--){
//         for (int j=1; j<=n; j++){
//            if(j<=n-i){
//             cout<<" ";
//            }else{
//             cout<<(n-i+1);
//            }
//         }
//         cout<<endl;
//     }
// }

//===========================================================

// 1
// 01
// 101
// 0101
// 10101

// int main(){
//     int n;
//     cin>>n;

//     for (int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){

//             if ((i+j)%2==0){
//                 cout<<"1";
//             }else{
//                 cout<<"0";
//             }
//         }
//         cout<<endl;
//     }
// }

