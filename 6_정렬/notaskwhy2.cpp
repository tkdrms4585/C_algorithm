/*
http://220.89.64.243/30stair/notaskwhy/notaskwhy.php?pname=notaskwhy
�л� n ���� ��, ��ȣ�� �Է����� �־�����.
���� 1, 4, 2, 3 ������
���� �� �������� 1, 3���� �������� 2, 4���� ������������ ����

���� �Լ� ���

�� ����(�ڵ�) ���� ��
1. ���� �������� ��������, ��ȣ�� �������� �������� ���� (������ ����� �ٸ���)
2. ����ü�� ���
3. ���� �Լ��� ���
4. ���ο� ���� ��� ���� (���� �������� 1,4,2,3 ������ ���� �ǰ�)
5. ���� �ڵ� (1, 3 �� ���� �������� && 2,4�� ���� ��������)
*/

#include<stdio.h>
#include<algorithm>
using namespace std;

struct temp2 {
	int a, b, c;
}stu[101], t;

int chknw2(temp2 i, temp2 j) {
	return (i.c < j.c || 
			i.a % 2 == 1 && i.a == j.a && i.b < j.b ||
			i.a % 2 == 0 && i.a == j.a && i.b > j.b);
}

int main_notask2() {
	int i, j, n;
	int rank[5] = { 0,1,3,4,2 };

	// �Է�
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d %d", &stu[i].a, &stu[i].b);
		stu[i].c = rank[stu[i].a];
	}
	// ����
	sort(stu, stu + n, chknw2);

	// ���
	for (i = 0; i < n; i++)
		printf("%d %d\n", stu[i].a, stu[i].b);

	return 0;
}