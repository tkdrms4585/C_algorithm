/*
http://220.89.64.243/30stair/barn/barn.php?pname=barn
��� ������ ��ġ �Ϸ��� �Ѵ�. 
���� �ҵ��� �ִ� ��簡 �־��� ��, ������ ���� �� �ִ� �ּ� ���� ���
�Է�
m ��� ������ �ִ� ���ڼ�
s ��ü �츮 ��
c �ҵ��� �ִ� �츮 ��

�Է��� ���� ���� �������� �迭�� ������ ���� ���� �������� ����


*/

#include<stdio.h>
#include<algorithm>
using namespace std;

bool chkbarn(int i, int j) { // �Ұ� �ִ� �츮 ��ȣ ����
	return i < j;
}

bool chkbarn2(int i, int j) { // �츮 ���� ���� ����
	return i > j;
}

int main_barn() {
	int i, m, s, c;
	int cow[210] = { 0, }; // �ҵ��� �ִ� �츮�� ���� �迭
	int a[210] = { 0, }; // �ҵ��� �ִ� �츮�� ������ ����� ����
	int dab;

	// �Է�
	scanf("%d %d %d", &m, &s, &c); // ���ڼ�, �츮��, �ҵ��� �ִ� �츮��

	for (i = 0; i < c; i++) {
		scanf("%d", &cow[i]);
	}

	// �� �츮 ��ȣ ���� c= �ҵ��� �ִ� �츮��
	sort(cow, cow + c, chkbarn);

	// �ҵ��� �ִ� �츮�� ������ ���
	for (i = 0; i < c - 1; i++) {
		a[i] = cow[i + 1] - cow[i] - 1;
	}

	// �츮 ���� ���� ���� ���� ���� ���� ��Ű�� ����
	sort(a, a + c - 1, chkbarn2);

	// �츮 ��ü - ������ ���� �κ�
	dab = cow[c-1] - cow[0] + 1; // �츮 ��ü�� ũ��
	for (i = 0; i < m - 1; i++) { // ��밡���� ���� - 1
		dab -= a[i];
	}

	// ���
	printf("%d", dab);

	return 0;
}