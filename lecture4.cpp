// Pattern 1
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             cout<<j;
//         }
//         cout<<endl;
//     }
// return 0;
// }



// Pattern 2
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// return 0;
// }

// Pattern 3
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//     char ch='A';
//         for(int j=1;j<=n;j++){
//             cout<<ch;
//             ch=ch+1;
//         }
//         cout<<endl;
//     }
// return 0;
// }


// Pattern 4
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     int nums=1;
//     cout<<"Enter a number: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             cout<<nums<<"\t";
//             nums+=1;
//         }
//         cout<<endl;
//     }
// return 0;
// }

// Pattern 5
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     char ch='A';
//     cout<<"Enter a number: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             cout<<ch<<"\t";
//             ch+=1;
//         }
//         cout<<endl;
//     }
// return 0;
// }


// Pattern 6 Triangle Pattern
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     for(int i=0;i<=n;i++){
//         for(int j=1;j<=i+1-1;j++){
//             cout<<"*";
//         }
//     cout<<endl;
//     }
// return 0;
// }


// Pattern 7
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i+1;j++){
//             cout<<i+1;
//         }
//         cout<<endl;
//     }
// return 0;
// }


// Pattern 8
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     char ch='A';
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i+1;j++){
//             cout<<ch;
//         }
//         ch=ch+1;
//         cout<<endl;
//     }
// return 0;
// }


// Pattern 9 Triangle Pattern
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number:";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=1;j<=i+1;j++){
//             cout<<j;
//         }
//         cout<<endl;
//     }
// return 0;
// }


// Pattern 10 Reverse Triangle Pattern
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     for(int i=0;i<=n-1;i++){
//         for(int j=i+1;j>0;j--){
//             cout<<j;
//         }
//         cout<<endl;
//     }
// return 0;
// }


// Pattern 11 Floyd's Triangle Pattern
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     int nums=1;
//     cout<<"Enter a number:";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i+1;j++){
//             cout<<nums<<" ";
//             nums+=1;
//         }
//         cout<<endl;
//     }
// return 0;
// }


// Pattern 12 Reverse Triangle Pattern
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j>0;j--){
//             cout<<j;
//         }
//         cout<<endl;
//     }
// return 0;
// }


// Pattern 13 Inverted Triangle Pattern
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,i,j;
//     cout<<"Enter a number:";
//     cin>>n;
        // Spaces
//     for(i=0;i<n;i++){
//         for(j=0;j<i;j++){
//             cout<<" ";
//         }
        //number 
//     for(j=0;j<n-i;j++){
//         cout<<i+1<<" ";
//     }
//     cout<<endl;
//     }
// return 0;
// }


// Pattern 14 Pyramid Pattern
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number:";
//     cin>>n;
//     //spaces
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-i-1;j++){
//             cout<<" ";
//         }
//     //num1
//         for(int j=1;j<=i+1;j++){
//             cout<<j;
//         }
//     //num2
//     for(int j=i;j>=1;j--){
//         cout<<j;
//     }
//     cout<<endl;
//     }
// return 0;
// }