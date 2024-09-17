// Decimal to binary Conversion
#include<bits/stdc++.h>
using namespace std;
int bintodec(int num){
    int ans=0,rem=0,pow=1;
    while(num>0){
        rem=num%2;
        num=num/2;
        ans+=(rem*pow);
        pow=pow*10;
    }
    return ans;
}
int main(){
    int num;
    cout<<"Enter a number to converted from decimal to binary: ";
    cin>>num;
    cout<<bintodec(num)<<"  (Binary form of the given number)"<<endl;
    cout<<"--Binary form of every number from 1 to given number--"<<endl;
    for(int i=1;i<=num;i++){
        cout<<bintodec(i)<<endl;
    }
return 0;
}