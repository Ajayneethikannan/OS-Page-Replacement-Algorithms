#include<bits/stdc++.h>
#include<time.h>
using namespace std;
int main() {
	srand(time(0));
	int n = rand() % 1000000;  //upto 10^6
	while(n--) {
		cout<<(int)rand() % 10 <<" ";
	}
}

