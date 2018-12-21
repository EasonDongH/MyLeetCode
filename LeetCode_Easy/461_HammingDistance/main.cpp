int countOnes(int x) {
	int cnt = 0;
	while (0 < x) {
		cnt++;
		x &= x - 1;
	}
	return cnt;
}
int hammingDistance(int x, int y) {
	int cnt = 0;
	while (0<x && 0<y) {
		cnt += (x & 1) ^ (y & 1); //相同为0，不同为1 
		x >>= 1; y >>= 1;
	}
	cnt += countOnes(x) + countOnes(y);//此时x与y至多只有一个大于0，将其所有的‘1’都加进来

	return cnt;
}

int main() {
	hammingDistance(2, 4);

	return 0;
}