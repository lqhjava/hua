#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int main()
{
	
		/*5λ�˶�Ա�μ���10��̨��ˮ����������������Ԥ��������
		Aѡ��˵��B�ڶ����ҵ�����
		Bѡ��˵���ҵڶ���E���ģ�
		Cѡ��˵���ҵ�һ��D�ڶ���
		Dѡ��˵��C����ҵ�����
		Eѡ��˵���ҵ��ģ�A��һ��
		����������ÿλѡ�ֶ�˵����һ�룬����ȷ�����������Ρ�*/
	//1.���Ȱ�abcde���еĿ��ܶ���������
	//2.�����е��������ҵ�����abcde������������
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	//a b c d e����������
	for (a = 1; a <= 5; a++)
	{
		for (b = 1; b <= 5; b++)
		{
			for (c = 1; c <= 5; c++)
			{
				for (d = 1; d <= 5; d++)
				{
					for (e = 1; e <= 5; e++)
					{
						//����a������:Aѡ��˵��B�ڶ����ҵ�����
						if ((b == 2 && a != 3)||(b != 2 && a == 3))
						{
							//����b��������Bѡ��˵���ҵڶ���E���ģ�
							if ((b == 2 && e != 4) || (b != 2 && e == 4))
							{
								//����c��������Cѡ��˵���ҵ�һ��D�ڶ���
								if ((c == 1 && d != 2) || (c != 1 && d == 2))
								{
									//����d��������Dѡ��˵��C����ҵ�����
									if ((c == 5 && d != 3) || (c != 5 && d == 3))
									{
										//����e��������Eѡ��˵���ҵ��ģ�A��һ��
										if ((e == 4 && a != 1) || (e != 4 && a == 1))
										{
											//���������ϵ�����֮�󣬻������ص�������a b c d e�����β���һ��
											if (a != b && a != c && a != d && a != e
												 && b != c && b != d && b != e
												 && c != d && c != e
												 && d != e)
											{
												printf("a = %d, b = %d, c = %d, d = %d, e = %d\n", a, b, c, d, e);
											}
										}
									}

								}


							}
						}
					}
				}
			}
		}
	}
	system("pause");	
	return 0;
}