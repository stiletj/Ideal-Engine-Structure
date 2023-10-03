#pragma once

#include <vector>

#include "ModelLoader.h"
#include "TextureLoader.h"
#include "Physics.h"
#include "Entity.h"

class ObjectManager
{
public:
	ObjectManager();
	~ObjectManager();

	void AddEntity(std::string objectFile, std::string textureFile);			//creates new entity, initialises it with objectFileand textureFile (can both be nullptr), adds new entity to entities vector


private:
	std::vector<Entity> entities;												//vector of all entities
};

