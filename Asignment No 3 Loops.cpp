// Assignment On Loops : 1
// Q,1 Print all the odd numbers from 1 to 100.

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         if(i%2!=0){
//             cout<<i<<" ";
//         }
//         // cout<<endl;
//     }
//     return 0;
// }

/*
Enter the value of n: 100
1 3 5 7 9 11 13 15 17 19 21 23 25 27 29 31 33 35 37 39 41 43 45 47 49 51 53 55 57 59 61 63 65 67 69 71 73 75 77 79 81 83 85 87 89 91 93 95 97 99 
*/

// Q.2 Print all numbers from 1 to 100 that are divisible by 3,

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         if(i%3==0){
//             cout<<i<<" ";
//         }
//     }
//     return 0;
// }

/*
Enter the value of n: 100

3 6 9 12 15 18 21 24 27 30 33 36 39 42 45 48 51 54 57 60 63 66 69 72 75 78 81 84 87 90 93 96 99 
*/

// Q3.Display this AP -4,7,10,13,16... upto 'n' terms.

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value of n : ";
//     cin>>n;
//     int a=4;
//     for(int i=1;i<=n;i++){
//         cout<<a<<endl;
//         a+=3;
//     }
//     return 0;
// }

/*
Enter the value of n : 5
4
7
10
13
16
*/ 

// Q.4 Display this GP = 3,12,48,... upto 'n' terms:

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value of n : ";
//     cin>>n;
//     int a=3;
//     for(int i=1;i<=n;i++){
//         cout<<a<<endl;
//         a*=4;
//     }
//     return 0;
// }

/*
Enter the value of n : 4
3
12
48
192
*/

// Q.5 write a program to print all the ascill values and their equivalent characters of 26 alphabets using a while loop;

// #include<iostream>
// using namespace std;
// int main(){
//     int i = 97; // ASCII value for 'A'
//   // Using a while loop to iterate through the uppercase alphabet range
//     while (i <= 122) {
//     cout << i << " = " << char(i) << endl;
//     i++; // Increment to move to the next ASCII value
//     }
//     i=65;
//     while(i<=90){
//     cout << i << " = " << char(i) << endl;
//     i++; // Increment to move to the next ASCII value
//     }
//     return 0;
// }


// Q.6 Write a program to take an integer n as input and print numbers from n to 1 using a loop.


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     for(int i=n;i>=1;i--){
//         cout<<i<<endl;
//     }
//     return 0;
// }

/*
Enter the value of n: 5
5
4
3
2
1
*/ 

// Q.7 Write a C++ program to take an integer n as input and print the sum of the first n natural numbers using a loop.

// #include<iostream>
// using namespace std;
// int main(){
//     int n , sum=0;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//      sum+=i;
//      }
//     cout<<"The sum of first "<<n<<" natural is "<<sum<<endl;
//     return 0;
// }

/*
Enter the value of n: 10
The sum of first 10 natural is 55
*/ 
