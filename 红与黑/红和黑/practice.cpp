//ţ�ͣ������

//��Ŀ������
//��һ�䳤���εķ��ӣ��������˺�ɫ����ɫ������ɫ�������δ�ש����վ������һ���ɫ�Ĵ�ש�ϣ�ֻ�������ڵ�
//�����������ĸ����򣩺�ɫ��ש�ƶ�����дһ�����򣬼������ܹ��ܹ�������ٿ��ɫ�Ĵ�ש��
//�������� :
//��������������ݡ�ÿ�����ݵ�һ������������ m �� n��1��m, n��20���������� m �У�ÿ�а��� n ���ַ���ÿ����
//����ʾһ���ש����ɫ���������£�1.��.������ɫ�Ĵ�ש��2.��#������ɫ�Ĵ�ש��3.��@������ɫ�Ĵ�ש��������վ��
//����ש�ϡ����ַ���ÿ�����ݼ�����Ψһ����һ�Ρ�
//������� :
//��Ӧÿ�����ݣ�����ܹ��ܹ�������ٿ��ɫ�Ĵ�ש��


//����һ��
//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//int res = 0;
//int arr[4][2] = { { -1, 0 }, { 1, 0 }, { 0, -1 }, { 0, 1 } };  //��������
//void DFS(vector<string> &rb, vector<vector<int>> &path, int i, int j, int m, int n)
//{
//	if (rb[i][j] == '.' || rb[i][j] == '@')  //�����ж�(i,j)���Ƿ�Ϊ0����Ϊ��һ�����ж��Ƿ���@��֮��ݹ���붼������Ϊ0������Եݹ飬������if����ж�
//	{
//		res++;                               //��һ�����ʣ�Ϊʲôû���ж�'#'����ʵ�����жϣ���Ϊ��һ�ν������ַ�������'@',֮��ÿ������������'.'�ſ��Եݹ�
//	}
//	path[i][j] = 1;    //����ǰ�������ǣ���ʾ�Ѿ��߹���֮��������
//
//	for (int k = 0; k<4; ++k)   //���ڵ�ǰ������������ң����������������
//	{
//		int new_row = i + arr[k][0];
//		int new_col = j + arr[k][1];
//		if (new_row<0 || new_row >= m || new_col<0 || new_col >= n || path[new_row][new_col] == 1)   //��������ñ��Ľ��ޣ��Լ��˴���1���Ѿ��߹�������ˣ�����һ�������ж�
//		{
//			continue;
//		}
//		if (rb[new_row][new_col] == '.')     //�˴���pathһ��Ϊ0����Ϊ��Ϊ1ʱ���������continue����
//		{
//			DFS(rb, path, new_row, new_col, m, n);
//		}
//	}
//}
//int main()
//{
//	int m, n;
//	while (cin >> m >> n)
//	{
//		vector<string> RB(m);
//		vector<vector<int>> board(m, vector<int>(n, 0));
//		for (int i = 0; i<m; ++i)
//		{
//			cin >> RB[i];
//		}
//		for (int i = 0; i<m; ++i)
//		{
//			for (int j = 0; j<RB[i].size(); ++j)      //ע��:string��size()������'\0'
//			{
//				if (RB[i][j] == '@')
//				{
//					DFS(RB, board, i, j, m, n);
//				}
//			}
//		}
//		cout << res << endl;
//		res = 0;
//	}
//	return 0;
//}

//˼·�ܽ᣺�����������飬һ�����ʵ�ʶ�Ӧ����ɫ��һ����¼�ö�Ӧλ���Ƿ��߹�.


//��������
//#include<iostream>
//#include<vector>
//using namespace std;
//int count;         //ȫ�ֱ�����δ����ʼֵ��Ĭ��Ϊ0����¼����ɫ�ĸ���
//void DFS(vector<vector<char>> &board, int x, int y)
//{
//	if (x<0 || x >= board.size() || y<0 || y >= board[0].size() || board[x][y] == '#')
//		return;
//	count++;
//	board[x][y] = '#';      //�Ѿ�������ĺ���ɫ��֮�����ڼ��㣬�����ظ�
//	DFS(board, x + 1, y);
//	DFS(board, x - 1, y);
//	DFS(board, x, y + 1);
//	DFS(board, x, y - 1);
//}
//int main()
//{
//	int m, n;
//	while (cin >> m >> n)
//	{
//		vector<vector<char>> board(m, vector<char>(n));
//		int x, y;
//		for (int i = 0; i<m; ++i)
//		{
//			for (int j = 0; j<n; ++j)
//			{
//				cin >> board[i][j];
//				if (board[i][j] == '@')
//				{
//					x = i;
//					y = j;
//				}
//			}
//		}
//		DFS(board, x, y);
//		cout << count << endl;
//		count = 0;       //��סһ��Ҫ��0�����������������
//	}
//}

//����һ��Ƚ��ڷ������������һЩû��Ҫ�ĵݹ飬�ڸ�ջ֡���Ѿ��жϺ��ܷ���еݹ