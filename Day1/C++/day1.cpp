#include<iostream>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif


int n;
cin>>n;
for(int i = 1; i<=n; i++){
    if((i%3 == 0) & (i%5 == 0)){
        cout<<"FizzBuzz"<<endl;
    }
    else if(i%3 == 0){
        cout<<"Fizz"<<endl;
    }
    else if(i%5 == 0){
        cout<<"Buzz"<<endl;
    }
    
    else{
        cout<<i<<endl;
    }
}
return 0;
}