// Calculate sum of digits of a number
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int num,n,s=0;
//     cout<<"Enter a number: ";
//     cin>>num;
//     while(num>0){
//         n=num%10;
//         s+=n;
//         num=num/10;
//     }
//     cout<<"The sum of digits is: "<<s;
// return 0;
// }


// Calculate nCr binomial coefficient n and r
// nCr=n!/r!(n-r)!
// #include<bits/stdc++.h>
// using namespace std;
// int factorial(int n){
//     int fact =1;
//     for (int i = 1; i <= n; i++)
//     {
//         fact *=i;
//     }
//     return fact;
    
// }
// int nCr(int n,int r){
//     //n factorial
//     int fact_n=factorial(n);
//     //r factorial
//     int fact_r=factorial(r);
//     //n-r factorial
//     int fact_ncr=factorial(n-r);
//     return fact_n/(fact_r*fact_ncr);
// }
// int main(){
//     int n,r;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     cout<<"Enter the value of r: ";
//     cin>>r;
//     cout<<nCr(n,r);
// return 0;
// }


// WAF to check a number is prime of not
// #include<bits/stdc++.h>
// using namespace std;
// bool prime(int n){
//     if(n<=1) return false;
//     if(n<=3 && n>1) return true;
//     if (n % 2 == 0 || n % 3 == 0) return false;
//     for(int i=5;i*1<=n-1;i++){
//         if(n%i==0){
//             return false;
//         }
//         else{
//             return true;
//         }
//     }
//     return 0;
// }
// int main(){
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     if(prime(n)){
//         cout<<"A prime number.";
//     }
//     else{
//         cout<<"Not a Prime number.";
//     }
// return 0;
// }