//Include Guard
#ifndef __ENGINE_H_INCLUDED__
#define __ENGINE_H_INCLUDED__

//Dependencies
#include "Map.hpp"
#include "Actor.hpp"

class Map;


class Engine {
public:

	enum GameStatus {
		STARTUP,
		IDLE,
		NEW_TURN,
		VICTORY,
		DEFEAT
	} gameStatus;

	TCODList<Actor *> actors;
	Map *map;
	Actor *player;
	int fovRadius;
	

	Engine();
	~Engine();
	void update();
	void render();

private:
	bool computeFov;
};

extern Engine engine;

#endif //__ENGINE_H_INCLUDED