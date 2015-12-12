#ifndef __MAP_H_INCLUDED__
#define __MAP_H_INCLUDED__

//Dependencies

#include "libtcod.hpp"
#include "Engine.hpp"

struct Tile {
	bool explored; // can we walk through this tile?
	Tile() : explored(false) {}
};

class Map {
public:
	int width, height;

	Map(int width, int height);
	~Map();

	bool isWall(int x, int y) const;
	bool canWalk(int x, int y) const;
	bool isInFov(int x, int y) const;
	bool isExplored(int x, int y) const;
	void computeFov();
	void render() const;

	void addMonster(int x, int y);
protected:
	Tile *tiles;
	TCODMap *map;
	friend class BspListener;

	void dig(int x1, int y1, int x2, int y2);
	void createRoom(bool first, int x1, int y1, int x2, int y2);
	//void setWall(int x, int y);
};

#endif //__MAP_H_INCLUDED__
