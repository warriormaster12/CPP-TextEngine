Game: *.cpp
	g++ -o Game.o *.cpp Components/*.cpp
clean: 
	rm Game.o
