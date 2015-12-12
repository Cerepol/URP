#include "main.hpp"
#include "libtcod.hpp"
#include "Engine.hpp"

// Hide the console window
//#pragma comment(linker, "/SUBSYSTEM:windows /ENTRY:mainCRTStartup")

Engine engine;

int main() {
	while (!TCODConsole::isWindowClosed()) {
		engine.update();
		engine.render();
		TCODConsole::flush();
	}
	return 0;
}