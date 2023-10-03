#pragma once

#include "TextureLoader.h"
#include "ModelLoader.h"

class Entity
{
public:
	Entity();
	Entity(std::string objectFile, std::string textureFile);		//calls loadObject and loadTexture
	Entity(Entity &ent);
	~Entity();

	void loadObject(std::string objectFile);						//loads object data into entity
	void loadTexture(std::string textureFile);						//loads texture data into entity

private:
	ModelLoader object;
	TextureLoader texture;

	Vector3 position;

	std::vector<Vector3> v;
	std::vector<Vector2> vt;
	std::vector<Vector3> vn;
	std::vector<FaceGroup> faces;
};

