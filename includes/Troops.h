#include <string>

class Troop{
    public:
    int HealthPoints;
    int AttackSkill;
    int DefenseSkill;
    int Attack();
    int Defend();
    void LevelUp();
    int Range = 1;
    double Cost;
};


class Swordsman : public Troop {
    public:
    Swordsman(int);
    private:
    int Tech_Level = 0;
};

Swordsman::Swordsman (int Level) {
    HealthPoints = 1;
    AttackSkill = 1;
    DefenseSkill = 1;
    Level = 1;

}

class Archer : public Troop {


};


