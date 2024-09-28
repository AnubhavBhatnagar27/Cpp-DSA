// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int a=4,b=8;
//     cout<<(a&b)<<endl;
// return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int a=4,b=8;
//     cout<<(a|b)<<endl;
// return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int a=3,b=7;
//     cout<<(a^b)<<endl;
// return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int a=3,b=7;
//     cout<<(a|b)<<endl;
// return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int a=3,b=7;
//     cout<<(a&b)<<endl;
// return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int a=3,b=7;
//     cout<<(a<<2)<<endl;
// return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int a=3,b=7;
//     cout<<(b>>2)<<endl;
// return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int a=6,b=10;
//     cout<<(a&b)<<endl;
//     cout<<(a|b)<<endl;
//     cout<<(a^b);
// return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int a=10,b=2,c=1;
//     cout<<(a<<b)<<endl;
//     cout<<(a>>c);
// return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     unsigned int x=-10;
//     cout<<sizeof(int)<<endl;
//     cout<<sizeof(long int)<<endl;
//     cout<<sizeof(short int)<<endl;
//     cout<<sizeof(long long)<<endl;
//     cout<<x<<endl;
// return 0;
// }

// Figure out how to find if a number is power of 2 without any loop.
// #include<bits/stdc++.h>
// using namespace std;
// bool isPowerOfTwo(int n) {
//     return n > 0 && (n & (n - 1)) == 0;
// }
// int main(){
//     int n;
//     cout<<"Enter a number:";
//     cin>>n;
//     if (isPowerOfTwo(n)) {
//         cout << n << " is a power of 2." << std::endl;
//     } else {
//         cout << n << " is not a power of 2." << std::endl;
//     }
    
// return 0;
// }

// WAF to reverse an integer n
#include<bits/stdc++.h>
using namespace std;
int rev(int n){
    int t=0,rev=0;
    while(n!=0){
        t=n%10;
        n/=10;
        rev=rev*10+t;
    }
    return rev;
}
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    cout<<"Reversed Number is:"<<rev(n)<<endl;

    
return 0;
}