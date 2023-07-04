#include <string>
#include <iostream>
using namespace std;


class Character {
protected:
    string m_name;
    const string m_RpgClass;
    int m_life;
    int m_agility;
    int m_strength;
    int m_wit;

public:

    Character(const string& name, const string& RpgClass) : m_name(name), m_RpgClass(RpgClass),
                                                           m_life(50), m_agility(2), m_strength(2), m_wit(2) {}

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

    void setName(const string& name) {
        m_name = name;
    }

    void setLife(int life) {
        m_life = life;
    }

    void setAgility(int agility) {
        m_agility = agility;
    }

    void setStrength(int strength) {
        m_strength = strength;
    }

    void setWit(int wit) {
        m_wit = wit;
    }
    
    void unsheathe() const {
        std::cout << m_name << ": unsheathes his weapon." << std::endl;
    }
};


class Warrior: public Character{
public:
	Warrior(const string& name):Character(name, "Warrior"){
		cout << m_name << ": My name will go down in history !" << endl;
		m_life = 100;
		m_strength = 10;
		m_agility = 8;
		m_wit= 3;
	}
	void attack(string weapon) const{
		
		if(weapon =="hammer" || weapon=="sword"){
			cout << m_name << ": Rrrrrrr...." << endl;
			cout << m_name << ": I'll crush you with my "<< weapon << "!" << endl;
		}
		else{
			cout << "I can't attack" << endl;
		}
	}
	
	void moveRight() const {
		cout << m_name << ": moves right like a bad boy" << endl;
	}
	
	void moveLeft() const {
		cout << m_name << ": moves left like a bad boy" << endl;
	}
	
	void moveForward() const {
		cout << m_name << ": moves forward like a bad boy" << endl;
	}
	
	void moveBack() const {
		cout << m_name << ": moves back like a bad boy" << endl;
	}
};

class Mage: public Character{
public:
	Mage(const string& name):Character(name, "Mage"){
		cout << m_name << ": May the gods be with me." << endl;
		m_life = 70;
		m_strength = 3;
		m_agility = 10;
		m_wit= 10;
	}
	void attack(string weapon) const{
		
		if(weapon =="magic" || weapon=="wand"){
			cout << m_name << ": Rrrrrrr...." << endl;
			cout << m_name << ": Feel the power of my "<< weapon << "!" << endl;
		}
		else{
			cout << "I can't attack" << endl;
		}
	}
	
	void moveRight() const {
		cout << m_name << ": moves right furtively" << endl;
	}
	
	void moveLeft() const {
		cout << m_name << ": moves left furtively" << endl;
	}
	
	void moveForward() const {
		cout << m_name << ": moves forward furtively" << endl;
	}
	
	void moveBack() const {
		cout << m_name << ": moves back furtively" << endl;
	}
};

class Movable: public Character{
public:
	Movable(const string& name, const string& RpgClass):Character(name, RpgClass){}
	
	void moveRight() const {
		cout << m_name << ": moves right" << endl;
	}
	
	void moveLeft() const {
		cout << m_name << ": moves left" << endl;
	}
	
	void moveForward() const {
		cout << m_name << ": moves forward" << endl;
	}
	
	void moveBack() const {
		cout << m_name << ": moves back" << endl;
	}
};

int main() {
    //Character perso("Stephane-Amiche", "Character");
    //cout << perso.getName() << endl;
    //cout << perso.getLife() << endl;
    //cout << perso.getAgility() << endl;
    //cout << perso.getStrength() << endl;
    //cout << perso.getWit() << endl;
    //cout << perso.getRpgClass() << endl;
    //perso.attack("my weapon");
    
	//Warrior warrior("Jean-Luc");
	//Mage mage("Robert");
	
	//warrior.attack("hammer");
	//mage.attack("magic");
	
	//Movable movable("Jean", "Warrior");
	//movable.moveRight();
	
	Warrior warrior("Jean-Luc");
	Mage mage("Robert");
	
	    warrior.moveRight();
	    warrior.moveLeft();
	    warrior.moveBack();
	    warrior.moveForward();
	    mage.moveRight();
	    mage.moveLeft();
	    mage.moveBack();
	    mage.moveForward();

	
    return 0;
}
