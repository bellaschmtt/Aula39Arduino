#define ir1 A0
#define ir2 A1
#define ir3 A2
#define ir1 4
#define ir2 5
#define ir3 6
#define ir4 7

int sensIr1;
int sensIr2;
int sensIr3;

int enableA = 8;
int enableB = 3;

void setup() {
  pinMode(ir1, INPUT);
  pinMode(ir2, INPUT);
  pinMode(ir3, INPUT);

  pinMode(enableA, OUTPUT);
  pinMode(enableB, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);

  serial.begin(9600);
}

void esquerda(){
  digitalWrite(in1, HIGH);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, HIGH);

  digitalWrite(enableA, HIGH);
  digitalWrite(enableB, HIGH);
  }

void direita(){
  digitalWrite(in1, LOW);
  digitalWrite(in2,HIGH);
  digitalWrite(in3, HIGH);
  digitalWrite(in1, LOW);
  
   digitalWrite(enableA, HIGH);
   digitalWrite(enableB, HIGH);
  }
void reto(){
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);

  digitalWrite(enableA, HIGH);
  digitalWrite(enableB, HIGH);
  }

void loop() {
  int sensIr1 = analogRead(ir1);
  int sensIr2 = analogRead(ir2);
  int sensIr3 = analogRead(ir3);

  if(sensIr1 < 500 && sensIr3 < 500 && sensIr2 > 500){
     esquerda();
    }
    if(sensIr2 < 500 && sensIr3 < 500 && sensIr1 > 500){
        ireita();
      }
   if(sensIr3 > 500 && sensIr1 < 500 && sensIr2 < 500){
     reto();
    }

}
