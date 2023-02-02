#include "Enemy.h"
#include <stdio.h>

int main()
{
	Enemy enemy1;
	Enemy enemy2;
	Enemy enemy3;

	enemy1.Draw();
	enemy2.Draw();
	enemy3.Draw();
	printf("----\n");

	enemy2.SetDeath();
	printf("“Gˆê‘ÌŒ‚”j\n");

	enemy1.Draw();
	enemy2.Draw();
	enemy3.Draw();
	printf("----\n");

	enemy1.Updata();
	enemy2.Updata();
	enemy3.Updata();
	printf("----\n");
	
	

	enemy1.Draw();
	enemy2.Draw();
	enemy3.Draw();
	printf("----\n");

	return 0;
}