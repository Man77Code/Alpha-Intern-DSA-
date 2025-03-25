// Loops 1

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=5;i++){
//         cout<<"Alpha Coder"<<endl;
//     }
//     return 0;
// }

/*
Alpha Coder
Alpha Coder
Alpha Coder
Alpha Coder
Alpha Coder
*/ 

// Q.Print Alpha intern 'n' times. take 'n' as input from user.

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter n:";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         cout<<"Alpha Intern!!"<<endl;;
//     }
//     return 0;
// }

/*
Enter n:7
Alpha Intern!!
Alpha Intern!!
Alpha Intern!!
Alpha Intern!!
Alpha Intern!!
Alpha Intern!!
Alpha Intern!!
*/ 

// Q. printing 1 to 100 using for loop.

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=100;i++){
//         cout<<i<<endl;
//     }
//     return 0;
// }
/*
1
2
3
4
5
6
7
8
9
10 
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
86
87
88
89
90
91
92
93
94
95
96
97
98
99
100


=== Code Execution Successful ===
*/

// Q. printing all even numbers between 1 to 100. 

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=100;i++){
//         if(i%2==0){
//             cout<<i<<endl;
//         }
//     }
//     return 0;
// }

/*
2
4
6
8
10
12
14
16
18
20
22
24
26
28
30
32
34
36
38
40
42
44
46
48
50
52
54
56
58
60
62
64
66
68
70
72
74
76
78
80
82
84
86
88
90
92
94
96
98
100
*/

// Q. print the table of 19;

// #include<iostream>
// using namespace std;
// int main(){
//     int num = 19; // The number whose table you want to print
//     for(int i = 1; i <= 10; i++) {
//         cout << num << " x " << i << " = " << num * i << endl;
//     }
//     return 0;
// }

/*
19 x 1 = 19
19 x 2 = 38
19 x 3 = 57
19 x 4 = 76
19 x 5 = 95
19 x 6 = 114
19 x 7 = 133
19 x 8 = 152
19 x 9 = 171
19 x 10 = 190
*/ 
// another way

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value n: ";
//     cin>>n;
//     for(int i=1;i<=10;i++){
//         cout<<19*i<<endl;
//     }
//     return 0;
// }

// Q.Display this ap - 1,3,5,7,9... upto 'n' terms

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     for(int i=1;i<=2*(n-1);i+=2){
//         cout<<i<<endl;
//     }
//     return 0;
// }

// Another way :

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value of n:";
//     cin>>n;
//     int a=1;
//     for(int i=1;i<=n;i++){
//         cout<<a<<endl;
//         a+=2;
//     }
//     return 0;
// }

/*
Enter the value of n:3
1
3
5
*/ 

// Display this GP(1,2,4,8,16,32...) UPTO 'n' terms.


// #include<iostream>
// using namespace std;
// int main(){
//     // 1,2,3,4,8,16,32
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
    
//     int a = 1;
//     for(int i=1;i<=n;i++){
//         cout<<a<<endl;
//         a*=2;
//     }
//     return 0;
// }

/*
Enter the value of n: 6
1
2
4
8
16
32
*/ 

// Q. print 1 to 5 reverse : 5,4,3,2,1;

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=5;i>=1;i--){
//         cout<<i<<endl;
//     }
//     return 0;
// }

/*
5
4
3
2
1
*/

// intro to while loop:

// #include<iostream>
// using namespace std;
// int main(){
//     int i=1;
//     while(i<=5){
//         cout<<i<<endl;
//         i++;
//     }
//     return 0;
// }

/*
1
2
3
4
5
*/ 

// Predict the output:

// #include<iostream>
// using namespace std;
// int main(){
//     int i;
//     while(i<=10){
//         cout<<i<<endl;
//         i=i+1;
//     }
// }
/*
0
1
2
3
4
5
6
7
8
9
10
*/

#include<iostream>
using namespace std;
int main(){
    int x=1;
    while(x==1){
        x=x-1;
        cout<<x<<endl;
    }
    return 0;
}
// 0
