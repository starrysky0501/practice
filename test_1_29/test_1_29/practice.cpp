//2018У�����⣺��һ��ͯ��

//��Ŀ��������һ��ͯ�ڣ���ʦ���˺ܶ�óԵ��ɿ������׶�԰��ÿ���ɿ���j������Ϊw[j]������ÿ��С����i��
//�����ֵ����ɿ�����С�ﵽh[i] (��w[j]>=h[i])�����Ż���ȥ���ݽ�Ŀ����ʦ��Ŀ���ǽ��ɿ����ַ��������ǣ�
//ʹ������С����̨���ݡ����Ա�֤ÿ��w[i]> 0�Ҳ��ܽ�����ɿ����ָ�һ�����ӻ�һ��ָ�������ӡ�

//������������һ�У�n����ʾh����Ԫ�ظ���
//�ڶ��У�n��h����Ԫ��
//�����У�m����ʾw����Ԫ�ظ���
//�����У�m��w����Ԫ��

//�����������̨����ѧ������

//#include<stdio.h>
//#include<algorithm>
//#include<vector>
//using namespace std;
//int main(){
//	int N, M, i, j;
//	//freopen("input.txt","r",stdin);
//	scanf("%d", &N);
//	vector<int> child(N);
//	for (i = 0; i<N; i++) scanf("%d", &child[i]);
//	scanf("%d", &M);
//	vector<int> cho(M);
//	for (i = 0; i<M; i++) scanf("%d", &cho[i]);
//	sort(child.begin(), child.end());
//	sort(cho.begin(), cho.end());
//	int res = 0;
//	for (i = 0, j = 0; i<M&&j<N; i++)
//	if (cho[i] >= child[j])
//		res++, j++;
//	printf("%d\n", res);
//}