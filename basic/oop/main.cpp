#include <iostream>
#include <string>
using namespace std;

class Player {
public:
    // if you set public, it's changable
    // attributes
    string name;
    int health;
    int xp;

    // method
    void talk(string text_to_say){cout<< name << " Says " << text_to_say << endl;};
    bool is_dead();
};

class Account {
public:
    // attributes
    string name;
    double balance;

    // methods
    bool deposit(double bal){balance += bal;cout<< balance << "in deposit"<<endl;};
    bool withdraw(double bal){balance -= bal;cout<< balance <<"in withdraw"<<endl;};
};

int main(){
    Account frank_account;
    frank_account.name = "Frank Account";
    frank_account.balance = 100;
    frank_account.deposit(300);
    frank_account.withdraw(200);
    frank_account.deposit(1);


    Player frank;
    frank.name = "frank"; 
    frank.health = 100;
    frank.xp = 12;
    frank.talk("Hi there");

    Player *enemy = new Player;
    (*enemy).name = "Enemy";
    (*enemy).health = 100;
    (*enemy).xp = 15;
    (*enemy).talk("I will destroy you");

    return 0;
}
