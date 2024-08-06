// // =====================================

// #include<iostream>
// #include<vector>
// using namespace std;

// void number_extractor(int n){
//     vector<int> digits;

//     // Extract digits and store in the vector
//     while (n > 0) {
//         digits.push_back(n % 10);
//         n = n / 10;
//     }

//     // Print digits in the original order
//     for (int i = digits.size() - 1; i >= 0; i--) {
//         cout << digits[i] << endl;
//     }
// }

// int main(){
//     number_extractor(7895678);
//     return 0;
// }


// //==========================================

// #include<iostream>
// #include<vector>

// using namespace std;

// void count_digits(int n){
//     vector <int> digit_counter;
//     while (n>0)
//     {   
//         digit_counter.push_back(n%10);
//         n = n/10;
//     }
//     cout<<digit_counter.size();
// }

// int main(){
//     count_digits(78795);
//     cout<<endl;
//     count_digits(7);
//     cout<<endl;
//     return 0;
// }



// //==========================================


// #include<iostream>
// using namespace std;

// int reverse_num(int n)
// {
//     int ans = 0;
//     while(n!=0){
//         int last_digit = n%10;
//         ans = ans*10 + last_digit;
//         n = n/10;
//     }
//     return ans;
// }

// int main(){
//     cout<<reverse_num(4567)<<endl;
//     return 0;
// }

//4567 --> 7654


// //==========================================

// #include<iostream>
// using namespace std;


// bool isPalindrome(int x){
//         int ans =0;
//         while(x!=0)
//         {
//             int last_bit = x%10;
//             if(ans>(INT_MAX/10)||ans<(INT_MIN/10)){return 0;}
//             ans = ans*10 + last_bit;
//             x = x/10;
//         }
//     if(ans==x)
//     {
//         return true;
//         cout<<"y";
//     }
//     else
//     {
//         return false;
//     }
// }

// int main(){
//     isPalindrome(121);
// }


// //==========================================


// #include<iostream>
// using namespace std;

// bool isArmstrong(int x){
//     int sum = 0;
//     int xcopy = x;
    
//     if(x<0){
//         return false;
//     }
//     while(x!=0){
//         int last_bit = x%10;
//         sum = sum + (last_bit*last_bit*last_bit) ;
//         x=x/10;
//     }
//     return(sum==xcopy);
// }


// int main(){
//     int val;
//     cin>>val;
//     cout<<endl<<isArmstrong(0)<<endl;
//     return 0;
// }


// //==========================================

// #include<iostream>
// #include<vector>
// using namespace std;

// void allDivisors(int a){
//     vector<int> list;
//     for(int i=1;i<=sqrt(a);i++){
//         if((a%i)==0){
//             list.push_back(i);
//             if((a/i)!=i) list.push_back(a/i);
//         }
//     }
//     sort(list.begin(),list.end());
//     for(int z : list) cout<<z<<" ";
//     }
// int main(){
//     allDivisors(25);
//     return 0;
// }



// //==========================================

// #include<iostream>
// using namespace std;

// void isPrime(int n){
// int flag = 1;
//     for (int i = 2 ; i < n; i++)
//     {
//             if((n%i)==0){
//                 flag = 0;
//                 break;
//             }
//     }
// if(n==1){
//     cout<<"neither prime nor composite";
// }
// else if (flag == 0)
// {
//     cout<<"Not Prime";
// }
// else cout<<"Prime";

// }

// int main(){
//     isPrime(11);
//     return 0;
// }



// //==========================================

// #include<iostream>
// #include<vector>
// #include<math.h>
// using namespace std;

// void findGCD(int a,int b){
//     vector<int> vect;
//     int c = min(a,b);
//     for (int i = 1; i <= c; i++)
//     {

//         if(a%i==0 && b%i==0){
//             vect.push_back(i);
//         }
//     }
//     int n = vect.size();
//     cout<<vect[n-1];
// }

// int main(){
//     findGCD(13,131);
//     return 0;
// }



// //==========================================

// #include<iostream>
// using namespace std;

// void euclideanAlgo(int a, int b){
    
//     while (a>0 && b>0)
//     {
//         if(a>b) {a = a%b;}
//         else {b = b%a;}
//     }
//     if(a==0){
//         cout<<"GCD : "<<b;
//     }
//     else {
//         cout<<"GCD : "<<a;
//     }
// }

// int main(){
//     euclideanAlgo(350,72);
//     return 0;
// }