#ifndef GAME_H
#define GAME_H

#include <Debug.h>

#include <iostream>
#include <GL/glew.h>
#include <GL/wglew.h>
#include <SFML/Window.hpp>
#include <SFML/OpenGL.hpp>

#include <Vector3.h>
#include <Matrix3.h>

#include "MyMatrix3.h"
#include "MyVector3D.h"

using namespace std;
using namespace sf;
using namespace gpp;

class Game
{
public:
	Game();
	~Game();
	void run();
private:
	MyVector3D vert[8];

	Window window;
	bool isRunning = false;
	void initialize();
	void update();
	void render();
	void unload();

	void initVerts();
	void setPoints();
	void setColours();

	Clock clock;
	Time elapsed;

	float rotationAngle = 0.0f;
};

#endif