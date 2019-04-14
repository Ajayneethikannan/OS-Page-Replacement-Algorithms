#include<bits/stdc++.h>
#include<time.h>
using namespace std;
int main() {
	srand(time(0));
	int n = 100000;  //upto 10^5
	ofstream myfile;
    myfile.open ("looping_workload.txt");
	int looping_cases[10] = {0, 3, 5, 2, 1, 8, 7, 6, 4, 9};
	for(int i=0;i<n; i++) 
	{
		for(int i=0; i<10; i++) myfile<<looping_cases[i]<<" ";
	}
	myfile.close();
}

