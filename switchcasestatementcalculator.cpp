//Arithmatic Calculation

#include<iostream>
using namespace std;
int main(){
    
    int n1,n2;
    cout<<"Enter two numbers "<<endl;
    cin>>n1>>n2;

    char op;
    cout<<"Enter a operator "<<endl;
    cin>>op;

    switch (op)
    {
    case '+':
      cout<<n1+n2<<endl;
      break;  
    case '-':
      cout<<n1-n2<<endl;
      break;
    case '*':
      cout<<n1*n2<<endl;
      break;
    case '/':
      cout<<(float)n1/n2<<endl;
      break;

    default:
      cout<<"Invalid operator "<<endl;
      break;

    }
    
    return 0;
}