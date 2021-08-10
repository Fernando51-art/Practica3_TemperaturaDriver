




void  DPY_vfnDriverInit (void)
{
    InitPins();
	StepSet();
	Step1Clear();
	StepReturnH();
	StepOnOff();
    writeT();
    writeE();
    writeM();
    writeP();
    write2points();


}



void InitPins(void)
{
	pinMode('D',7, 1); //D0
	pinMode('D',6, 1); //D1
	pinMode('A',17, 1); //D2
	pinMode('A',16, 1); //D3
	pinMode('C',17, 1); //D4
	pinMode('C',16, 1); //D5
	pinMode('C',13, 1); //D6
	pinMode('C',12, 1); //D7

	pinMode('C',11, 1); //RS
	pinMode('C',10, 1); //RW
	pinMode('C',6, 1); //E
}

void Step1Clear(void){
	digitalWrite('C',11, 0); //RS
	digitalWrite('C',10, 0); //RW
	digitalWrite('C',6, 1); //E

	digitalWrite('D',7, 1); //D0
	digitalWrite('D',6, 0); //D1
	digitalWrite('A',17, 0); //D2
	digitalWrite('A',16, 0); //D3
	digitalWrite('C',17, 0); //D4
	digitalWrite('C',16, 0); //D5
	digitalWrite('C',13, 0); //D6
	digitalWrite('C',12, 0); //D7


	delayMs(500);
}

void StepReturnH(void){

	digitalWrite('C',11, 0); //RS
	digitalWrite('C',10, 0); //RW
	digitalWrite('C',6, 1); //E

	digitalWrite('D',7, 0); //D0
	digitalWrite('D',6, 1); //D1
	digitalWrite('A',17, 0); //D2
	digitalWrite('A',16, 0); //D3
	digitalWrite('C',17, 0); //D4
	digitalWrite('C',16, 0); //D5
	digitalWrite('C',13, 0); //D6
	digitalWrite('C',12, 0); //D7

	delayMs(500);

	digitalWrite('C',6, 0); //E
	digitalWrite('D',6, 0); //D1
	delayMs(500);

}


void StepSet(void){

	digitalWrite('C',6, 1); //E

	digitalWrite('D',7, 0); //D0
	digitalWrite('D',6, 0); //D1
	digitalWrite('A',17, 0); //D2
	digitalWrite('A',16, 1); //D3
	digitalWrite('C',17, 1); //D4
	digitalWrite('C',16, 1); //D5
	digitalWrite('C',13, 0); //D6
	digitalWrite('C',12, 0); //D7

	digitalWrite('C',11, 0); //RS
	digitalWrite('C',10, 0); //RW
	digitalWrite('C',6, 0); //E

	delayMs(500);

	digitalWrite('C',6, 0); //E
	digitalWrite('D',7, 0); //D0
	digitalWrite('D',6, 0); //D1
	digitalWrite('A',17, 0); //D2
	digitalWrite('A',16, 0); //D3
	digitalWrite('C',17, 0); //D4
	digitalWrite('C',16, 0); //D5
	digitalWrite('C',13, 0); //D6
	digitalWrite('C',12, 0); //D7
	delayMs(500);
}

void StepOnOff(void){
	digitalWrite('C',6, 1); //E
	digitalWrite('C',11, 0); //RS
	digitalWrite('C',10, 0); //RW


	digitalWrite('D',7, 1); //D0 = Parpadeo
	digitalWrite('D',6, 0); //D1 = Cursor
	digitalWrite('A',17, 1); //D2
	digitalWrite('A',16, 1); //D3
	digitalWrite('C',17, 0); //D4
	digitalWrite('C',16, 0); //D5
	digitalWrite('C',13, 0); //D6
	digitalWrite('C',12, 0); //D7


	//Delay
	delayMs(500);

	digitalWrite('C',11, 0); //RS
	digitalWrite('C',10, 0); //RW
	digitalWrite('C',6, 0); //E

	digitalWrite('D',7, 0); //D0
	digitalWrite('D',6, 0); //D1
	digitalWrite('A',17, 0); //D2
	digitalWrite('A',16, 0); //D3
	digitalWrite('C',17, 0); //D4
	digitalWrite('C',16, 0); //D5
	digitalWrite('C',13, 0); //D6
	digitalWrite('C',12, 0); //D7
	delayMs(500);
}



void delayMs(int n) {
	int i;
	int j;
	for(i = 0 ; i < n; i++)
	for(j = 0 ; j < 7000; j++)
	{ }
}


void writeP(void){

	digitalWrite('C',11, 1); //RS
	digitalWrite('C',10, 0); //RW
	digitalWrite('C',6, 0); //E

	digitalWrite('D',7, 0); //D0
	digitalWrite('D',6, 0); //D1
	digitalWrite('A',17, 0); //D2
	digitalWrite('A',16, 0); //D3
	digitalWrite('C',17, 1); //D4
	digitalWrite('C',16, 0); //D5
	digitalWrite('C',13, 1); //D6
	digitalWrite('C',12, 0); //D7

	digitalWrite('C',6, 1); //E

	digitalWrite('C',6, 0); //E

}

void writeE(void){

	digitalWrite('C',11, 1); //RS
	digitalWrite('C',10, 0); //RW
	digitalWrite('C',6, 0); //E

	digitalWrite('D',7, 1); //D0
	digitalWrite('D',6, 0); //D1
	digitalWrite('A',17, 1); //D2
	digitalWrite('A',16, 0); //D3
	digitalWrite('C',17, 0); //D4
	digitalWrite('C',16, 0); //D5
	digitalWrite('C',13, 1); //D6
	digitalWrite('C',12, 0); //D7

	digitalWrite('C',6, 1); //E

	digitalWrite('C',6, 0); //E

}

void writeM(void){

	digitalWrite('C',11, 1); //RS
	digitalWrite('C',10, 0); //RW
	digitalWrite('C',6, 0); //E

	digitalWrite('D',7, 1); //D0
	digitalWrite('D',6, 0); //D1
	digitalWrite('A',17, 1); //D2
	digitalWrite('A',16, 1); //D3
	digitalWrite('C',17, 0); //D4
	digitalWrite('C',16, 0); //D5
	digitalWrite('C',13, 1); //D6
	digitalWrite('C',12, 0); //D7

	digitalWrite('C',6, 1); //E

	digitalWrite('C',6, 0); //E

}


void writeT(void){

	digitalWrite('C',11, 1); //RS
	digitalWrite('C',10, 0); //RW
	digitalWrite('C',6, 0); //E

	digitalWrite('D',7, 0); //D0
	digitalWrite('D',6, 0); //D1
	digitalWrite('A',17, 1); //D2
	digitalWrite('A',16, 0); //D3
	digitalWrite('C',17, 1); //D4
	digitalWrite('C',16, 0); //D5
	digitalWrite('C',13, 1); //D6
	digitalWrite('C',12, 0); //D7

	digitalWrite('C',6, 1); //E

	digitalWrite('C',6, 0); //E

}

void write2points(void){
	digitalWrite('C',11, 1); //RS
	digitalWrite('C',10, 0); //RW
	digitalWrite('C',6, 0); //E

	digitalWrite('D',7, 0); //D0
	digitalWrite('D',6, 1); //D1
	digitalWrite('A',17, 0); //D2
	digitalWrite('A',16, 1); //D3
	digitalWrite('C',17, 1); //D4
	digitalWrite('C',16, 1); //D5
	digitalWrite('C',13, 0); //D6
	digitalWrite('C',12, 0); //D7

	digitalWrite('C',6, 1); //E

	digitalWrite('C',6, 0); //E

}
