#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>
//compile with g++-4.7 -std=c++11 bball.cpp
using namespace std;
class match_algos{
	public:
	vector<int> bias1{0,16,9,12,13,11,14,10,15,0,16,9,12,13,11,14,10,15};
	vector<int> bias2{0,1,8,5,4,6,3,7,2,0,1,8,5,4,6,3,7,2};
	vector<string> group1{"  ","WICHST","UK","ST LOU","LOUIS","UMASS","DUKE","TEXAS","MICH","ARIZONA","GONZAGA","OKLAHOMA","SAND DIEGO ST","BAYLOR","CREIGHTON","OREGON","WISCONSIN"};
	vector<string> group2{"  ","CALPY","KAN ST","NC ST","MANHT","TENN","MERCER","AZ ST","WOFFRD","WEBER STATE","OKLAHOMA ST","N DAKOTA ST","NEW MEXICO ST","NEBRASKA","LA LAFAYETTE","BYU","AMERICAN"};
	vector<int> g1;
	vector<int> g2;
	vector<int> winner_1;
	vector<string> group1_1;
	vector<int> winner_2;
	vector<string> group2_1;
	vector<int> algo_1();
	vector<int> algo_2();
	void round_1(vector<int> g1, vector<int> g2);
	void round_2(vector<int> g1, vector<int> g2);
	vector<string> winner1(int i,int g);
	vector<string> winner2(int i,int g);
	void display();
};