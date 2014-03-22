#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>
//#include "bball.h"
//compile with g++-4.7 -std=c++11 bball.cpp
using namespace std;
	int* c;
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
	vector<int> overwrite(int i, int &c);

int main(){
	srand(time(0));
	cout<<"March Madness Bracket"<<endl;
	g1 = algo_1();
	g2 = algo_2();
	round_1(g1, g2);
	//round_2(,);
	display();
	return 0;
}

vector<int> algo_1(){   //fill vects of random numbers
	vector<int> group;
	for(int i=0;i < 17;i++){//in all the loops im skipping the first element
		group.push_back(((rand()/1000000)-1000)+bias1[i]);//because the first random number isn't very random
	}return group;
};
vector<int> algo_2(){   //fill vects of random numbers
	vector<int> group;
	for(int i=0;i < 17;i++){
		group.push_back(((rand()/1000000)-1000)+bias2[i]);
	}return group;
};
void round_1(vector<int> g1, vector<int> g2){
	for(int i=0;i<17;i++){
		if(i%2==0){
			if(g1[i]>g2[i])winner2(i,1);	
				else winner2(i,2);
		}else{
			if(i%2==1){
			if(g1[i]>g2[i])winner1(i,1);
				else winner1(i,2);
			}
		}
	}
};
vector<string> winner1(int i,int g){
	if(g==1){
		group1_1.push_back(group1[i]);
		//overwrite(c,i);
		}else{ 
			group1_1.push_back(group2[i]);
			//overwrite(c,i);			
	}return group1_1;
};
vector<string> winner2(int i,int g){
	if(g==1){
		group2_1.push_back(group1[i]);
		//overwrite(c,i);
		}else{
		 	group2_1.push_back(group2[i]);
		 	//overwrite(c,i)
		 }
	return group2_1;
};
/*vector<int> overwrite(int c,int i){
	g1[c]=i
};*/
/*void round_2(vector<int> g1, vector<int> g2){
	for(int i=0;i<17;i++){
		if(i%2==0){
			if(g1[i]>g2[i])winner2_1(i,1);	
				else winner2_1(i,2);
		}else{
			if(i%2==1){
				if(g1[i]>g2[i])winner1_1(i,1);
					else winner1_1(i,2);
			}
		}
	}
};
vector<string> winner1_1(int i,int g){
	if(g==1) group1_2.push_back(group1[i]);
		else group1_1.push_back(group2[i]);
	return group1_1;
};
vector<string> winner2_1(int i,int g){
	if(g==1) group2_1.push_back(group1[i]);
		else group2_1.push_back(group2[i]);
	}return group2_1;
};
*/
void display(){
	for(int i=1,g1=1,g2=1;i < 17;i++){
		if(i%2==1){
			cout<<'\n'<<group1[i]<<endl;
			cout<<'\t'<<group1_1[i-g1]<<endl;
			cout<<group2[i]<<endl;
			g1++;
		}else{
			cout<<'\n'<<group1[i]<<endl;
			cout<<'\t'<<group2_1[i-g2]<<endl;
			cout<<group2[i]<<endl;
			g2++;
		}
	}
};