/*
http://220.89.64.243/30stair/knapsack/knapsack.php?pname=knapsack
������ ���Կ� ���� �־����� ������� �������� �̵����� ���ϴ� ����
�Է�
������ �������� �ִ� ����
������ ����
������ ���� / ����
�ִ� ������ �Ҽ��� 2�ڸ����� ���
*/
#include<stdio.h>
#include<algorithm>
using namespace std;

struct temp {
	int a, b; // ���� ����, ��ġ
	double c; // kg �� ��ġ
}kk[1010], tk;

int chkknap(temp i, temp j) {
	return i.c > j.c; // kg �� ��ġ�� ����
}

int main_knapsank() {
	int i, m, n; // ������ ������ �ִ� ���� / ���� ����
	double answer = 0;
	//�Է�
	scanf("%d", &m); //������ ������ �ִ� ����
	scanf("%d", &n); // ���� ����
	for (i = 0; i < n; i++) {
		scanf("%d %d", &kk[i].a, &kk[i].b); // ���� ����, ��ġ
		kk[i].c = (double)kk[i].b / kk[i].a; // kg�� ��ġ
	}

	// ����
	sort(kk, kk + n, chkknap);

	// ���� ���
	for (i = 0; i < n; i++) {
		
		if (m > kk[i].a) { // ������ ì��� �ִ� ���� ���� �������԰� ���� ��
			answer += kk[i].b;
			m -= kk[i].a;
		}
		else {
			answer += kk[i].c * m; // ì��� �ִ� ���� ���� * ���� ����ġ
			break;
		}
	}

	//���
	printf("%.2lf", answer);

	return 0;
}