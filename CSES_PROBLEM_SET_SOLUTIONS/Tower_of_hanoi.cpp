// The Tower of Hanoi game consists of three stacks (left, middle and right) and n round disks of different sizes. Initially, the left stack has all the disks, in increasing order of size from top to bottom.

// The goal is to move all the disks to the right stack using the middle stack. On each move you can move the uppermost disk from a stack to another stack. In addition, it is not allowed to place a larger disk on a smaller disk.

// Your task is to find a solution that minimizes the number of moves.

// Input

// The only input line has an integer n: the number of disks.

// Output

// First print an integer k: the minimum number of moves.

// After this, print k lines that describe the moves. Each line has two integers a and b: you move a disk from stack a to stack b.


#include <bits/stdc++.h>
#define mod 1000000007
#define ll long long
#define pb push_back
#define mp make_pair
#define MAX 1000001


using namespace std;



void solve(int a, int b, int c, int n) {
	if (n == 0)
		return;
	solve(a, c, b, n-1);
	cout<<a<<' '<<c<<endl;
	solve(b, a, c, n-1);
}

int main(){
    int n;
	cin>>n;
    cout<< (1<<n) - 1<<endl;
    solve(1, 2, 3, n);
	return 0;
}
