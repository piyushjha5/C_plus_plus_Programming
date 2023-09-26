//Multiple Language Robot

#include<iostream>
using namespace std;
int main(){
    
    char button;
    cout<<"Enter a character "<<endl;
    cin>>button;

    switch (button)
    {
    case 'a':
    cout<<"Namaste "<<endl;
    break;
    case 'b':
    cout<<"Ram Ram "<<endl;
    break;
    case 'c':
    cout<<"Jai Mata di "<<endl;
    break;

    default:
    cout<<"don't know any other language "<<endl;
    break;
  
    }
    
    return 0;
}