build: external main
	g++ -Wall -g -std=c++11 -o out/o out/obj/*.o

external:
	g++ -Wall -c -std=c++11 -o out/obj/external.o external.cpp \
	# && g++ -Wall -c -std=c++11 -o out/obj/external_a.o external_a.cpp

main:
	g++ -Wall -c -std=c++11 -o out/obj/main.o main.cpp

clear:
	rm out/obj/*.o