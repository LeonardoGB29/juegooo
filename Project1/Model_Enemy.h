#pragma once
#include <string>
#include <vector>
#include "Model_Character.h"

class Model_Enemy : public Model_Character {
private:
    int vel;
public:
    Model_Enemy(int, float , float, int, int);
    int getVel();
    void setVel(int);
};
