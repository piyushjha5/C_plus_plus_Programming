#include<iostream>
using namespace std;
int main(){
    
    int i;
    for(i=1; i<=5; i++){
        if(i==4){
            continue;
        }
            cout<<i<<endl;
    }
    return 0;
}