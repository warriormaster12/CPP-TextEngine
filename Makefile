Game: *.cpp
	g++ -o Game.runner *.cpp Components/*.cpp
clean: 
	rm Game.o
