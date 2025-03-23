  Assignment NO.2 :  Conditional Assignment DSA(C++)

// Assignment No 2 : on  Conditional C++
// Q1.Take 2 integers input and print the greatest of them!!

// #include<iostream>
// using namespace std;
// int main(){
//     int n1,n2;
//     cout<<"Enter a Num 1: ";
//     cin>>n1;
//     cout<<"Enter a Num 2: ";
//     cin>>n2;
//     if(true){
//         if(n1>n2){
//             cout<<n1<<"Num 1 greater than Num 2";
//         }else{
//             cout<<n2<<"Num 2 greater than Num 1";
//         }
//     }else{
//         cout<<"Invalid input!!";
//     }
//     return 0;
// }

/*
Enter a Num 1: 10
Enter a Num 2: 8
Num 1 greater than Num 2
*/ 

// Q.2 Given the radius of the circle predict whether numerically ara of this circle is larger than the circumference or not!!

// #include<iostream>
// using namespace std;
// int main(){
//     int r;
//     cout<<"Enter a radius: ";
//     cin>>r;
//     float area=3.14*r*r;
//     float cir=2*3.14*r;
//     if(area>cir){
//         cout<<"Yes area is greter than circumference!!";
//     }else if(area<cir) {
//         cout<<"No area is greater than circumference!!";
//     }else{
//         cout<<"both are equal";
//     }
//     return 0;
// }

/*
Enter a radius: 7
Yes area is greter than circumference!!

*/ 

// Q.3 Any year is input through the keyboard. write a program to determine whether the year is a leap year on not.(considering leap year after every 4 years).

// #include<iostream>
// using namespace std;
// int main(){
//     int year;
//     cout<<"Enter a year: ";
//     cin>>year;
//     if(year%4==0){
//         cout<<year<<"the year is leap year!!";
//     }else{
//         cout<<year<<" is not leap year!!";
//     }
//     return 0;
// }
/*
Enter a year: 2025
2025 is not leap year!!
*/ 

// Q.4 Given the length and bredth of a rectangle write a program to find whether numerically the area of the rectangle is greater than it's perimeter!!

// #include<iostream>
// using namespace std;
// int main(){
//     int length , bredth , area , perimeter ;
//     cout<<"Enter a length: ";
//     cin>>length;
//     cout<<"Enter a Bredth: ";
//     cin>>bredth;
//     area = length * bredth;
//     perimeter = 2 * (length + bredth);
//     if(area>perimeter){
//         cout<<"Area is greater than perimeter!!"<<endl;
//     }else if(area<perimeter){
//         cout<<"Area is lesser than perimeter!!"<<endl;
//     }else{
//         cout<<"Both are equal!!";
//     }
//     return 0;
// }

/*
Enter a length: 10
Enter a Bredth: 12
Area is greater than perimeter!!
*/ 

// Q.5 Write a program to input sides of a triangle and check whether a triangle is equilateral , scalene or isosceles triangle.

// #include<iostream>
// using namespace std;
// int main(){
//     int a,b,c;
//     cout<<"Enter A: ";
//     cin>>a;
//     cout<<"Enter B: ";
//     cin>>b;
//     cout<<"Enter C: ";
//     cin>>c;
//     if((a==b)&&(b==c)){
//         cout<<"Equilateral";
//     }else if((a!=b)&&(b!=c)&&(a!=c)){
//         cout<<"Scalane Triangle";
//     }else if(((a==b)&&(b!=c)) || ((b==c)&&(c!=a)) || ((c==a)&&(a!=b))){
//         cout<<"Isosceles";
//     }
//     return 0;
// }
/*
Enter A: 7
Enter B: 8
Enter C: 7
Isosceles
*/

// Q.6 If the marks of A,B and C are input throught the keyword , write a program to determine the student scoring least marks!!

// #include<iostream>
// using namespace std;
// int main(){
//     int a,b,c;
//     cout<<"Enter A:";
//     cin>>a;
//     cout<<"Enter b:";
//     cin>>b;
//     cout<<"Enter c:";
//     cin>>c;
//     if((a<b)&&(a<c)){
//         cout<<"A has least marks";
//     }else if((b<a)&&(b<c)){
//         cout<<"B has least marks";
//     }else{
//         cout<<"C has least marks";
//     }
//     return 0;
// }

// Q.7 Given a point(x,y), write a program to find out if it lies on the x-axis, y-axis or at the origin, viz(0,0).

#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter X:";
    cin>>a;
    cout<<"Enter Y:";
    cin>>b;
    if((a!=0)&&(b==0)){
        cout<<"Point lies on a";
    }else if((b!=0)&&(a==0)){
        cout<<"Point lies on b";
    }else{
        cout<<"Point lies inbetween A AND B";
    }
    return 0;
}

// #include<iostream>
// using namespace std;
// int main(){
//     int x,y;
//     cout<<"Enter X: ";
//     cin>>x;
//     cout<<"Enter Y: ";
//     cin>>y;
//     if((x==0)&&(y==0)){
//         cout<<"Lies on point";
//     }else if((x!=0)&&(y==0)){
//         cout<<"at x axis";
//     }else if((x==0)&&(y!=0)){
//         cout<<"at y axis";
//     }else{
//         cout<<"Lies in plain";
//     }
//     return 0;
// }
/*
Enter X: 0
Enter Y: 5
at y axis
*/ 

// Q.8 Given three point (x1,y1) ,(x2,y2) and (x3,y3) , write a program to check if all the three point fall on one straight line.

