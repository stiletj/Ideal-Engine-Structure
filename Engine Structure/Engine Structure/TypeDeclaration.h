#pragma once

#include <array>

typedef double Point3[3];
typedef std::array<double, 3> Vector3;
typedef std::array<double, 2> Vector2;
typedef std::array<bool, 4> KeyTrack;

typedef struct FaceGroup
{
	int v, vt, vn;
}FaceGroup;