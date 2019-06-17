const int blockLength = 64; //16 integers
static char ldisk[64][blockLength];

/*
typedef struct Block{
    char Content[MaxLenth];//扇区大小为512字节
    int LogicalBlockNum;//逻辑块号
    int c;//柱面号
    int h;//磁头号
    int b;//扇区号
}BLOCK;

BLOCK ldisk[C][H][B];//磁盘模型
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
void file_to_disk(string filename) {//从文件中读取数据到磁盘
	ifstream in (filename);//以读的方式打开文件
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

void disk_to_file(string filename){//将磁盘数据写入文件中
    ifstream in (filename);//以读的方式打开文件
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
