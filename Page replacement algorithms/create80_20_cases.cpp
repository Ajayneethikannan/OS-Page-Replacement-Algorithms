#include<bits/stdc++.h>
#include<time.h>
using namespace std;
int main() {
  ofstream myfile;
  myfile.open ("80_20.txt");
	int n = 1000000; 
	while(n--) {
		int percent = rand()%100;
		if(percent < 20) myfile<<(int)rand() % 3 <<" ";
		else {
			switch(rand() % 3) {
				case 0: myfile<< 7 <<" "; break;
				case 1: myfile<< 8 <<" "; break;
				case 2: myfile<< 9<<" ";  break;
				default: myfile<< rand() % 10 << " ";
			}
		}
	}
	  myfile.close();
}

