#include<bits/stdc++.h>
#include<time.h>
using namespace std;
int main() {
	srand(time(0));
	int n = rand() % 1000000;  //upto 10^6
	while(n--) {
		int percent = rand()%100;
		if(percent < 20) cout<<(int)rand() % 3 <<" ";
		else {
			switch(rand() % 3) {
				case 0: cout<< 7 <<" ";
				case 1: cout<< 8 <<" ";
				case 2: cout<< 9<<" ";
				default: cout<< rand() % 10 << " ";
			}
		}
	}
}

