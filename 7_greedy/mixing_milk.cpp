/*
http://220.89.64.243/30stair/mixing_milk/mixing_milk.php?pname=mixing_milk
���� ȸ�翡�� ���ں� ���ʹ� ���ݰ� ���� ���� �־��� �� ������ ���� �ΰ� ���ϴ� ����
�Է�
��� �� ���� �� / �Ȱ��� �ϴ� ���ڼ�
���ʹ� ���� / ���ڰ� ���� ���� ��
*/

#include<stdio.h>
#include<algorithm>
using namespace std;

struct temp {
	int p, a; // ���ʹ� ���� / ���� ������
}km[5050], tm;

int chkmilk(temp i, temp j) {
	return i.p < j.p;
}

int main() {
	int i, n, m, answer = 0;

	// �Է�
	scanf("%d %d", &n, &m); // n=����� ������ / m=���� ��
	for (i = 0; i < n; i++) {
		scanf("%d %d", &km[i].p, &km[i].a); // ���ʹ� ���� / ���� ������
	}

	// ����
	sort(km, km + n, chkmilk);

	// ���
	while(1) {
		if (n >  km[i].a) {
			answer += km[i].p * km[i].a;
			n -= km[i].a;
		}
		else {
			answer += km[i].p * n;
			break;
		}
	}

	// ���
	printf("%d", answer);

	return 0;
}