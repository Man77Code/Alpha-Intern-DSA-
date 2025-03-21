                         Assignment question with solutions: 

// Assignment questions :
// Q.1 Write a progrm that takes two integers as input and print their sum;

// #include<iostream>
// using namespace std;
// int main(){
//     int a , b ,c;
//     cout<<"Enter 1st integer: ";
//     cin>>a;
//     cout<<"Enter 2nd integer: ";
//     cin>>b;
//     c=a+b;
//     cout<<"Addition of two integer is : "<<c;
//     return 0;
// }
/*
output:
Enter 1st integer: 10
Enter 2nd integer: 20
Addition of two integer is : 30
*/ 

// Q.2 take length and bredth as input(both integers ) and calculate the area of the rectangle.

// #include<iostream>
// using namespace std;
// int main(){
//     int l , b , area;
//     cout<<"Take a length: ";
//     cin>>l;
//     cout<<"Take a breadth: ";
//     cin>>b;
//     area = l * b;
//     cout<<"The area of rectangle is: "<<area;
//     return 0;
// }

/*
output:
Take a length: 10
Take a breadth: 20
The area of rectangle is: 200
*/

// Q.Take two numbers as input and perform addition , subtraction , multiplication , and divison , Display the results.

// #include<iostream>
// using namespace std;
// int main(){
//     int num1 , num2 ;
//     cout<<"Enter a Num 1 : ";
//     cin>>num1;
//     cout<<"Enter a Num 2 : ";
//     cin>>num2;
//     cout<<"Addition of two numbers is: "<<num1+num2<<endl;
//     cout<<"Subtraction of two numbers is: "<<num1-num2<<endl;
//     cout<<"Multiplication of two numbers is: "<<num1*num2<<endl;
//     cout<<"Divison of two numbers is: "<<num1/num2;
//     return 0;
// }

/*
output:
Enter a Num 1 : 10
Enter a Num 2 : 5
Addition of two numbers is: 15
Subtraction of two numbers is: 5
Multiplication of two numbers is: 50
Divison of two numbers is: 2
*/ 

// Q.4 Take input of principle , time and rate find the simple interest !

// #include<iostream>
// using namespace std;
// int main(){
//     float principal,rate,time,simpleInterest;
//     // Input principal amount, rate of interest, and time
//     cout << "Enter the principal amount: ";
//     cin >> principal;
//     cout << "Enter the rate of interest (in %): ";
//     cin >> rate;
//     cout << "Enter the time (in years): ";
//     cin >> time;

//     // Calculate simple interest
//     simpleInterest = (principal * rate * time) / 100;

//     // Display the result
//     cout << "The Simple Interest is: " << simpleInterest << endl;

//     return 0;
    
// }

/*
Enter the principal amount: 200000
Enter the rate of interest (in %): 7
Enter the time (in years): 20
The Simple Interest is: 280000
*/

// Q.5 Take a character as input and print it's corresponding ASCII Value.

// #include<iostream>
// using namespace std;
// int main(){
//     char ch ;
//     cout<<"Enter any Character: ";
//     cin>>ch;
//     int value =(char)ch;
//     cout<<"The ASCII Value of M: "<<value;
//     return 0;
    /*
    other way:
    cout<<ch<<endl;
    cout<<int(ch);
    */ 
// }
/*
Enter any Character: M
The ASCII Value of M: 77
*/ 

// Q.6 Take a floating-point number as input , Typecast it into an integer , and print both value:

// #include<iostream>
// using namespace std;
// int main(){
//     float a ;
//     cout<<"Enter a float Value: ";
//     cin>>a;
//     cout<<"Value In a float: "<<a<<endl;
//     cout<<"Value in int after typecast: "<<int(a);
    
//     return 0;
// }

/*
Enter a float Value: 8.9
Value In a float: 8.9
Value in int after typecast: 8
*/

// Q.7 Take an integer between 65 and 90 as input and print its corresponding uppercase letter.

// #include<iostream>
// using namespace std;
// int main(){
//     int i;
//     cout<<"Enter a integer: ";
//     cin>>i;
//     cout<<char(i);
//     return 0;
// }
/*
Enter a integer: 68
D
*/
// Q.8 Predict the output of following equation:

// #include<iostream>
// using namespace std;
// int main(){
//     int a = 4 , b = 5;
//     a++ , b--;
//     cout<<"a = "<<++a<<" "<<"b = "<<b--;
//     return 0;
// }
// output : a = 6 b = 4

// Q.9 predict the output of following equation.

// #include<iostream>
// using namespace std;
// int main(){
//     int x = 5;
//     cout<<x++<<" "<<++x;
//     return 0;
// }
// output : 5 7

// Q.10 Explain the difference between x++ and ++x in your words:

