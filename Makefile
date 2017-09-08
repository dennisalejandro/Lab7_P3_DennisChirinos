frac:	main.cpp Soldado.cpp Arquero.cpp Coraza.cpp Asesino.cpp Squad.cpp
	g++ -std=c++11 main.cpp Soldado.cpp Arquero.cpp Coraza.cpp Asesino.cpp Squad.cpp

main.o:	main.cpp
	g++ main.cpp

Arquero.o:	Arquero.cpp
	g++ Arquero.cpp

Coraza.o:	Coraza.cpp
	g++ Coraza.cpp

Soldado.o:	Soldado.cpp
	g++ Soldado.cpp

clean:
	rm *.o frac
