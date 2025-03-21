// Conditional In c++ (IF ELSE , ELSE IF , )

// take a input , and check it's even or odd!!

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a Num: ";
//     cin>>n;
//     if(n%2==0){
//         cout<<"Number is even!!";
//     }else{
//         cout<<"Number is odd!!";
//     }
//     return 0;
// }

/*
output:
Enter a Num: 8
Number is even!!
*/

// Take a number input and tell the number is divisible by 7 or not!!

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Take a Number: ";
//     cin>>n;
//     if(n%7==0){
//         cout<<"Number is divisible by seven";
//     }else{
//          cout<<"Number is divisible by seven";
//     }
//     return 0;
// }
/*
Take a Number: 14
Number is divisible by seven
*/

// Q . seller profit and loss problem

// #include<iostream>
// using namespace std;
// int main(){
//     int costPrice ,sellPrice;
//     cout<<"Enter a costprice: ";
//     cin>>costPrice;
//     cout<<"Enter a sellprice: ";
//     cin>>sellPrice;
//     if(sellPrice>costPrice){
//         cout<<"Hurray!! Seller Made a Profit.";
//     }else{
//         cout<<"Oops!! Seller Made a incurred loss.";
//     }
//     return 0;
// }
/*
Enter a costprice: 70
Enter a sellprice: 100
Hurray!! Seller Made a Profit.
*/

// Q.Take a positive integer input and tell if it is a theree-digit number or not!!

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a Number: ";
//     cin>>n;
//     if(n>=100 && n<=999){
//         cout<<"It is a three digit number!!";
//     }else{
//         cout<<"It is not three digit number!!";
//     }
//     return 0;
// }
/*
Enter a Number: 120
It is a three digit number!!
*/ 

// Q. Take a Positive integer input and tell if it is divisible by 5 and 3

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a Number: ";
//     cin>>n;
//     if(n%3==0 && n%5==0){
//         cout<<"Number is Divible by both 3 and 5.";
//     }else{
//         cout<<"Number is not divisble by 3 and 5 .";
//     }
//     return 0; 
// }

/*
Enter a Number: 15
Number is Divible by both 3 and 5.
*/

// Q. Write a program to check whether a character is an alphabet or not

// #include<iostream>
// using namespace std;
// int main(){
//     char ch;
//     cout<<"Enter a charactetr: ";
//     cin>>ch;
//     int n = int(ch); // or (int)ch;
//     if(n>=65 && n<=90 || n>=97 && n<=122 ){
//         cout<<"Character is alphabet!!";
//     }else{
//         cout<<"Character is not alphabet!!";
//     }
//     return 0;
// }
/*
Enter a charactetr: j
Character is alphabet!!
*/ 

// Q.(Nested if else) Take positive integer input and tell if it is divisible by 5 or 3 but not divisible by 15
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a num: ";
//     cin>>n;
//     if(n%3==0 || n%5==0){
//     if(n%15!=0){
//     cout<< n <<" is divisible by 5 and 3 but not by 15!!";
//     }else{
//     cout<<n<<" Number is divisible 15";
//     }
//     }else{
//     cout<<n<<"The number is not diviible by 5 and 3 as well as 15";
//     }
//     return 0;
// }

/*
Enter a num: 25
25 is divisible by 5 and 3 but not by 15!!
*/ 

// Q.Write a program to check whether a given character is a vowel or a constant.

// #include <iostream>
// using namespace std;

// int main() {
//     char ch;
//     cout << "Enter a character: ";
//     cin >> ch;

//     if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) { // Check if it's an alphabet
//         if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
//             ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
//             cout << ch << " is a vowel." << endl;
//         } else {
//             cout << ch << " is a consonant." << endl;
//         }
//     } else {
//         cout << "Invalid input! Please enter an alphabetic character." << endl;
//     }

//     return 0;
// }

/*
Enter a character: m
m is a consonant.
*/ 

// #include<iostream>
// using namespace std;
// int main(){
//     if(0){
//         cout<<"Hi";
//     }else{
//         cout<<"Bye";
//     }
//     return 0;
// }

// output : Bye

//Q . what should be output of below c++ program if user enters a = 5?

// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cin>>a;
//     if(++a*5<=25){
//         cout<<"Hello";
//     }else{
//         cout<<"Bye";
//     }
//     return 0;
// }

/*
4
Hello
*/ 

// Q.Preduct the output :

// #include<iostream>
// using namespace std;
// int main(){
//     int x=5;
//     if(x++==5){
//         cout<<"Five"<<endl;
//     }else if(++x==6){
//       cout<<"Six"<<endl; 
//     }
//     return 0;
// }

// output : Five

//Q . predict the output:

#include<iostream>
using namespace std;
int main(){
    if(-1==-1){
        cout<<"Hey";
    }else{
        cout<<"Alpha Intern";
    }
    return 0;
}
// output : Hey
