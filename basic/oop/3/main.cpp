#include <iostream>
#include <string>

using namespace std;

class Player
{
private:
   std::string name;
   int health;
   int xp;

public:
    // some public functions
    std::string get_name(){return name;}
    int get_health(){return health;}
    int get_xp(){return xp;}

    // define constructor
    Player(std::string name_val="None", int health_val=0, int xp_val=0);
    // copy constructor - shallow copy
    Player(const Player &source);
    // Deconstructor
    ~Player(){std::cout << "Destructor called for: " << name << std::endl;}
};


// define constructor outside class 
Player::Player(std::string name_val, int health_val, int xp_val) 
    : name{name_val}, health{health_val}, xp{xp_val} {
            cout << "Three-args constructor" << endl;

}

Player::Player(const Player &source)
    // you can also use delegation
    :Player(source.name,source.health,source.xp)
    // :name{source.name}, health{source.health}, xp(source.xp)
    {
        std::cout << "Copy constructor - made copy of:" << source.name << std::endl;
    }

void display_player(Player p){
    std::cout << "Name: " << p.get_name() << std::endl;
    std::cout << "Health: " << p.get_health() << std::endl;
    std::cout << "XP: " << p.get_xp() << std::endl;
}

int main() {
    
    Player empty;
    // shallow copy. If object is defined as pointer, object will be crashed since 
    // the data is pointer and memory address will be lost
    display_player(empty);
    Player frank {"Frank"};
    Player villain {"Villain", 100, 55};
    
    return 0;
}