#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player{
public:
    //attributes
    string name;
    int health;
    int xp;

    //methods
    void talk(string text_to_say) {cout << name <<"says"<< text_to_say<<endl;}
    bool is_dead();
};

class Account{
public:
    //attributes
    string name;
    double balance;

    //methods
    bool deposit(double bal) {balance += bal; cout <<"In deposit"<<endl;}
    bool withdraw(double bal) {balance -= bal; cout <<"In withdrawal"<<endl;}
};

int main(){
    Account frank_account;
    frank_account.balance = 5000.0;
    frank_account.deposit(1000.0);
    frank_account.withdraw(500.0);
    
    Account jim_account;

    Player frank;
    frank.name = "Frank";
    frank.health = 100;
    frank.xp = 12;
    frank.talk("Hi there");

    Player *enemy = new Player;
    (*enemy).name = "Enemy";
    (*enemy).health = 100;
    enemy->xp = 15;
    enemy->talk("I will destro you");

    Player hero;
    Player player[] {frank, hero};
    vector<Player> player_vec {frank};
    player_vec.push_back(hero);
    Player *enemy {nullptr};
    enemy = new Player;

    delete enemy;

    return 0;
}