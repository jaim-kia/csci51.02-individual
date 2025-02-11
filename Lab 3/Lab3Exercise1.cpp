#include<iostream>
#include<string>
using namespace std;

struct Persona {
    int id, lvl;
    string name, arcana, weakness, strengths;

    Persona(int id, string name, int lvl, string arcana, string weakness, string strengths) {
        this->id = id;
        this->name = name;
        this->lvl = lvl;
        this->arcana = arcana;
        this->weakness = weakness;
        this->strengths = strengths;
    }

    void get_all_stats() {
        cout << "Persona: " << id << ", " << name << endl;
        cout << "Stats: " << endl;
        cout << "Level: " << lvl << endl;
        cout << "Arcana: " << arcana << endl;
        cout << "Weakness: " << weakness << endl;
        cout << "Strengths: " << strengths << endl;
    }

    ~Persona() {
        cout << "Released Persona: " << id << ", " << name << endl;
    }


};

int main() {
    Persona JackFrost(1, "JackFrost", 12, "Magician", "Fire", "Ice");
    Persona Izanagi(2, "Izanagi", 20, "Fool", "Wind", "Lightning");
    
    JackFrost.get_all_stats();
    cout << endl;
    Izanagi.get_all_stats();
    cout << endl;

    cout << "Izanagi's Weakness: " << Izanagi.weakness << endl;
    return 0;
}

// Structs act similar to Java's objects or classes because they can contain local data that needs to be instantiated
// for every instance of that object (or in this case struct). Just like Java, you can create a constructor (though in
// this case it is not needed) that runs when it gets instantiated, in my case it is the default stats. Just like java
// you can also have methods to be called outside the struct as seen in my main method. Lastly, since there is no garbage
// collection in c++ structs are highly incentivised to have deconstructors that run when it is not needed anymore
// to avoid memory leaks. This is different to Java where it already has it built in.