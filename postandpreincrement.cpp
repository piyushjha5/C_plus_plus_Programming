#include<iostream>
using namespace std;
int main(){
    
    int i=2, j=3;
    int m = i++ - j-- + --i + ++j;
            //2   //3   //2   //3
    cout<<i<<endl;//2
    cout<<j<<endl;//3
    cout<<m<<endl;//6

    return 0;
}