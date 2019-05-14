############################################
# Name: makefile
# Author: Nathan Johnson
# Date: 04.06.2019
# Description: makefile for Lab 1
# Credits: Used info from Lecture: Makefiles
# ##########################################


CXX = g++
CXXFLAGS = -std=c++0x
CXXFLAGS += -Wall
CXXFLAGS += -Werror
CXXFLAGS += -g
LDFLAGS = -lboost_date_time

OBJS = matrixCalc.o getInt.o determinant.o readMatrix.o

SRCS = matrixCalc.cpp getInt.cpp determinant.cpp readMatrix.cpp

HEADERS =

#target: dependencies
#	rule to build
#

matrixCalc.exe: ${OBJS} ${HEADERS}
	${CXX} ${LDFLAGS} ${OBJS} -o matrixCalc.exe

${OBJS}: ${SRCS}
	${CXX} ${CXXFLAGS} -c $(@:.o=.cpp)

clean:
	rm *.o *.exe
