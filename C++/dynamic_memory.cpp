#include <iostream>

using namespace std;

int main(){
    int *int_ptr {nullptr};
    int_ptr = new int;
    cout<<int_ptr<<endl;
    delete int_ptr;

    double *temp_ptr {nullptr};
    size_t size {0};
    cout<<"Enter the size of the temperature : "<<endl;
    cin>>size;
    temp_ptr = new double[size];
    delete [] temp_ptr;

    // arrays and pointers

    int scores[] {100, 95, 89};
    cout<<scores<<endl;
    cout<<&scores<<endl;
    int *score_ptr {scores};
    cout<<score_ptr[0]<<endl;
    cout<<*(score_ptr + 1)<<endl;

    cout<<endl;
    return 0;
    
}