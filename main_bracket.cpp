#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>
#include "bball.h"
//compile with g++-4.7 -std=c++11 bball.cpp
using namespace std;

int main(){
	srand(time(0));
	cout<<"March Madness Bracket"<<endl;
	g1 = algo_1();
	g2 = algo_2();
	round_1(g1, g2);
	display();
	return 0;
}