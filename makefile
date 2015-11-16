
main.o : attributes.h color.h  main.h mainui.cpp
	g++ -Wall -c attributes.h color.h main.h mainui.cpp

