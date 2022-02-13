#!/bin/sh

rm writefile > /dev/null 2>&1;


# needed for getting SFML to display stufff on WSL on Windows:
# export DISPLAY=:0


# compile with both Armadillo and Eigen:
#g++  main.cpp src/something.cpp headers/something.h \
g++ main.cpp src/neuron.cpp src/armastuff.cpp \
    -I include/ \
    -o writefile -std=c++2a -O2 \
    -larmadillo \
    -lsfml-graphics -lsfml-window -lsfml-system \
    -lglut -lGLU -lGL
    # -I /usr/include/eigen3/ \

# run:
./writefile ;

