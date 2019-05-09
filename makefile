basic: main.cpp
	g++ main.cpp -o calculator
grades: lib\calculators\gradecalc.cpp
	g++ lib\calculators\gradecalc.cpp -o gradecalc
all: basic grades
