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

// Reverse an array using two pointer
// #include<bits/stdc++.h>
// using namespace std;
// void reverseArray(int arr[],int sz){
//     int start=0,end=sz-1;
//     while(start<end){
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     }
// }
// int main(){
//     int arr[]={4,2,7,8,1,2,5};
//     int sz=7;
//     reverseArray(arr,sz);
//     for(int i=0;i<sz;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// return 0;
// }


// WAF to calculate sum and product of all numbers in an array
// #include<bits/stdc++.h>
// using namespace std;
// void cal(int arr[],int size){
//     int sum=0,mul=1;
//     for(int i=0;i<size;i++){
//         sum+=arr[i];
//     }
//     for(int i=0;i<size;i++){
//         mul*=arr[i];
//     }
//     cout<<"The sum is: "<<sum<<endl;
//     cout<<"The product is: "<<mul<<endl;
// }
// int main(){
//     int arr[]={4,1,2,3,7,5};
//     int size=sizeof(arr)/sizeof(arr[0]);
//     cal(arr,size);
// return 0;
// }
// WAF to swap the max and min number of an array.
// #include<bits/stdc++.h>
// using namespace std;
// void swaping(int arr[],int size){
//     int max_index=0,min_index=0;
//     for(int i=0;i<size;i++){
//         if(arr[i]>arr[max_index]){
//             max_index=i;
//         }
//         if(arr[i]<arr[min_index]){
//             min_index=i;
//         }
//     }
//     swap(arr[max_index],arr[min_index]);
// }
// int main(){
//     int arr[]={4,1,2,3,5,7,5,6,9};
//     int size=sizeof(arr)/sizeof(arr[0]);
//     swaping(arr,size);
//     cout<<"Array after swapping maximum and minimum"<<endl;
//     for(int a:arr){
//         cout<<a<<" ";
//     }
//     cout<<endl;
// return 0;
// }
// WAF to print all the unique values in an array
// #include<bits/stdc++.h>
// using namespace std;
// void unique(int arr[],int size){
//     bool bl;
//     for(int i=0;i<size;i++){
//         bl=true;
//         for(int j=0;j<size;j++){
//             if(i!=j && arr[i]==arr[j]){
//                 bl=false;
//                 break;
//             }
//         }
//     if(bl){
//         cout<<"The unique value is: "<<arr[i]<<endl;
//     }
//     }
//     cout<<endl;
// }
// int main(){
//     int arr[]={1,2,3,4,1,2,3,9,6,8,5,4,5,6,8,6,5,1,3,6,13,54,79,15548};
//     int size=sizeof(arr)/sizeof(arr[0]);
//     unique(arr,size);
// return 0;
// }

// WAF to print intersection of 2 Arrays
#include<bits/stdc++.h>
using namespace std;
void intr(int arr1[],int size1,int arr2[],int size2){
    bool bl;
    for(int i=0;i<size1;i++){
        bl=false;
        for(int j=0;j<size2;j++){
            if(arr1[i]==arr2[j]){
                bl=true;
                break;
            }
        }
    if(bl){
        cout<<"The Intersection value is: "<<arr1[i]<<endl;
    }
    }
    cout<<endl;
}
int main(){
    int arr1[]={1,2,3,4,5};
    int arr2[]={1,2,3};
    int size1=sizeof(arr1)/sizeof(arr1[0]);
    int size2=sizeof(arr2)/sizeof(arr2[0]);
    intr(arr1,size1,arr2,size2);
return 0;
}