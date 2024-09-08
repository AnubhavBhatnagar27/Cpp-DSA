// // //Find a character is lowercase or uppercase
// // #include<bits/stdc++.h>
// // using namespace std;
// // int main(){
// //     char ch;
// //     cout<<"Enter a character: ";
// //     cin>>ch;
// //         if(ch >= 'a' && ch<='z'){
// //             cout<<"Lowercase";
// //         }
// //         else{
// //             cout<<"Uppercase";
// //         }
// // return 0;
// // }

// // //If we use the values method
// // #include<bits/stdc++.h>
// // using namespace std;
// // int main(){
// //     char ch;
// //     cout<<"Enter a character:";
// //     cin>>ch;
// //     if(ch>=65 && ch<=96){
// //         cout<<"Uppercase";
// //     }
// //     else{
// //         cout<<"Lowercase";
// //     }
// // return 0;
// // }

// // Ternary Operator
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     cout<< (n>=0?"TRUE":"FALSE");
// return 0;
// }
// Sum of all numbers from 1 to n
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int sum=0;
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;    
//     for(int i=0;i<=n;i++){
//         sum+=i;
//     }
//     cout<<"The sum is: "<<sum<<endl;
// return 0;
// }
// Sum of all odd numbers from 1 to n
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int sum=0;
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;    
//     for(int i=0;i<=n;i++){
//         if(i%2!=0){
//             sum+=i;
//         }
//     }
//     cout<<"The sum is: "<<sum<<endl;
// return 0;
// }
// Check if a number is prime or not
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    bool isprime=true;
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            return isprime=false;
            break;
        }
    }
    if(isprime==true){
        cout<<"The number is prime";
    }
    else{
        cout<<"The number is not prime";
    }
return 0;
}