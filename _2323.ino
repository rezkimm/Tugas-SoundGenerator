int tempo=500,beat=50;;

void setup() {
pinMode(9,OUTPUT);
}
void D(){tone(9,3830);}
void R(){tone(9,3400);}
void M(){tone(9,3038);}
void Fa(){tone(9,2864);  }
void S(){tone(9,2550);}
void L(){tone(9,2272);}
void SI(){tone(9,2028);}
void D2(){tone(9,1912);}
void cl(){noTone(9);}
void loop() {
D();delay(tempo);cl();delay(beat);D();delay(tempo);
cl();delay(beat);S();
delay(tempo);cl();delay(beat);S();
delay(tempo);cl();delay(beat);
L();
delay(tempo);
cl();delay(beat);
L();
delay(tempo);
cl();delay(beat);
S();
delay(800);
cl();delay(200);

Fa();
delay(tempo);
cl();delay(beat);
Fa();
delay(tempo);
cl();delay(beat);
M();
delay(tempo);
cl();delay(beat);
M();
delay(tempo);
R();
delay(tempo);
cl();delay(beat);
R();
delay(tempo);
cl();delay(beat);
D();
delay(tempo);
cl();delay(200);

S();
delay(tempo);
cl();delay(beat);
S();
delay(tempo);
cl();delay(beat);
Fa();
delay(tempo);
cl();delay(beat);
Fa();delay(tempo);
cl();delay(beat);
R();
delay(tempo);
cl();delay(beat);
R();
delay(500);
cl();delay(beat);
M();
delay(800);
cl();delay(300);

S();
delay(500);
cl();delay(beat);
S();
delay(500);
cl();delay(beat);
Fa();
delay(500);
cl();delay(beat);
Fa();
delay(500);
R();
delay(500);
cl();delay(beat);
R();
delay(500);
cl();delay(beat);
M();
delay(800);
cl();delay(300);

D();delay(tempo);cl();delay(beat);D();delay(tempo);
cl();delay(beat);S();
delay(tempo);cl();delay(beat);S();
delay(tempo);cl();delay(beat);
L();
delay(tempo);
cl();delay(beat);
L();
delay(tempo);
cl();delay(beat);
S();
delay(800);
cl();delay(200);

Fa();
delay(tempo);
cl();delay(beat);
Fa();
delay(tempo);
cl();delay(beat);
M();
delay(tempo);
cl();delay(beat);
M();
delay(tempo);
R();
delay(tempo);
cl();delay(beat);
R();
delay(tempo);
cl();delay(beat);
D();
delay(tempo);
cl();delay(200);
}
