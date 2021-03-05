#include <iostream>
using namespace std;


const double pi {3.143};

double cal_area_of_circle(double radius){
    return pi*radius*radius;
}

void area_circle(){
    double radius {0};
    cout<<"Enter the radius"<<endl;
    cin>>radius;
    cout<<"The area of the circle is : "<< cal_area_of_circle(radius)<<endl;

}
void volume_cylinder(){
    double radius {0};
    double height {0};
    cout<<"Enter the height of the cylinder"<<endl;
    cin>>height;
    cout<<"Enter the radius of the cylinder"<<endl;
    cin>>radius;
    cout<<"The volume of the cylinder ins : "<<cal_area_of_circle(radius)*height<<endl;
}
int main(){
    area_circle();
    volume_cylinder();
}