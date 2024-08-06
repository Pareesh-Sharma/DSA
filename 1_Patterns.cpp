//==============================
// //--------- 1 ------------

// #include<iostream>
// using namespace std;

// int main(){
//     for (int j = 0; j < 4; j++)
//     {
//         for(int i=0;i<4;i++)
//         {
//         cout<<"* ";  
//         }
//     cout<<endl;
//     }
    
//     return 0;
// }



//==================== 2 =====================

// #include<iostream>
// using namespace std;

// void print_star(int a){
//     for (int q = 1; q <= a; q++)
//     {
//         cout<<"* ";
//     }
// }

// int main(){
//     int c=1;
//     for (int j = 1; j <= 5; j++)
//     {
//         print_star(j);
//         cout<<endl;
//     }
    
//     return 0;
// }



// //===================== 3 =======================

// #include<iostream>
// using namespace std;

// void print_star(int a){
//     for (int q = 1; q <= a; q++)
//     {
//         cout<<q<<" ";
//     }
// }

// int main(){
//     int c=1;
//     for (int j = 1; j <= 5; j++)
//     {
//         print_star(j);
//         cout<<endl;
//     }
    
//     return 0;
// }


// //====================== 4 =========================

// #include<iostream>
// using namespace std;


// int main(){
//     int c=1;
//     for (int j = 1; j <= 5; j++)
//     {
//         for (int q = 1; q <= j; q++)
//         {
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
    
//     return 0;
// }


// //====================== 5 =========================


// #include<iostream>
// using namespace std;

// void print_star(int a){
//     for (int q = 5; q >= a; q--)
//     {
//         cout<<"* ";
//     }
// }

// int main(){
//     int c=1;
//     for (int j = 1; j <= 5; j++)
//     {
//         print_star(j);
//         cout<<endl;
//     }

//     return 0;
// }


// //====================== 6 =========================

// #include<iostream>
// using namespace std;

// void print_star(int a){
//     for (int q = 1; q <=a; q++)
//     {
//         cout<<q<<" ";
//     }
// }

// int main(){
//     int c=1;
//     for (int j = 5; j >= 1; j--)
//     {
//         print_star(j);
//         cout<<endl;
//     }

//     return 0;
// }



// //====================== 7 =========================

// #include<iostream>
// using namespace std;

// int main()

// {   
//     int n =6;
//     for (int i = 0; i<n; i++){
    
//         for(int j= 0;j<n-i-1;j++){
//             cout<<" ";
//     }
//     // star
//         for(int j = 0; j< 2*i+1; j++){
//             cout<<"*";
//         }
//     // space
//         for (int j = 0;j<n-i-1;j++) {
//             cout<<" ";
//         }
//     cout<<endl;
//     }
// }




// //====================== 8 =========================

// #include<iostream>
// using namespace std;

// int main()

// {   
//     int n = 5;

//     for (int i = 0; i < n; i++)
//     {
//         for (int p = 0; p < i; p++)
//         {
//             cout<<" ";
//         }
//         for (int q = 0; q < n-i; q++)
//         {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
    
// }



// //====================== 9 =========================

// #include<iostream>
// using namespace std;

// int main()

// {   
//     int n = 10;

//     for (int i = 0; i < n; i++)
//     {
        
//         for (int q = 0; q < n-i; q++)
//         {
//             cout<<" ";
//         }
//         for (int p = 0; p < i; p++)
//         {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }

//     for (int i = 0; i < n; i++)
//     {
//         for (int p = 0; p < i; p++)
//         {
//             cout<<" ";
//         }
//         for (int q = 0; q < n-i; q++)
//         {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
    
// }


// //=================== 10 =======================

// #include<iostream>
// using namespace std;

// void print_pattern(int a){
//     int start =1;
//     for(int i=0;i<a;i++){
//         if(i%2==0) start = 0;
//         else start = 1;
//         for (int j = 0; j < i; j++)
//         {
//             cout<<start;
//             start = 1-start;
//         }
//         cout<<endl;
//     }
// }

// int main()

// {   
    
//     print_pattern(10);
// }


// =====================================================

// #include<iostream>
// using namespace std;

// void print_pattern(int a){
//     int k = 2*a;

//     for(int i=1;i<=a;i++)
//     {
//        for (int j= 1; j <= i; j++)
//        {
//         cout<<j;
//        }
        
//         for (int j= 1; j <= (k-(2*i)); j++)
//        {
//         cout<<" ";
//        }

//        for (int j= i; j>=1; j--)
//        {
//         cout<<j;
//        }
//        cout<<endl;
//     }
// }

// int main()

// {   
//     print_pattern(9);
// }


// =====================================================


// #include<iostream>
// using namespace std;

// void print_pattern(int a){
//     int k = 2*a;

//     for(int i=1;i<=a;i++)
//     {
//        for (int j= 1; j <= i; j++)
//        {
//         cout<<j;
//        }
        
//         for (int j= 1; j <= (k-(2*i)); j++)
//        {
//         cout<<" ";
//        }

//        for (int j= i; j>=1; j--)
//        {
//         cout<<j;
//        }
//        cout<<endl;
//     }
// }

// int main()

// {   
//     print_pattern(9);
// }




// //=============================================

// #include<iostream>
// using namespace std;

// void print_pattern(int a){

//     for (int i = 1; i <= a/2; i++)
//     {   
        
//             for (int j = 0; j < i; j++)
//             {
//                 cout<<"*";
//             }     
//             for (int k = 0; k <= a-(2*i); k++)
//             {      
//                 cout<<" " ;
//             }
        
//             for (int j = 0; j < i; j++)
//             {
//                 cout<<"*";
//             }
//             cout<<endl;
//     }
//     int space = 0;
//     for (int i = 0; i <= a/2; i++)
//     {   
//             for (int j = a/2; j >= i; j--)
//             {
//                 cout<<"*";
//             }
//             for (int k = 0; k < space; k++)
//             {      
//                 cout<<" ";
//             }
//             for (int j = a/2; j >= i; j--)
//             {
//                 cout<<"*";
//             }
//         cout<<endl;
//     space= space +2;
//     }
// }

// int main(){
//     print_pattern(9);
//     return 0;
// }



// //=============================================


// #include<iostream>
// using namespace std;

// void print_fn(int a){
//     for (int i = 0; i < a; i++)
//     {
//         for (int j = 0; j < a; j++)
//         {   
//             if(i==0 || i==(a-1) || j==0 || j ==(a-1)){
//             cout<<"*";
//             }
//             else{
//             cout<<" ";
//             }
//         }
//     cout<<endl;
//     }
    
// }

// int main(){
//     print_fn(4);
//     return 0;
// }



// // ============================================

// #include<iostream>
// using namespace std;

// void print_fn(int a) {
//     int to_be_printed = ((a + 1) / 2);

//     for (int i = 0; i < a; i++) {
//         for (int j = 0; j < a; j++) {
//             int min_distance = min(min(i, j), min(a - i - 1, a - j - 1));
//             cout << (to_be_printed - min_distance);
//         }
//         cout << endl;
//     }
// }

// int main() {
//     print_fn(9); // Example with a = 7
//     return 0;
// }
