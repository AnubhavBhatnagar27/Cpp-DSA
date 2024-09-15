// Sum of all odd numbers from 1 to n
#include<iostream>
using namespace std;
int main(){
    int i=1,n,sum=0;
    cout<<"Enter a number: ";
    cin>>n;
    while(i<=n){
        while(i%2!=0){
            sum=sum+i;
            cout<<i<<" ";
            break;
        }
        ++i;
    }
    cout<<endl;
    cout<<"The sum of all odd numbers from 1 to n is: "<<sum;
return 0;
}