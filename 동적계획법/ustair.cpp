/*

*/

#include<stdio.h>

int main() {
	int stair[310] = { 0, };
	int con[310] = { 0, }; // �������� ����� ��� ���
	int jump[310] = { 0, }; // �ǳ� �پ� ����� ��� ���
	int i, j, n;

	scanf("%d", &n);
	for (i = 2; i <= n + 1; i++) { // �迭�� �ʱⰪ�� 0,0 ���� �ϱ�����
		scanf("%d", &stair[i]);
	}

	for (i = 2; i <= n + 1; i++) {
		// �������� ����� ��� ���ؼ��� ���� ��쿡�� 
		jump[i] += jump[i-2] > con[i-2] ? jump[i - 2] + stair[i] : con[i - 2] + stair[i];
		// �������� ����� ��� ��� >> ���� ��쿡�� ������ �ؾ���
		con[i] = jump[i - 1] + stair[i];
	}

	printf("%d", con[n+1] > jump[n+1] ? con[n + 1] : jump[n + 1]);
	return 0;
}