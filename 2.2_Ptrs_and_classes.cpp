// // ######### POINTERS ############
// // not using ptr
// #include<iostream>
// using namespace std;

// int main()
// {
// int num1 = 11;
// int num2 = num1;                //pass by value

// num1 = 22;

// cout<<num1<<"\n"<<num2<<endl;

// return 0;
// }


// /* USING PTR */

// #include<iostream>
// using namespace std;

// int main()
// {
// int *num1 = new int(11);
// int *num2 = num1;                //passing by reference

// *num1 = 100;

// cout<<num1<<"\n"<<num2<<endl;
// cout<<*num1<<"\n"<<*num2<<endl;

// return 0;
// }


// this is imp. to understand the basics in order to deal with LINKED LIST




// // ######### CLASSES ############

// #include<iostream>
// using namespace std;

// class Cookie
// {
// private:
//     string color;
// public:
//     Cookie(string color){
//         this->color = color;
//     }
//     string getColor(){
//         return color;
//     }
//     void setColor(string color){
//         this->color = color;
//     }
// };

// int main(){
//     Cookie* cookie_one = new Cookie("brown");
//     Cookie* cookie_two = new Cookie("blue");

//     cookie_one->setColor("yellow");

//     cout<<cookie_one->getColor()<<endl;
//     cout<<cookie_two->getColor();
//     return 0;
// }