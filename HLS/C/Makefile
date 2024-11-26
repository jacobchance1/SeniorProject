CXX = g++
CXXFLAGS = -std=c++11 -Wall -O2
INCLUDES = -I../Headers
SRC = cnn.cc conv.cc pool.cc utils.cc activation.cc flatten.cc dense.cc main.cc \
      ../Headers/conv_weights.cc ../Headers/dense_weights.cc
OBJ = $(SRC:.cc=.o)
EXEC = custom_cnn

# Compile and link the program
$(EXEC): $(OBJ)
	$(CXX) $(OBJ) -o $(EXEC)

# Compile each source file to an object file
%.o: %.cc
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

# Clean up generated files
clean:
	rm -f $(OBJ) $(EXEC)

.PHONY: clean

