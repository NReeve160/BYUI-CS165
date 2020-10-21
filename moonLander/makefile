###############################################################
# Program:
#     Milestone 07, Moon Lander
#     Brother Alvey, CS165
# Author:
#     Nathan Reeve
# Summary:
#     This is a version of the game moonLanader. It will allow
#     A user to control a small lunar lander and land it on
#     a platform randomly placed on randomly generated
#     terrain
# Above and Beyond
#     I did my best to make sure that all of the code was
#	  relevent and there wasn't excess writing to use up
#	  computer power. 
###############################################################


LFLAGS = -lglut -lGLU -lGL

###############################################################
# Build the main Moon Lander game
###############################################################
a.out: driver.o ground.o game.o uiInteract.o uiDraw.o point.o lander.o
	g++ driver.o ground.o game.o uiInteract.o uiDraw.o point.o lander.o $(LFLAGS)
	tar -j -cf moonLander.tar makefile *.h *.cpp

###############################################################
# Individual files
#    uiDraw.o      Draw polygons on the screen and do all OpenGL graphics
#    uiInteract.o  Handles input events
#    point.o       The position on the screen
#    ground.o      Handles the ground / world
#    game.o        Handles the game interaction
###############################################################
uiDraw.o: uiDraw.cpp uiDraw.h
	g++ -c uiDraw.cpp

uiInteract.o: uiInteract.cpp uiInteract.h
	g++ -c uiInteract.cpp

point.o: point.cpp point.h
	g++ -c point.cpp

ground.o: ground.cpp ground.h
	g++ -c ground.cpp

game.o: game.h game.cpp uiDraw.h uiInteract.h point.h ground.h
	g++ -c game.cpp

driver.o: driver.cpp game.h uiInteract.h
	g++ -c driver.cpp

#######################################################################
# ADD YOUR ADDITIONAL RULES HERE!
#
# Then, don't forget to add them to the dependecy list for a.out above.
#######################################################################
lander.o: lander.h moonLander.cpp point.h
	g++ -c moonLander.cpp

###############################################################
# General rules
###############################################################
clean:
	rm a.out *.o *.tar
