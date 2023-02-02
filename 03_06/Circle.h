#pragma once
#include"IShape.h"

class Circle :public IShape
{
public:
	void draw() override;
	void size() override;
};
