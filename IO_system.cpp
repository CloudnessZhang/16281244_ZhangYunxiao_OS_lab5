const int blockLength = 64; //16 integers
static char ldisk[64][blockLength];

/*
typedef struct Block{
    char Content[MaxLenth];//������СΪ512�ֽ�
    int LogicalBlockNum;//�߼����
    int c;//�����
    int h;//��ͷ��
    int b;//������
}BLOCK;

BLOCK ldisk[C][H][B];//����ģ��
*/



void read_block(int i, char *p) {
	for (int b = 0; b < blockLength; b++) {
		*p = ldisk[i][b];
		p++;
	}
}

void write_block(int i, char *p) {
	for (int b = 0; b < blockLength; b++) {
		ldisk[i][b] = *p;
		p++;
	}
}

/*
void file_to_disk(string filename) {//���ļ��ж�ȡ���ݵ�����
	ifstream in (filename);//�Զ��ķ�ʽ���ļ�
	if (!in.fail()) {
		char block[blockLength];
		for (int i = 0; i < L; i++) {
			in.read(block, blockLength);
			write_block(i, block);
		}
		in.close();
	}
	else{
        cout<<"File Open Fail"<<endl;
	}
}

void disk_to_file(string filename){//����������д���ļ���
    ifstream in (filename);//�Զ��ķ�ʽ���ļ�
	if (!in.fail()) {
		char block[blockLength];
		for (int i = 0; i < L; i++) {
            read_block(i,block);
			in.write(block, blockLength);
		}
		in.close();
	}
	else{
        cout<<"File Open Fail"<<endl;
	}
}
*/
