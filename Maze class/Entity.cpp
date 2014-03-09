#include "Entity.h"
Entity::Entity()
{
	x=0;
	y=0;
	width=0;
	height=0;

}
int Entity::getX(void)
{
	return x;
}
int Entity::getY(void)
{
	return y;
}
int Entity::getWidth(void)
{
	return width;
}
int Entity::getHeight(void)
{
	return height;
}
void Entity::render()
{
}
void Entity::update()
{

}