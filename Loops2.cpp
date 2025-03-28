//Loops 2 in C++:
           //break
//Q.1 Wap to check if a number is prime or not.
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number : ";
//     cin>>n;
//     for(int i=2;i<=n-1;i++){
//         if(n%i==0){
//             cout<<"it's a composite number . "<<endl;
//             break;
//         }
//     }
//     return 0;
// }

/*
Enter the number : 15
it's a composite number . 
*/

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number : ";
//     cin>>n;
//     bool flag = true;
//     for(int i=2;i<=n-1;i++){
//         if(n%i==0){
//             flag=false;
//             break;
//         }
//     }
//     if(n==1) cout<<"it's neither prime nor composite";
//     if(flag==true)cout<<"it's a prime number";
//     else cout<<"it's a composite number";
//     return 0;
// }

/*
Enter the number : 7
it's a prime number
*/

// continue:

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=10;i++){
//         if(i%2==0){
//             continue;
//         }
//         cout<<i<<endl;
//     }
//     return 0;
// }

/*
1
3
5
7
9
*/ 

// print all odd number between 1 to 100

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a n: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         if(i%2!=0){
//             cout<<i<<" ";
//         }
//     }
//     return 0;
// }

/*
Enter a n: 100
1 3 5 7 9 11 13 15 17 19 21 23 25 27 29 31 33 35 37 39 41 43 45 47 49 51 53 55 57 59 61 63 65 67 69 71 73 75 77 79 81 83 85 87 89 91 93 95 97 99 
*/

// predict the output : 

// int main(){
//     while (a<b){
//         cout<<"Malayalam is a palindrome"<<endl;
//     }
// }

/*
Malayalam is a palindrome
Malayalam is a palindrome
Malayalam is a palindrome
infinite
*/

// predict the output : 

// int main(){
//     int i;
//     while(i=10){
//         cout<<i<<endl;
//         i=i+1;
//     }
// }

/*
10
10
10
...
*/

// wap to count digits of a given numbers.

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number : ";
//     cin>>n;
//     int a=n;
//     int count=0;
//     while(n>0){
//         n/=10;
//         count++;
//     }
//     if(a==0)cout<<1;
//     else cout<<count;
//     return 0;
// }

/*
Enter the number : 101010
6
*/

//Q.WAP to print sum of digits of a given number.


// WAP to print sum of digits of a given number.

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;
//     int lastdigit=0;
//     int sum=0;
//     while(n>0){
//         lastdigit=n%10;
//         sum+=lastdigit;
//         n/=10;
//     }
//     cout<<sum;
// }

/*
Enter the number: 56
11
*/ 

// wap to print reverse of a given number;

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number : ";
//     cin>>n;
//     int lastdigit = 0;
//     int r = 0;
//     while(n>0){
//         r=r*10;
//         lastdigit=n%10;
//         r+=lastdigit;
//         n/=10;
//     }
//     cout<<r;
//     return 0;
// }

/*
Enter the number : 123
321
*/

// Q. print the sum of this series : 1+2+3+4+5...

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;
//     int sum=0;
//     for(int i=1;i<=n;i++){
//         if(i%2!=0){
//             sum+=i;
//         }else{
//             sum-=i;
//         }
//     }
//     cout<<sum;
// }

/*
Enter the number: 7
4
*/

// Q.print the factorial of a given number 'n':

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;
//     int p=1;
//     for(int i=1;i<=n;i++){
//         p*=i;
//     }
//     cout<<p;
//     return 0;
// }

/*
Enter the number: 5
120
*/

// Q. print the nth fibonacci number:

#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the term: ";
    cin >> n;

    if(n == 1 || n == 2){ 
        cout << "1";  // First two Fibonacci numbers are always 1
        return 0;  // Exit early
    }

    int a = 1, b = 1, sum = 0;

    for(int i = 3; i <= n; i++){  // Loop starts from 3, not 1
        sum = a + b;  
        a = b;
        b = sum;
    }

    cout << sum;
    return 0;
}

/*
Enter the term: 5
5
*/



