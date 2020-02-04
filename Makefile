CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17

TARGET = test
SOURCES = $(wildcard *.cpp)

.PHONY: all
all: $(TARGET)

.PHONY: clean
clean:
	rm -f $(TARGET)

$(TARGET): $(SOURCES)
	$(CXX) $(CXXFLAGS) -o $@ $^
