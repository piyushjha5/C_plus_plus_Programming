//Given an integer N. Your task is to check if the integer is greater than, less than or equal to 5.

#include<iostream>
using namespace std;
int main(){
    
     int n;
     cout<<"Enter an Integer"<<endl;
     cin>>n;

     if(n>5){
         cout<<"Greater than 5"<<endl;
     }
     else if(n<5){
         cout<<"Lesser than 5"<<endl;
     }
     else{
         cout<<"Equal to 5"<<endl;
     }

    return 0;
}
