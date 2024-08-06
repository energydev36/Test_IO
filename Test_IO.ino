#define X1 32        //OUTPUT CH1
#define X2 33        //OUTPUT CH2
#define X3 25        //OUTPUT CH3
#define X4 26        //OUTPUT CH4

/* กำหนดค่าของ INPUT */
#define Y1 23  //INPUT CH1
#define Y2 22  //INPUT CH2
#define Y3 21  //INPUT CH3
#define Y4 19  //INPUT CH4

void setup() {
  Serial.begin(115200);

  pinMode(X1, OUTPUT);
  pinMode(X2, OUTPUT);
  pinMode(X3, OUTPUT);
  pinMode(X4, OUTPUT);

  pinMode(Y1, INPUT_PULLUP);
  pinMode(Y2, INPUT_PULLUP);
  pinMode(Y3, INPUT_PULLUP);
  pinMode(Y4, INPUT_PULLUP);
}

void loop() {
  int _X1 = digitalRead(X1);
  int _X2 = digitalRead(X2);
  int _X3 = digitalRead(X3);
  int _X4 = digitalRead(X4);

  int _Y1 = digitalRead(Y1);
  int _Y2 = digitalRead(Y2);
  int _Y3 = digitalRead(Y3);
  int _Y4 = digitalRead(Y4);

  digitalWrite(X1, _Y1);
  digitalWrite(X2, _Y2);
  digitalWrite(X3, _Y3);
  digitalWrite(X4, _Y4);

  Serial.printf("\n\n");
  Serial.printf("X1:%d\tX2:%d\tX3:%d\tX4:%d\t\n",_X1,_X2,_X3,_X4);
  Serial.printf("Y1:%d\tY2:%d\tY3:%d\tY4:%d\t\n",_Y1,_Y2,_Y3,_Y4);
  
  delay(500);
}