// #include<iostream>
// using namespace std;
// int main(){
//     int x1, y1, x2 , y2 , x3 , y3 , m1 , m2;
//     cout<<"Enter First Co-ordinate: ";
//     cin>>x1;
//     cin>>y1;
//     cout<<"Enter Second Co-ordinate: ";
//     cin>>x2;
//     cin>>y2;
//     cout<<"Enter Third Co-ordinate: ";
//     cin>>x3;
//     cin>>y3;
    
//     m1=(y2-y1)/(x2-x1);
//     m2=(y3-y2)/(x3-x2);
    
//     cout<<m1<<" "<<m2<<endl;
//     if(m1==m2){
//         cout<<"Co-linear";
//     }else{
//         cout<<"Non-colinear";
//     }
//     return 0;
// }

/*
Enter First Co-ordinate: 1 2
Enter Second Co-ordinate: 3 4
Enter Third Co-ordinate: 5 8
1 2
Non-colinear
*/ 

// 9 . write a c++ program to input any character and check whether it is the alphabet , digit or special character !!

// #include<iostream>
// using namespace std;
// int main(){
//     char ch;
//     cout<<"Enter any Character: ";
//     cin>>ch;
//     int a=int(ch);
//     cout<<a;
//     if((a>=0&&a<=47)||(a>=58&&a<=64)||(a>=91&&a<=96)||(a>=123&&a<=127)){
//         cout<<" : Special Character";
//     }else if(a>=48 && a<=57){
//         cout<<": Digit";
//     }else{
//         cout<<" :Alphabet";
//     }
//     return 0;
// }

/*
Enter any Character: M
77 :Alphabet
*/ 

// 10 . Predict the output :
// #include<iostream>
// using namespace std;
// int main(){
//     int a = 500 , b , c;
//     if(a<=400)
//     b=300;
//     c=200;
//     cout<<"Value of b and c are respectively "<<b<<" and "<<c;
//     return 0;
// }
/*
Value of b and c are respectively 0 and 200
*/

// Q.11 The minimum angle between hour and minute hand when he time is 9 angle is 90 degrees.

// #include<iostream>
// using namespace std;
// int main(){
//     int h , m;
//     cout<<"Enter hour: ";
//     cin>>h;
//     cout<<"Enter mint: ";
//     cin>>m;
    
//     int h_a = h * 30;
//     int m_a = m * 6;
    
//     int diff = abs(h_a - m_a);
    
//     if(diff>180)
//     diff=360-diff;
//     cout<<"Min Angle is: "<<diff;
    
//     return 0;
// }
/*
Enter hour: 9
Enter mint: 15
Min Angle is: 180
*/

// Q.12 Write a menu-driven program.A)cm to feet b)Km to miles c) USD TO INR d)Exit

// #include<iostream>
// using namespace std;
// int main(){
//     int choice;
//     cout<<"Welcome to Convertor:\n\n";
//     cout<<"Enter your Choice:\n1.cm to ft\n2.Km to miles\n3.USD TO INR\n4.Exit\n";
//     cin>>choice;
    
//     switch(choice)
//     {
//     case 1:
//         float cm,ft;
//         cout<<"Enter length in cm : ";
//         cin>>cm;
//         ft=cm/30.48;
//         cout<<ft<<endl;
//         break;
        
//     case 2:
//         float km , miles;
//         cout<<"Enter Km in miles : ";
//         cin>>km;
//         miles = km / 1.621371;
//         cout<<miles<<endl;
//         break;
        
//     case 3:
//         float USD , INR;
//         cout<<"Enter USD To Convert Indain Rupees: ";
//         cin>>USD;
//         INR = USD * 86.95;
//         cout<<INR<<endl;
//         break;
        
//     default:
//         cout<<"Exit";
//         break;
//         // exit(0); terminate program
//     }
//     cout<<"Thank you!!";
//     return 0;
// }

/*
Welcome to Convertor

Enter your Choice:
1.cm to ft
2.Km to miles
3.USD TO INR
4.Exit
2
Enter Km in miles : 10
6.16762
Thank you!!
*/


// Q.13 Convert Case using ASCII VALUES.

#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a letter in small case : ";
    cin>>ch;
    int ch1=int(ch);
    // char cap_ch = char(int(ch)-32);
    // cout<<"Capital letter is : "<<cap_ch;
    if(ch1>=97 && ch1<=122){
        ch1=ch1-32;
    }
    char ch2=char(ch1);
    cout<<ch2;
    return 0;
}

/*
Enter a letter in small case : m
Capital letter is : M
*/

// Q.14 Predict the output.
// #include<iostream>
// using namespace std;
// int main(){
//     int x=5;
//     if(x>3)
//     cout<<"Hello ";
//     cout<<"World";
//     return 0;
// }

// output : Hello World

// Q.15 Predict the output

// #include<iostream>
// using namespace std;
// int main(){
//     int a=5;
//     if(a>10);
//     else
//     cout<<"Hello";
//     return 0;
// }

// Hello

// Q.16 Predict the output.

// #include<iostream>
// using namespace std;
// int main(){
//     int x=5;
//     if(x>3);
//     cout<<"Hello";
//     else
//     cout<<"World";
//     return 0;
// }

// error

// Q.17 Predict the output.

// #include<iostream>
// using namespace std;
// int main(){
//     if('a')
//     cout<<"Hello";
//     else
//     cout<<"World";
//     return 0;
// }
// Hello













