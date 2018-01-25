class Fighter
{
private:
    std::string name;

    int health;

    int damagePerAttack;

public:
    Fighter(std::string name, int health, int damagePerAttack)
    {
        this->name = name;
        this->health = health;
        this->damagePerAttack = damagePerAttack;
    }

    ~Fighter() { };

    std::string getName()
    {
        return name;
    }

    int getHealth()
    {
        return health;
    }

    int getDamagePerAttack()
    {
        return damagePerAttack;
    }

    void setHealth(int value)
    {
        health = value;
    }
};

std::string declareWinner(Fighter* fighter1, Fighter* fighter2, std::string firstAttacker)

{

    // Your code goes here. Have fun!

  Fighter* currentAttacker = fighter1->getName() == firstAttacker ? fighter1 : fighter2;

  Fighter* currentVictum = fighter1->getName() != firstAttacker ? fighter1 : fighter2;

  Fighter* tempWarrior;



  while( currentVictum->getHealth() > 0)

  {

     currentVictum->setHealth(currentVictum->getHealth() - currentAttacker->getDamagePerAttack());

     if(currentVictum->getHealth() <= 0) return currentAttacker->getName();


     tempWarrior = currentVictum;
     currentVictum = currentAttacker;

     currentAttacker = tempWarrior;



  }
    return currentAttacker->getName();

}
