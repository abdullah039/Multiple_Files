#include<iostream>
using namespace std;
int main(){
    int x=5;
    int y=4;
    int s;
    cout<<"x + y = "<<x+y<<endl;
    cout<<"x * y = "<<x*y<<endl;
    cout<<"x / y = "<<x/y<<endl;
    s=((x+y)+(x*y)+(x/y));
    cout<<s;
    cout<<endl;
    cout<<"The sum is divisible by 2 is: "<<s/2<<endl;
}