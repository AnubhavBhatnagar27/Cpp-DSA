// Decimal to binary Conversion
// #include<bits/stdc++.h>
// using namespace std;
// int bintodec(int num){
//     int ans=0,rem=0,pow=1;
//     while(num>0){
//         rem=num%2;
//         num=num/2;
//         ans+=(rem*pow);
//         pow=pow*10;
//     }
//     return ans;
// }
// int main(){
//     int num;
//     cout<<"Enter a number to converted from decimal to binary: ";
//     cin>>num;
//     cout<<bintodec(num)<<"  (Binary form of the given number)"<<endl;
//     cout<<"--Binary form of every number from 1 to given number--"<<endl;
//     for(int i=1;i<=num;i++){
//         cout<<bintodec(i)<<endl;
//     }
// return 0;
// }


// Binary to decimal
// #include<bits/stdc++.h>
// using namespace std;
// int bintodec(int num){
//     int ans=0,pow=1,rem=0;
//     while(num>0){
//     rem=num%10;
//     ans+=rem*pow;
//     num=num/10;
//     pow=pow*2;
//     }
// return ans;
// }
// int main(){
//     int num;
//     cout<<"Enter the binary to be converted to decimal: ";
//     cin>>num;
//     cout<<bintodec(num);
// return 0;
// }


// Convert -8 to binary and reverse
#include<bits/stdc++.h>
using namespace std;
int bintodec(int num){
    int ans,rem,pow;
    while(num>0){
        rem=num%2;
        num=num/2;
        ans+=(rem*pow);
        pow=pow*10; 
    }
    return ans;
}
int dectobin(int num){
    int ans,rem,pow;
    while(num>0){
        rem=num%2;
        ans+=(rem*pow);
        pow=pow*2; 
    }
    return ans;
}
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<bintodec(num)<<endl;
    cout<<dectobin(num);
return 0;
}