/**/

// #include<iostream>
// using namespace std;
// int main(){
//     int a = 5;
//     cout<<"Enter a value: ";
//     cin>>a;
//     cout<<a++<<endl;
//     cout<<++a;
//     return 0;
// }
/*
Enter a value: 7
7
9
*/ 

// Q.11 guess the output of following code:
// #include<iostream>
// using namespace std;
// int main(){
//     int a=3,b=5,c;
//     c= a++ + ++b;
//     cout<<a<<" "<<b<<" "<<c;
//     return 0;
// }
// output : 4 6 9

// Q.12 what will be the output of the following code ?

// #include<iostream>
// using namespace std;
// int main(){
//     int x = 4 , y=2 , z;
//     z=x++ * --y + ++x;
//     cout<<x << " "<<y <<" "<<z;
//     return 0;
// }
// output : 6 1 10 

// Q.13 Write a program to find the euclideam distance betwee two coordinates . take both the coordinates from the user as input.

#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int x1,y1,x2,y2,dist;
    cout<<"Enter x1: ";
    cin>>x1;
    cout<<"Enter x2: ";
    cin>>x2;
    cout<<"Enter y1: ";
    cin>>y1;
    cout<<"Enter y2: ";
    cin>>y2;
    dist=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    cout<<"dist is: "<<dist;
    return 0;
}
/*
Enter x1: 3
Enter x2: 7
Enter y1: 4
Enter y2: 5
dist is: 4
*/ 

// Q.14 Write a program that will tell the number of dogs and chicken are there when the user will provide the value of total heads and leges.
/*
for example:
input: heads -> 4 legs -> 12
output : dogs -> 2 chicken -> 2
*/ 
// #include<iostream>
// using namespace std;
// int main(){
//     int leg , head , c , d;
//     cout<<"Enter head: ";
//     cin>>head;
//     cout<<"Enter leg: ";
//     cin>>leg;
//     c=(2*head-0.5*leg);
//     d=4-c;
//     cout<<c<<d;
//     return 0;
// }
/*
Enter head: 4
Enter leg: 12
22
*/

// Q.15 write a program to find the sum of squares of first n natural numbers where n be provided by the user.

// #include<iostream>
// #include<math.h>
// using namespace std;
// int main(){
//     int n,sum;
//     cout<<"Enter n: ";
//     cin>>n;
//     sum=(n*(n+1)*(2*n+1))/6;
//     cout<<sum;
//     return 0;
// }
/*
Enter n: 7
140

*/

//Q.16 Given 2 fractions , find the sum of those 2 fractions.Take the numerator and denominator values of the fraction from the user.

// #include<iostream>
// #include<math.h>
// using namespace std;
// int main(){
//     int x1,y1,x2,y2,sum;
//     cout<<"Enter x1: ";
//     cin>>x1;
//     cout<<"Enter x2: ";
//     cin>>x2;
//     cout<<"Enter y1: ";
//     cin>>y1;
//     cout<<"Enter y2: ";
//     cin>>y2;
//     sum=((x1*y2)+(x2*y1))/(x2*y2);
//     cout<<"Sum is: "<<sum;
//     return 0;
// }
/*
Enter x1: 2
Enter x2: 3
Enter y1: 4
Enter y2: 5
Sum is: 1
*/

// Q.17 what will be the output of the following code?
// #include<iostream>
// using namespace std;
// int main(){
//     int a=20,b=6,c=4;
//     cout<<a%b+c%a;
//     return 0;
// }
// output : 6 

// Q.18 what will be the output of the following code?
// #include<iostream>
// using namespace std;
// int main(){
//     int a=5,b=10,c=15;
//     bool result = a < b && b < c || c==10;
//     cout<<result;
//     return 0;
// }
// output : 1 (means true)

// Q.19 Guess the output : 
// #include<iostream>
// using namespace std;
// int main(){
//     int a = 10;
//     int b = 5;
//     int c = a += b-=2;
//     cout<<a<<" "<<b<<" "<<c;
//     return 0;
// }
// output : 13 3 13

// Q.20 what will be output of the following code?
// #include<iostream>
// using namespace std;
// int main(){
//     int x=5 , y=3;
//     cout<<(x&y)<<" "<<(x&&y);
//     return 0;
// }
// output : 1 1

// Q.21 what will be the output of the following code?
// #include<iostream>
// using namespace std;
// int main(){
//     int a=6,b=3;
//     a+=b *=2;
//     cout<<a<<" "<<b;
//     return 0;
// }
// output : 12 6

// Q.22 what will be the output of the following code?

#include<iostream>
using namespace std;
int main(){
    int x=0,y=10;
    bool result = (x!=0) && (y/x>2);
    cout<<result;
    return 0;
}
// output : 0
