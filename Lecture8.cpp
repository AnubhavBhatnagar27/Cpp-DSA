// Smallest/Largest in an Array
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[5]={3,4,1,2,5};
//     for(int i=0;i<5;i++){
//         for(int j=i+1;j<5;j++){
//             if(arr[i]>arr[j]){
//                 int t=arr[j];
//                 arr[j]=arr[i];
//                 arr[i]=t;
//             }
//         }
//     }
//     cout<<"Smallest: "<<arr[0]<<endl;
//     cout<<"Largest: "<<arr[4]<<endl;
// return 0;
// }


// Linear Search
// Array and a target value to return
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[]={4,2,7,8,1,2,5};
//     int t;
//     cout<<"Enter a target value: ";
//     cin>>t;
//     int size=sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<size;i++){
//         if(arr[i]==t){
//         cout<<"The target value is found at the index: "<<i<<endl;
//         break;
//         }
//     }
// return 0;
// }