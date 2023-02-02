#pragma once
class Enemy
{
public:
	Enemy();
	~Enemy();

	bool IsAlive();
	void SetDeath();

	void Updata();
	void Draw();

public:
	static bool isAllAlive;
private:
	bool isAlive;

};
