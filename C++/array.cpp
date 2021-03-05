#include <iostream>
using namespace std;
#include <vector>

int main(){

    int test_scores [5] {1,2,3,4,5};
    int movie_rating [3][4];
    cout<<movie_rating[2][3]<<endl;
    cout<<"First score :"<<test_scores[0]<<endl;
    vector <char> vowels ('a');
    vector <int> numbers (5);
    numbers.push_back(4);
    cout<<numbers[0]<<endl;

    vector <int> num1;
    vector <int> num2;
    num1.push_back(10);
    num1.push_back(20);
    cout<<num1.at(0)<<endl;
    cout<<num1.at(1)<<endl;

    num2.push_back(100);
    num2.push_back(200);
    cout<<num2.at(0)<<endl;
    cout<<num2.at(1)<<endl;

    vector<vector<int> > vector_2d;
    vector_2d.push_back(num1);
    vector_2d.push_back(num2);
    cout<<vector_2d.at(0).at(1)<<endl;
    cout<<vector_2d.at(1).at(1)<<endl;
    cout<<vector_2d.at(1).at(0)<<endl;
    cout<<vector_2d.at(0).at(0)<<endl;        

    return 0;

}
