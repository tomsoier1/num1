all: build run

build: 
	g++ kokosik.cpp

run: 
	clear
	./a.out
	python3 plot.py
