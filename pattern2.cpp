#include<iostream>
using namespace std;

//======= Floyd Triangle ===============//

// 1
// 23
// 456
// 78910

// int main(){
//     int n;
//     cin>>n;
//     int count=1;

//     for (int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             cout<<count;
//             count++;
//         }
//         cout<<endl;
//     }
// }

//============= Butterfly Shape =============//

// *      *
// **    **
// ***  ***
// ********
// ********
// ***  ***
// **    **
// *      *

// int main() {
//     int n;
//     cin>>n;

//     for (int i=1; i<=n; i++){
//         for (int j=1; j<=i; j++){
//             cout<<"*";
//         }
//         int space = 2*n-2*i ;    //2*given number - 2*number of row
//         for (int j=1; j<=space; j++){
//             cout<<" ";
//         }
//         for (int j=1; j<=i; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     } 
//     for (int i=n; i>=1; i--){
//         for (int j=1; j<=i; j++){
//             cout<<"*";
//         }
//         int space = 2*n-2*i ;    //2*given number - 2*number of row
//         for (int j=1; j<=space; j++){
//             cout<<" ";
//         }
//         for (int j=1; j<=i; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

//============= Hollow Butterfly Shape =============//

// *        *
// **      **
// * *    * *
// *  *  *  *
// *   **   *
// *   **   *
// *  *  *  *
// * *    * *
// **      **
// *        *

// int main(){
//     int n;
//     cin>>n;

//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             if(j==1 || j==i){                  //
//                 cout<<"*";                     //
//             }else{                             //
//                 cout<<" ";                     //
//             }                                  //
//         }
//         int space = 2*n-2*i;
//         for(int j=1; j<=space; j++){
//             cout<<" ";
//         }
//         for(int j=1; j<=i; j++){
//             if(j==1 || j==i){
//                 cout<<"*";
//             }else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
//     for(int i=n; i>=1; i--){
//         for(int j=1; j<=i; j++){
//             if(j==1 || j==i){
//                 cout<<"*";
//             }else{
//                 cout<<" ";
//             }
//         }
//         int space = 2*n-2*i;
//         for(int j=1; j<=space; j++){
//             cout<<" ";
//         }
//         for(int j=1; j<=i; j++){
//             if(j==1 || j==i){
//                 cout<<"*";
//             }else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }

// }

//============= Rhombus Pattern =============//

//     *****
//    *****
//   *****
//  *****
// *****

// int main(){
//     int n;
//     cin>>n;

//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n-i; j++){
//             cout<<" ";
//         }
//         for(int j=1; j<=n; j++){
//             cout<<"*";
//         }cout<<endl;
//     }
//  }

//============= Hollow Rhombus Pattern =============//

//     *****
//    *   *
//   *   *
//  *   *
// *****

// int main(){
//     int n;
//     cin>>n;

//     for (int i=1; i<=n; i++){
//         for (int j=1; j<=n-i; j++){
//             cout<<" ";
//         }
//         for(int j=1; j<=n; j++){
//             if(i==1 || i==n || j==1 || j==n){
//                 cout<<"*";
//             }else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }

//================================================

//     1
//    1 2
//   1 2 3
//  1 2 3 4
// 1 2 3 4 5

// int main(){
//     int n;
//     cin>>n;

//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n-i; j++){
//             cout<<" ";
//         }
//         for(int j=1; j<=i; j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }

//============= Pyramid ============================

//     1 
//    2 2
//   3 3 3
//  4 4 4 4
// 5 5 5 5 5

// int main(){
//     int n;
//     cin>>n;

//     for ( int i=1; i<=n; i++){
//         for (int j=1; j<=n-i; j++){
//             cout<<" ";
//         }
//         for (int j=1; j<=i; j++){
//             cout<<i<<" ";
//         }
//         cout<<endl;
//     }
// }

//============Palindromic Pattern ==================

//     1
//    212
//   32123
//  4321234
// 543212345

// int main(){
//     int n;
//     cin>>n;

//     for (int i=1; i<=n; i++){
//         int j;
//         for(j=1; j<=n-i; j++){   // j ki value jo yha se chhute 
//             cout<<" ";
//         }
//         int k=i;
//         for(; j<=n; j++){     // vo yahi se continue kr le.. esliye inital value nhi likha h loop me
//             cout<<k--;
//         }
//         k=2;
//         for(; j<=n+i-1; j++){
//             cout<<k++;
//         }
//         cout<<endl;
//     }
// }

//=============== Diamond ====================//

//     *
//    ***
//   *****
//  *******
// *********
// *********
//  *******
//   *****
//    ***
//     *

// int main(){
//     int n;
//     cin>>n;

//     for(int i=1;i<=n;i++){
//         for (int j=1; j<=n-i; j++){
//             cout<<" ";
//         }
//         for( int j=1; j<=2*i-1; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     for(int i=n; i>=1; i--){
//         for (int j=1; j<=n-i; j++){
//             cout<<" ";
//         }
//         for( int j=1; j<=2*i-1; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

//============ Hollow Diamond ==============//

//     *
//    * *
//   *   *
//  *     *
// *       *
// *       *
//  *     *
//   *   *
//    * *
//     *

// int main(){
//     int n;
//     cin>>n;

//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n-i; j++){
//             cout<<" ";
//         }
//         for (int j=1; j<=(2*i-1); j++){
//             if(j==1 || j==(2*i-1)){
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
//     for(int i=n; i>=1; i--){
//         for(int j=1; j<=n-i; j++){
//             cout<<" ";
//         }
//         for (int j=1; j<=(2*i-1); j++){
//             if(j==1 || j==(2*i-1)){
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }

//========== Hollow Diamond Inscribed in a Rectangle ===========//

// *********
// **** ****
// ***   ***
// **     **
// *       *
// *       *
// **     **
// ***   ***
// **** ****
// *********

// int main(){
//     int n;
//     cin>>n;

//     for (int i=1; i<=n; i++){
//         for(int j=1; j<=n-i; j++){
//             cout<<"*";
//         }
//         for(int j=1; j<=2*i-1; j++){
//             if(j==1 || j==2*i-1){
//                 cout<<"*";
//             }else{
//                 cout<<" ";
//             }
//         }
//         for(int j=1; j<=n-i; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     for (int i=n; i>=1; i--){
//         for(int j=1; j<=n-i; j++){
//             cout<<"*";
//         }
//         for(int j=1; j<=2*i-1; j++){
//             if(j==1 || j==2*i-1){
//                 cout<<"*";
//             }else{
//                 cout<<" ";
//             }
//         }
//         for(int j=1; j<=n-i; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

//==============Zig Zag ==================//

//   *   *  
//  * * * *
// *   *   *

// int main(){
//     int n;
//     cin>>n;

//     for(int i=1; i<=3; i++){
//         for(int j=1; j<=n; j++){
//             if((i+j)%4==0 || (i==2 && j%4==0)){
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }

//================= Pascal's Triangle ========================

//      1
//     1 1
//    1 2 1
//   1 3 3 1
//  1 4 6 4 1

// int main(){
//     int n;
//     cin>>n;

//     int c = 1;
//     for (int i=0; i<n; i++){
//         for(int j=1; j<=n-i; j++){
//             cout<<" ";
//         }
//         for(int k=0; k<=i; k++){
//             if (k==0 || i==0){
//                c=1;  
//             }else{
//                 c=c*(i-k+1)/k;
//             }
//             cout<<c<<" ";
//         }
//         cout<<endl;
//     }
// }

