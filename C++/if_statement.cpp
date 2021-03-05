#include <iostream>
using namespace std;

int main(){
    int num {0};
    const int min {10};
    const int max {100};
    cout<< "Enter a number between "<< min <<"and"<<max<<endl;
    cin>>num;
    if(num>=min){
        cout<<"\n=====if statement1======="<<endl;
        cout<<num<<"is greater than"<<min<<endl;
        int diff{num-min};
        cout<<num<<"is"<<diff<<"greater than"<<min<<endl;

    }
    if(num<=max){
        cout<<"\n=====if statement2======="<<endl;
        cout<<num<<"is less than or equal to"<<max<<endl;
    int i {0};

    for(i; i<=10; ++i){
    cout<<i<<endl;
    }
    }

    int scores [] {1,2,3,4,5};
    // Nested for-loops
    // for (int score : scores){
    //     cout<<score<<endl;
    // }
    return 0;
}
