/*
http://220.89.64.243/30stair/notaskwhy/notaskwhy.php?pname=notaskwhy
�л� n ���� ��, ��ȣ�� �Է����� �־�����.
���� 1, 4, 2, 3 ������
���� �� �������� 1, 3���� �������� 2, 4���� ������������ ����

���� �Լ� ��� x 

�� ����(�ڵ�) ���� ��
1. ���� �������� ��������, ��ȣ�� �������� �������� ���� (������ ����� �ٸ���)
2. ����ü�� ���
3. ���� �Լ��� ���
4. ���ο� ���� ��� ���� (���� �������� 1,4,2,3 ������ ���� �ǰ�)
5. ���� �ڵ� (1, 3 �� ���� �������� && 2,4�� ���� ��������)
*/

#include<stdio.h>

struct temp{
	int a, b, c;
}stu[101], t;

int main_notask() {
	int i, j, n;
	int rank[5] = { 0,1,3,4,2 };

	// �Է�
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d %d", &stu[i].a, &stu[i].b);
		stu[i].c = rank[stu[i].a];
	}

	for (i = 0; i < n-1; i++) {
		for (j = i + 1; j < n; j++) {
			if (stu[i].c > stu[j].c || 
				stu[i].a % 2 == 1 && stu[i].a == stu[j].a && stu[i].b > stu[j].b ||
				stu[i].a % 2 == 0 && stu[i].a == stu[j].a && stu[i].b < stu[j].b)
				t = stu[i], stu[i] = stu[j], stu[j] = t;
		}
	}

	for (i = 0; i < n; i++)
		printf("%d %d\n", stu[i].a, stu[i].b);

	return 0;
}