// Basic Structure of C++ Program

/*
Every C++ program follows a basic structure that includes:
Header files (#include<iostream>)
Namespace (using namespace std;)
Main function (int main())
Statements (cout << "Hello World";)
*/

// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"Hello World\n";
//     cout<<"C++ is widely used in Competative Programing";
//     return 0;
// }

//Output:
/*
Hello World
C++ is Widely Used in Competitive Programming
*/

// 2. Variables and Data Types:

/*
C++ supports different types of variables:
Integer (int): Whole numbers : 123
Floating Point (float, double): Decimal numbers : 4.5
Character (char): Single character M
Boolean (bool): true or false : 0 ,1
String (string): Collection of characters (from <string> library) : "Man"
*/ 

 #include<iostream>
 using namespace std;
 int main(){
     
	 int a=10;
     float b=5.5;
     char c = 'M';
     bool isCodingFun = true;
    
     cout<<"Integer: "<<a<<endl;
     cout<<"Float: "<<b<<endl;
     cout<<"Character: "<<c<<endl;
     cout<<"Boolean: "<<isCodingFun;
    
     return 0;
 }

// Output:
/*
Integer: 10
Float: 5.5
Character: M
Boolean: 1
*/

// 3.Operators : Operators allow us to perform operations on variables.
// a) Arithmetic Operators (+,-,*,/,%)

// #include<iostream>
// using namespace std;
// int main(){
//     int a=10, b=3;
//     cout<<"Addition: "<<a+b<<endl;
//     cout<<"Substraction: "<<a-b<<endl;
//     cout<<"Multiplication: "<<a*b<<endl;
//     cout<<"Divison: "<<a/b<<endl;
//     cout<<"Modulus: "<<a%b<<endl;
//     return 0;
// }

// Output:
/*
Addition: 13
Substraction: 7
Multiplication: 30
Divison: 3
Modulus: 1
*/ 

// b) Assignment Operators(=,+=,-=,*=,/=)

// #include<iostream>
// using namespace std;
// int main(){
//     int a=5;
//     a+=5;
//     a*=5;
//     a/=5;
//     cout<<a;
//     return 0;
// }
// Output : 10

// c) Comparison Operators (==,!=,<,>,<=,>=)

// #include<iostream>
// using namespace std;
// int main(){
//     int x=5 , y=6;
//     cout<<(x==y)<<endl;
//     cout<<(x!=y)<<endl;
//     return 0;
// }

/*
output:
0
1
*/ 

// d) Logical Operators(&&,||,!)

// #include<iostream>
// using namespace std;
// int main(){
//     bool a = true , b=true;
//     cout<<(a&&b)<<endl;
//     cout<<(a||b)<<endl;
//     cout<<!a<<endl;
//     return 0;
// }

/*
output:
0
1
0
*/ 

// 4.User Input (cin)

// #include<iostream>
// using namespace std;
// int main(){
//     char a;
//     cout<<"Enter a character: ";
//     cin>>a;
//     cout<<"You Entered: "<<a;
//     return 0;
// }

/*
Output:
Enter a character: M
You Entered: M
*/ 

// 5. Type Casting (Implicit & Explicit)
// a) Implicit Type Casting (Automatic Conversion)

// #include<iostream>
// using namespace std;
// int main(){
//     int num = 100;
//     float b = 5.5;
//     float result = num + b; // 100 is implicitly converted to float
//     cout<<result;
//     return 0;
// }

/*
output:105.5
*/ 
// b) Explicit Type Casting :

// #include<iostream>
// using namespace std;
// int main(){
//     float num = 10.0;
//     int b = (int)num; // Explicit Conversion
//     cout<<b;
//     return 0;
// }
// Output: 10

// ASCII Values (Character to integer Conversion)

// #include<iostream>
// using namespace std;
// int main(){
//     char ch = 'B';
//     cout<<"ASCII Value of B: "<<(int)ch;
//     return 0;
// }

// output : ASCII Value of B: 66 

// #include<iostream>
// using namespace std;
// int main(){
//     char c = 'A';
//     int x = (int)c;
//     cout<<x-64;
//     return 0;
// }
// Output : 1

// 7. Control Statements 
// a) if-else

// #include<iostream>
// using namespace std;
// int main(){
//     int age;
//     cout<<"Enter your age: ";
//     cin>>age;
    
//     if(age>=18){
//         cout<<"Your are in adult";
//     }else{
//         cout<<"Your are a minor";
//     }
//     return 0;
// }

/*
Enter your age: 23
Your are in adult
*/ 

// b) Loops

// for
// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=5;i++){
//         cout<<i<<" ";
//     }
//     return 0;
// }

// while
// #include<iostream>
// using namespace std;
// int main(){
//     int i=1;
//     while(i<=5){
//         cout<<i<<" ";
//         i++;
//     }
//     return 0;
// }

// do-while
// #include<iostream>
// using namespace std;
// int main(){
//     int i=1;
//     do{
//         cout<<i<<" ";
//         i++
//     }while(i<=5);
//     return 0;
// }
// ALL ABOVE Loops have same Output: 1 2 3 4 5

// 8 . function :

// #include<iostream>
// using namespace std;

// void greet(){
//     cout<<"Hello, Welcome to C++ Programing!";
// }

// int main(){
//     greet();
//     return 0;
// }
// Output : Hello, Welcome to C++ Programing

// 9. Arrays:

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]={1,2,3,4,5};
//     cout<<"First Element: "<<arr[0];
//     return 0;
// }

// Output : 1

// 10. Pointers

#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int *ptr = &a;
    cout<<"Value: "<<*ptr;
    return 0;
}

// Output : Value: 10
