#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            if(j==1||j==5||i==j&&j<=3||j==6-i&&j>=3){
                cout<<"*";
				} 
			else{
                cout<<" "; 
            }
        }
        cout<<endl;
    }
    return 0;
}
