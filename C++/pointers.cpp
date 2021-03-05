#include <iostream>

using namespace std;

int main(){
    int score {10};
    int *int_ptr {nullptr};
    int_ptr = &score;
    int num {10};
    cout<< "Value of num is : "<<num<<endl;
    cout<<"Sixe of the num : "<<sizeof num<<endl;
    cout<<"Address of num is : "<<&num<<endl;

    cout<<"Adress of ptr is : "<<&int_ptr<<endl;

}