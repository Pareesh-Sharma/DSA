/*############# O(n) ###############*/
/*############# O(n) will always give straight line graph ###############*/

// #include<iostream>
// using namespace std;

// void print_items(int n){
//     for(int i=0; i<n; i++){
//         cout<<i<<" ";
//     }
// }

// int main(){
//     print_items(10);
// }




/*############# O(n+n) = O(2n) = O(n) ###############*/

// #include<iostream>
// using namespace std;

// void print_items(int n){
//     for(int i=0; i<n; i++){
//         cout<<i<<" ";
//     }
//     for(int i=0; i<n; i++){
//         cout<<i<<" ";
//     }
// }

// int main(){
//     print_items(10);
// }




/*############# O(n*n) = O(n^2) ###############*/

// #include<iostream>
// using namespace std;

// void print_system(int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<i<<j<<endl;
//         }
//     }
// }

// int main(){
//     print_system(5);
//     return 0;
// }




/*
RULES :-  
1. Ignore Constants
2. Drop NON-DOMINANT terms
3. Show different terms of inputs ( eg: O(a+b) )
*/



/*############# O(1) ###############*/
/*############# only one operation (NO LOOPING - very efficient)###############*/

// #include<iostream>
// using namespace std;

// int print_items(int n){
//     return(n+n);
// }

// int main(){
//     cout<<print_items(1000);
//     return 0;
// }




/*############# O(log n) - very efficient ###############*/
// divide and conquer 




/*############# Big O: Vectors ###############*/

/*

looking by value  = O(n)
looking by index = O(1)

adding/removing an item in the last index = O(1)
adding/removing an item in any other index = O(n)

*/