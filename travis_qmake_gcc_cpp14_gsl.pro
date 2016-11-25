SOURCES += main.cpp

include(gsl.pri)

# Compile with high warning levels, a warning is an error
QMAKE_CXXFLAGS += -Wall -Wextra -Weffc++ -Werror

# C++14
QMAKE_CXX = g++-5
QMAKE_LINK = g++-5
QMAKE_CC = gcc-5
QMAKE_CXXFLAGS += -std=c++14
