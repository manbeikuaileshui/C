#include "contact.h"
void ChekCapacity(Contact* ps); // ��������
void LoadContact(Contact* ps)  //  �����ļ��е���Ϣ��ͨѶ¼
{
	PeoInfo tmp = { 0 };
	FILE* pfRead = fopen("contact.dat", "rb");
	if (pfRead == NULL)
	{
		printf("LoadContact:%s\n", strerror(errno));
		return;
	}
	// ��ȡ�ļ��ŵ�ͨѶ¼��
	while (fread(&tmp, sizeof(PeoInfo), 1, pfRead))
	{
		ChekCapacity(ps);
		ps->data[ps->size] = tmp;
		ps->size++;
	}

	// �ر��ļ�
	fclose(pfRead);
	pfRead = NULL;
}
void InitContact(Contact* ps) //��ʼ��ͨѶ¼
{
	ps->data = (PeoInfo*)malloc(DEFAULT_SZ * sizeof(PeoInfo)); // ���������ռ䣬ֻ�ܴ�������˵���Ϣ
	if (ps->data == NULL)
	{
		return;
	}
	ps->size = 0;  //����ͨѶ¼���ֻ��0��Ԫ��
	ps->capacity = DEFAULT_SZ; // ����ͨѶ¼�������ܴ�ŵ�Ԫ�ظ���
	// ���ļ����Ѿ���ŵ�ͨѶ¼�е���Ϣ���ص�ͨѶ¼��
	LoadContact(ps);  //�����ļ��е���Ϣ��ͨѶ¼
}

void ChekCapacity(Contact* ps) // ����
{
	if (ps->size == ps->capacity)
	{
		PeoInfo* ptr = (PeoInfo*)realloc(ps->data, (ps->capacity + 2) * sizeof(PeoInfo));
		if (ptr != NULL)
		{
			ps->data = ptr;
			ps->capacity += 2;
			printf("���ݳɹ�\n");
		}
		else
		{
			printf("����ʧ��\n");
		}
	}
}
void AddContact(Contact* ps) //���
{
	ChekCapacity(ps); // ��⵱ǰͨѶ¼������ 1.���˾�����  2.û����ɶ������
	//��������
	printf("����������:>");
	scanf("%s", ps->data[ps->size].name);
	printf("�������Ա�:>");
	scanf("%s", ps->data[ps->size].sex);
	printf("����������:>");
	scanf("%d", &(ps->data[ps->size].age));
	printf("������绰����:>");
	scanf("%s", ps->data[ps->size].tele);
	printf("�������ַ:>");
	scanf("%s", ps->data[ps->size].addr);
	ps->size++;
	printf("��ӳɹ�\n");
}

void ShowContact(const Contact* ps) // ��ӡ
{
	assert(ps);
	if (ps->size == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		int i = 0;
		//����
		printf("%-3s\t%-2s\t%-2s\t%-11s\t%-20s\n", "����", "�Ա�", "����", "�绰����", "��ַ");
		//����
		for (i = 0; i < ps->size; i++)
		{
			printf("%-3s\t%-2s\t%-2d\t%-11s\t%-20s\n",
				ps->data[i].name,
				ps->data[i].sex,
				ps->data[i].age,
				ps->data[i].tele,
				ps->data[i].addr);
		}
	}
}

static int FindByName(const Contact* ps, char name[MAX_NAME]) //����staticʹ�������ֻ��������ļ�ʹ�úͲ鿴
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (0 == strcmp(ps->data[i].name, name))
		{
			return i;
		}
	}
	return -1; //�Ҳ��������
}

void DelContact(Contact* ps) // ɾ��ָ�����ֵ���ϵ��
{
	if (ps->size == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		char name[MAX_NAME];
		printf("������Ҫɾ���˵�����:>");
		scanf("%s", name);

		// 1.����Ҫɾ��������ʲôλ��
		int pos = FindByName(ps, name);  //�ҵ��˷�����������Ԫ�ص��±�,�Ҳ�������-1

		// 2.ɾ��
		if (pos == -1)
		{
			printf("Ҫɾ�����˲�����\n");
		}
		else
		{
			//ɾ������
			int j = 0;
			for (j = pos; j < ps->size - 1; j++)
			{
				ps->data[j] = ps->data[j + 1];
			}
			ps->size--;
			printf("ɾ���ɹ�\n");
		}
	}
}

void SearchContact(const Contact* ps) // ����ָ��������Ϣ
{
	char name[MAX_NAME];
	printf("������Ҫ�����˵�����:>");
	scanf("%s", &name);
	// 1.����Ҫ���ҵ�����ʲôλ��
	int pos = FindByName(ps, name); // �ҵ��˷�����������Ԫ�ص��±�, �Ҳ������� - 1

	// 2.��ӡ
	if (pos == -1)
	{
		printf("Ҫ���ҵ��˲�����\n");
	}
	else
	{
		printf("%-3s\t%-2s\t%-2s\t%-11s\t%-20s\n", "����", "�Ա�", "����", "�绰����", "��ַ");
		printf("%-3s\t%-2s\t%-2d\t%-11s\t%-20s\n",
			ps->data[pos].name,
			ps->data[pos].sex,
			ps->data[pos].age,
			ps->data[pos].tele,
			ps->data[pos].addr);
		printf("���ҳɹ�\n");
	}
}

void ModifyContact(Contact* ps) //�޸�ָ�����ѵ���Ϣ
{
	char name[MAX_NAME];
	printf("��������Ҫ�޸��˵�����:>");
	scanf("%s", name);
	int pos = FindByName(ps, name); //������Ҫ�޸��˵����ֵ�λ�ã��ҵ��˷�����������Ԫ�ص��±�, �Ҳ������� -1
	if (pos == -1)
	{
		printf("Ҫ�޸ĵ��˲�����\n");
	}
	else
	{
		printf("����������:>");
		scanf("%s", ps->data[pos].name);
		printf("�������Ա�:>");
		scanf("%s", ps->data[pos].sex);
		printf("����������:>");
		scanf("%d", &(ps->data[pos].age));
		printf("������绰����:>");
		scanf("%s", ps->data[pos].tele);
		printf("�������ַ:>");
		scanf("%s", ps->data[pos].addr);
		printf("�޸����\n");
	}
}

void Sortcontact(Contact* ps) // ����
{
	printf("����������\n");
	int i = 0;
	int j = 0;
	int flag = 1;
	for (i = 1; i < ps->size && flag == 1; i++)
	{
		flag = 0;
		for (j = 0; j < ps->size - i; j++)
		{
			if (ps->data[j].age > ps->data[j + 1].age)
			{
				PeoInfo ret = ps->data[j];
				ps->data[j] = ps->data[j + 1];
				ps->data[j + 1] = ret;
				flag = 1;
			}
		}
	}
	ShowContact(ps);
}

void DestroyContact(Contact* ps) ////����ͨѶ¼--�ͷŶ�̬���ٵ��ڴ�
{
	free(ps->data);
	ps->data = NULL;
}

void SaveContact(Contact* ps) //����ͨѶ¼�ļ�
{
	FILE* pfWrite = fopen("contact.dat", "wb");
	if (pfWrite == NULL)
	{
		printf("SaveContact:%s\n", strerror(errno));
		return;
	}
	// дͨѶ¼�е����ݵ��ļ���
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		fwrite(&(ps->data[i]), sizeof(PeoInfo), 1, pfWrite);
	}
	// �ر��ļ�
	fclose(pfWrite);
	pfWrite = NULL;
}