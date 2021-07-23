#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    if (a%2)
    {
        cout<<"the number is odd\n";
        /* code */
    }
    else if(a==0){
        cout<<"the number is zero\n";
    }
    else cout<<"the number is even\n";
    

    return 0;
}