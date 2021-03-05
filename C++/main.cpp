#include <iostream>

using namespace std;

int main(){
    int room_width {0};
    int length_room {0};
    cout<<"Enter the width of the room";
    cin>>room_width;
    cout<<"Enter the length of the room";
    cin>>length_room;

    cout<<"The area of the room is"<<room_width*length_room<<"square feet."<<endl;
    return 0;

}
