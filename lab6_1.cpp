#include<iostream>
using namespace std;

int main(){
    cout << "Enter an integer: ";
    cout << "#Even numbers = ";
    cout << "#Odd numbers = ";
    return 0;
}
#include<iostream>
using namespace std;

int main(){
    int n,cnt_odd,cnt_even;
    
while(true){
    cout << "Enter an integer: ";
    cin >> n;
    if(n == 0) break;
    
    if(n%2==0) ++cnt_even;
    else ++cnt_odd;
    
    }
    cout << "#Even numbers = " << cnt_even << "\n";
    cout << "#Odd numbers = " << cnt_odd;
    return 0;
}