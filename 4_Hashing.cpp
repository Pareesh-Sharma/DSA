// Imp : Asked a LOT of times, how many times a number appears (pre storing and fetching)
// create hash array (array and initialize it with zero) it tells FREQUENCY

// //=========================================

// #include<iostream>                       //---> brute force
// using namespace std;

// int finder(int arr[],int n) {
//     int count = 0;
//        for(int i=0;i<5;i++){
//         if(arr[i]==n){
//             count++;
//         }
//        }
//     return count;
// }

// int main(){
//     int arr[5] = {1,2,6,6,6};
//     cout<<finder(arr,10);
// }



// //=============== (array) HASHING ====================

// #include<iostream>                       
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }

//     int hash[13] = {0};                             // eg _ 2 is stored in hash[2]
//     for (int i = 0; i < n; i++)
//     {
//         hash[arr[i]] += 1; 
//     }
    
//     int q;
//     cin>>q;
//     while (q--)
//     {
//         int number;
//         cin>>number;
//         cout<<hash[number]<<" ";
//     }

//     return 0;
// }




// //===============  Character HASHING ====================

// #include<iostream>                       
// using namespace std;

// int main(){
//     string s;
//     getline(cin,s);

//     int hash[26] = {0};
//     for (int i = 0; i < s.size(); i++)
//     {
//         hash[s[i]-'a'] += 1;
//     }
    
//     int q;
//     cin>>q;
//     while (q--)
//     {
//         char c;
//         cin>>c;
//         cout<<hash[c-'a']<<" ";
//     }

//     return 0;
// }


// //===============  Character HASHING ====================

// #include<iostream>                       
// using namespace std;

// int main(){
//     string s;
//     getline(cin,s);

//     int hash[256] = {0};
//     for (int i = 0; i < s.size(); i++)
//     {
//         hash[s[i]] += 1;
//     }
    
//     int q;
//     cin>>q;
//     while (q--)
//     {
//         char c;
//         cin>>c;
//         cout<<hash[c]<<" ";
//     }

//     return 0;
// }



// //================== MAP (element and freq) =========================
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int v;
//     cin>>v;
//     int arr[v];
//     for (int i = 0; i < v; i++)
//     {
//         cin>>arr[i];
//     }
    
//     map<int , int> mpp;
//     for (int i = 0; i < v; i++)
//     {
//         mpp[arr[i]]++;
//     }
    
//     int q;
//     cin>>q;
//     while (q--)
//     {
//         int num;
//         cin>>num;
//         cout<<mpp[num]<<endl;
//     }
    
//     return 0;
// }


// //================== MAP (element and freq) =========================
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int v;
//     cin>>v;
//     int arr[v];
//     for (int i = 0; i < v; i++)
//     {
//         cin>>arr[i];
//     }
    
//     map<int , int> mpp;
//     for (int i = 0; i < v; i++)
//     {
//         mpp[arr[i]]++;
//     }
    
//     int q;
//     cin>>q;
//     while (q--)
//     {
//         int num;
//         cin>>num;
//         cout<<mpp[num]<<endl;
//     }
    
//     return 0;
// }



// // //================== MAP (element and freq) =========================
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n
//     cin>>n
//     arr[n];
//     arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }

//     map<int, int>mpp;
//     for (int i = 0; i < n; i++)
//     {
//         mpp[arr[i]]++;
//     }
    

//     int q;
//     cin>>q;
//     while(q--){
//     int num;
//     cin>>num;
//     cout<<mpp[num]<<endl;
//     }
    
//     return 0;
// }



// //================== Unordered MAP (element and freq) =========================
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }

//     unordered_map<int, int> mpp;
//     for (int i = 0; i < n; i++)
//     {
//         mpp[arr[i]]++;
//     }
    

//     int q;
//     cin>>q;
//     while(q--){
//     int num;
//     cin>>num;
//     cout<<mpp[num]<<endl;
//     }
    
//     return 0;
// }
