#include "Enemy.h"
#include <iostream>

using namespace std;

int main()
{
    Enemy* r1, * r2, * r3;
    r1 = new Enemy();
    r1->entriy();
    Enemy::EnemyNum();
    r2 = new Enemy();
    r3 = new Enemy();
    r2->entriy();
    r3->entriy();
    delete r1;
    delete r2;
    Enemy::EnemyNum();
    delete r3;
    Enemy::EnemyNum();
    return 0;
}