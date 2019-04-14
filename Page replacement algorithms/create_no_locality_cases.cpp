#include<bits/stdc++.h>
#include<time.h>
using namespace std;
int main() {
 srand(time(0));
   ofstream myfile;
   myfile.open ("no_locality_workload.txt");
	int n = 1000000;  //upto 10^6
	while(n--) {
		myfile<<(int)rand() % 10 <<" ";
	}
	myfile.close();
}

