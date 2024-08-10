// //===============================================

// #include<iostream>
// using namespace std;

// void recursiveFn(int i,int n){
//     if(i>n){
//         return;
//     }
//     cout<<"legend "<<endl;
//     cout<<i<<endl;
//     recursiveFn(i+1 , n);
// }

// int main(){
//     recursiveFn(2,5);
//     return 0;
// }


// // //===============================================

// #include<iostream>
// using namespace std;

// void recursiveFn(int i){
//     if(i<1){
//         return;
//     }
//     recursiveFn((i-1));                               //backtracking
//     cout<<i<<endl;

// }

// int main(){
//     recursiveFn(4);
//     return 0;
// }



// // //===============================================

// #include<iostream>
// using namespace std;

// void recursiveFn(int i,int n){
//     if(i>n){
//         return;
//     }
//     recursiveFn((i+1),n);                               //backtracking
//     cout<<i<<endl;

// }

// int main(){
//     recursiveFn(1,5);
//     return 0;
// }




// //===============================================

// #include<iostream>
// using namespace std;

// int recursiveAdder(int i){
//     if(i<1){
//         return 0;
//     }
//     return i+recursiveAdder(i-1);
// }

// int main(){
//     cout<<recursiveAdder(10);
//     return 0;
// }




// // //===============================================

// #include<iostream>
// using namespace std;

// int recursiveFn(int i){
//     if(i==0){
//         return 1;
//     }
//     return i*recursiveFn(i-1);
// }

// int main(){
//     cout<<recursiveFn(10);
//     return 0;
// }




// //===============================================

// #include<bits/stdc++.h>
// using namespace std;

// void funt(int i, int arr[], int n){
//     if(i>=n/2){
//         return;
//     }
//     swap(arr[i], arr[n-1-i]);
//     funt(i+1 , arr, n);
// }

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }
//     funt(0, arr, n);
//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }




// //===============================================

// #include<bits/stdc++.h>
// using namespace std;

// void funt(int i, int arr[], int n){
//     if(i>=n/2){
//         return;
//     }
//     swap(arr[i], arr[n-1-i]);
//     funt(i+1 , arr, n);
// }

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }
//     funt(0, arr, n);
//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }



// //===============================================

// #include<iostream>
// using namespace std;

// int fib(int n) {
//        if(n==0){
//         return 0;
//        }
//        if(n==1){
//         return 1;
//        }
//     return(fib(n-1)+fib(n-2));
// }

// int main(){
//     cout<<fib(6);
// }