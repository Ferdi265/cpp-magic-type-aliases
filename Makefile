CXX = g++
CXXSTD = -std=c++11
CXXFLAGS = -Wall -Wextra $(CXXSTD)

TARGET = test
SOURCES = $(wildcard *.cpp)

.PHONY: all
all: $(TARGET)

.PHONY: clean
clean:
	rm -f $(TARGET)

$(TARGET): $(SOURCES)
	$(CXX) $(CXXFLAGS) -o $@ $^
