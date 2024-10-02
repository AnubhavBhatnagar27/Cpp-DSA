// Brute force to find all the sub arrays
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n=5;
//     int arr[5]={1,2,3,4,5};
//     for(int st=0;st<n;st++){
//         for(int end=st;end<n;end++){
//             for(int i=st;i<=end;i++){
//                 cout<<arr[i];
//             }
//             cout<<" ";
//         }
//         cout<<endl;
//     }
// return 0;
// }

// Maximum Sum array
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n=5;
//     int arr[5]={1,2,3,4,5};
//     int maxSum=INT_MIN;
//     for(int st=0;st<n;st++){
//         int curSum=0;
//         for(int end=st;end<n;end++){
//             curSum+=arr[end];
//             maxSum=max(curSum,maxSum);
//         }
//     }
//     cout<<"Maximum sub array sum is: "<< maxSum<<endl;
// return 0;
// }

// Kadanes Algorithm (Most Optimised)
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int curSum=0;
//     int maxSum=INT_MIN;
//     int n=7;
//     int arr[7]={3,-4,5,4,-1,7,-8};
//     for(int i=0;i<n;i++){
//         curSum+=arr[i];
//         maxSum=max(curSum,maxSum);
//         if(curSum<0) curSum=0;

//     }
// return 0;
// }