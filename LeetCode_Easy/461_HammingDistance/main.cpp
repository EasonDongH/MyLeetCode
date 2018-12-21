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
		cnt += (x & 1) ^ (y & 1); //��ͬΪ0����ͬΪ1 
		x >>= 1; y >>= 1;
	}
	cnt += countOnes(x) + countOnes(y);//��ʱx��y����ֻ��һ������0���������еġ�1�����ӽ���

	return cnt;
}

int main() {
	hammingDistance(2, 4);

	return 0;
}