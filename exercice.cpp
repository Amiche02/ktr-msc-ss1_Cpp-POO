#include <string>
#include <iostream>
using namespace std;

//Step 01

class Character {
protected:
    string m_name;
    const string m_RpgClass;
    int m_life;
    int m_agility;
    int m_strength;
    int m_wit;

public:
    Character(const string& name, const string& RpgClass)
        : m_name(name), m_RpgClass(RpgClass), m_life(50), m_agility(2), m_strength(2), m_wit(2) {}

    void attack(const string& weapon) const {
        cout << m_name << ": Rrrrrrrr..." << endl;
    }

    string getName() {
        return m_name;
    }

    string getRpgClass() const {
        return m_RpgClass;
    }

    int getLife() {
        return m_life;
    }

    int getAgility() {
        return m_agility;
    }

    int getStrength() {
        return m_strength;
    }

    int getWit() {
        return m_wit;
    }
    
    void unsheathe() const {
        std::cout << m_name << ": unsheathes his weapon." << std::endl;
    }
};


//Step 02
class Warrior : public Character {
public:
    Warrior(const string& name) : Character(name, "Warrior") {
        cout << m_name << ": My name will go down in history!" << endl;
        m_life = 100;
        m_strength = 10;
        m_agility = 8;
        m_wit = 3;
    }

    void attack(const string& weapon) const {
        cout << m_name << ": Rrrrrrrr..." << endl;
        if (weapon == "hammer" || weapon == "sword") {
            cout << m_name << ": I'll crush you with my " << weapon << "!" << endl;
        }
        else {
            cout << m_name << ": I refuse to fight with my bare hands." << endl;
        }
    }
};

class Mage : public Character {
public:
    Mage(const string& name) : Character(name, "Mage") {
        cout << m_name << ": May the gods be with me." << endl;
        m_life = 70;
        m_strength = 3;
        m_agility = 10;
        m_wit = 10;
    }

    void attack(const string& weapon) const {
        cout << m_name << ": Rrrrrrrr..." << endl;
        if (weapon == "magic" || weapon == "wand") {
            cout << m_name << ": Feel the power of my " << weapon << "!" << endl;
        }
        else {
            cout << m_name << ": A " << weapon << "?? What should I do with this?!" << endl;
        }
    }
};

//Step 03





int main() {
	//Step 01
    Character perso("Amiche", "Character");
    cout << perso.getName() << endl;
    cout << perso.getLife() << endl;
    cout << perso.getAgility() << endl;
    cout << perso.getStrength() << endl;
    cout << perso.getWit() << endl;
    cout << perso.getRpgClass() << endl;
    perso.attack("my weapon");
    
    //Step 02
    Warrior warrior("Jean-Luc");
    Mage mage("Robert");

    warrior.attack("hammer");
    mage.attack("magic");

	//Step 03

    
    return 0;
}

