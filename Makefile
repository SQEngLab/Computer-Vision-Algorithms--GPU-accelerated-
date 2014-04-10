OPENCL = /opt/intel/opencl-1.2-3.2.1.16712
COMPILER = g++
FLAGS = -o
EXE = prog
SRC = *.cpp *.h
INCLUDE = -I$(OPENCL)/include
LINK = -lopencv_core -lopencv_highgui -lOpenCL

#compiling
main:
	$(COMPILER) $(SRC) $(LINK) $(INCLUDE) $(FLAGS) $(EXE)
	
run:
	@echo "running the program"
	./$(EXE)

