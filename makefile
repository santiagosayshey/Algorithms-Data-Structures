main:\
	main.cpp \
	Player.cpp \
	Computer.cpp \
	Referee.cpp

	g++ \
	main.cpp \
	Player.cpp \
	Computer.cpp \
	Referee.cpp \
	-std=c++11 \
	-o main.out

	clear

	./main.out

