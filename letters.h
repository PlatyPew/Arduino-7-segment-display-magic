#ifndef LETTERS_H_INCLUDED
#define LETTERS_H_INCLUDED

const int pinA = 2;
const int pinB = 3;
const int pinC = 4;
const int pinD = 5;
const int pinE = 6;
const int pinF = 7;
const int pinG = 8;
const int pinPt = 9;

void blank() {
	digitalWrite(pinA,LOW);
	digitalWrite(pinB,LOW);
	digitalWrite(pinC,LOW);
	digitalWrite(pinD,LOW);
	digitalWrite(pinE,LOW);
	digitalWrite(pinF,LOW);
	digitalWrite(pinG,LOW);
	digitalWrite(pinPt,LOW);
}

void zero() {
	digitalWrite(pinA,HIGH);
	digitalWrite(pinB,HIGH);
	digitalWrite(pinC,HIGH);
	digitalWrite(pinD,HIGH);
	digitalWrite(pinE,HIGH);
	digitalWrite(pinF,HIGH);
	digitalWrite(pinG,LOW);
	digitalWrite(pinPt,LOW);
}

void one() {
	digitalWrite(pinA,LOW);
	digitalWrite(pinB,HIGH);
	digitalWrite(pinC,HIGH);
	digitalWrite(pinD,LOW);
	digitalWrite(pinE,LOW);
	digitalWrite(pinF,LOW);
	digitalWrite(pinG,LOW);
	digitalWrite(pinPt,LOW);
}

void two() {
	digitalWrite(pinA,HIGH);
	digitalWrite(pinB,HIGH);
	digitalWrite(pinC,LOW);
	digitalWrite(pinD,HIGH);
	digitalWrite(pinE,HIGH);
	digitalWrite(pinF,LOW);
	digitalWrite(pinG,HIGH);
	digitalWrite(pinPt,LOW);
}

void three() {
	digitalWrite(pinA,HIGH);
	digitalWrite(pinB,HIGH);
	digitalWrite(pinC,HIGH);
	digitalWrite(pinD,HIGH);
	digitalWrite(pinE,LOW);
	digitalWrite(pinF,LOW);
	digitalWrite(pinG,HIGH);
	digitalWrite(pinPt,LOW);
}

void four() {
	digitalWrite(pinA,LOW);
	digitalWrite(pinB,HIGH);
	digitalWrite(pinC,HIGH);
	digitalWrite(pinD,LOW);
	digitalWrite(pinE,LOW);
	digitalWrite(pinF,HIGH);
	digitalWrite(pinG,HIGH);
	digitalWrite(pinPt,LOW);
}

void five() {
	digitalWrite(pinA,HIGH);
	digitalWrite(pinB,LOW);
	digitalWrite(pinC,HIGH);
	digitalWrite(pinD,HIGH);
	digitalWrite(pinE,LOW);
	digitalWrite(pinF,HIGH);
	digitalWrite(pinG,HIGH);
	digitalWrite(pinPt,LOW);
}

void six() {
	digitalWrite(pinA,HIGH);
	digitalWrite(pinB,LOW);
	digitalWrite(pinC,HIGH);
	digitalWrite(pinD,HIGH);
	digitalWrite(pinE,HIGH);
	digitalWrite(pinF,HIGH);
	digitalWrite(pinG,HIGH);
	digitalWrite(pinPt,LOW);
}

void seven() {
	digitalWrite(pinA,HIGH);
	digitalWrite(pinB,HIGH);
	digitalWrite(pinC,HIGH);
	digitalWrite(pinD,LOW);
	digitalWrite(pinE,LOW);
	digitalWrite(pinF,LOW);
	digitalWrite(pinG,LOW);
	digitalWrite(pinPt,LOW);
}

void eight() {
	digitalWrite(pinA,HIGH);
	digitalWrite(pinB,HIGH);
	digitalWrite(pinC,HIGH);
	digitalWrite(pinD,HIGH);
	digitalWrite(pinE,HIGH);
	digitalWrite(pinF,HIGH);
	digitalWrite(pinG,HIGH);
	digitalWrite(pinPt,LOW);
}

void nine() {
	digitalWrite(pinA,HIGH);
	digitalWrite(pinB,HIGH);
	digitalWrite(pinC,HIGH);
	digitalWrite(pinD,LOW);
	digitalWrite(pinE,LOW);
	digitalWrite(pinF,HIGH);
	digitalWrite(pinG,HIGH);
	digitalWrite(pinPt,LOW);
}

void letter_A() {
	digitalWrite(pinA,HIGH);
	digitalWrite(pinB,HIGH);
	digitalWrite(pinC,HIGH);
	digitalWrite(pinD,LOW);
	digitalWrite(pinE,HIGH);
	digitalWrite(pinF,HIGH);
	digitalWrite(pinG,HIGH);
	digitalWrite(pinPt,LOW);
}

void letter_a() {
	digitalWrite(pinA,HIGH);
	digitalWrite(pinB,HIGH);
	digitalWrite(pinC,HIGH);
	digitalWrite(pinD,HIGH);
	digitalWrite(pinE,HIGH);
	digitalWrite(pinF,LOW);
	digitalWrite(pinG,HIGH);
	digitalWrite(pinPt,LOW);
}

void letter_B() {
	digitalWrite(pinA,HIGH);
	digitalWrite(pinB,HIGH);
	digitalWrite(pinC,HIGH);
	digitalWrite(pinD,HIGH);
	digitalWrite(pinE,HIGH);
	digitalWrite(pinF,HIGH);
	digitalWrite(pinG,HIGH);
	digitalWrite(pinPt,LOW);
}

void letter_b() {
	digitalWrite(pinA,LOW);
	digitalWrite(pinB,LOW);
	digitalWrite(pinC,HIGH);
	digitalWrite(pinD,HIGH);
	digitalWrite(pinE,HIGH);
	digitalWrite(pinF,HIGH);
	digitalWrite(pinG,HIGH);
	digitalWrite(pinPt,LOW);
}

void letter_C() {
	digitalWrite(pinA,HIGH);
	digitalWrite(pinB,LOW);
	digitalWrite(pinC,LOW);
	digitalWrite(pinD,HIGH);
	digitalWrite(pinE,HIGH);
	digitalWrite(pinF,HIGH);
	digitalWrite(pinG,LOW);
	digitalWrite(pinPt,LOW);
}

void letter_c() {
	digitalWrite(pinA,LOW); 
	digitalWrite(pinB,LOW); 
	digitalWrite(pinC,LOW); 
	digitalWrite(pinD,HIGH); 
	digitalWrite(pinE,HIGH); 
	digitalWrite(pinF,LOW); 
	digitalWrite(pinG,HIGH); 
	digitalWrite(pinPt,LOW); 
}

void letter_D() {
	digitalWrite(pinA,HIGH); 
	digitalWrite(pinB,HIGH); 
	digitalWrite(pinC,HIGH); 
	digitalWrite(pinD,HIGH); 
	digitalWrite(pinE,HIGH); 
	digitalWrite(pinF,LOW); 
	digitalWrite(pinG,LOW); 
	digitalWrite(pinPt,LOW); 
}

void letter_d() {
	digitalWrite(pinA,LOW); 
	digitalWrite(pinB,HIGH); 
	digitalWrite(pinC,HIGH); 
	digitalWrite(pinD,HIGH); 
	digitalWrite(pinE,HIGH); 
	digitalWrite(pinF,LOW); 
	digitalWrite(pinG,HIGH); 
	digitalWrite(pinPt,LOW); 
}

void letter_E() {
	digitalWrite(pinA,HIGH);
	digitalWrite(pinB,LOW);
	digitalWrite(pinC,LOW);
	digitalWrite(pinD,HIGH);
	digitalWrite(pinE,HIGH);
	digitalWrite(pinF,HIGH);
	digitalWrite(pinG,HIGH);
	digitalWrite(pinPt,LOW);
}

void letter_e() {
	digitalWrite(pinA,HIGH); 
	digitalWrite(pinB,HIGH); 
	digitalWrite(pinC,LOW); 
	digitalWrite(pinD,HIGH); 
	digitalWrite(pinE,HIGH); 
	digitalWrite(pinF,HIGH); 
	digitalWrite(pinG,HIGH); 
	digitalWrite(pinPt,LOW); 
}

void letter_F() {
	digitalWrite(pinA,HIGH); 
	digitalWrite(pinB,LOW); 
	digitalWrite(pinC,LOW); 
	digitalWrite(pinD,LOW); 
	digitalWrite(pinE,HIGH); 
	digitalWrite(pinF,HIGH); 
	digitalWrite(pinG,HIGH); 
	digitalWrite(pinPt,LOW); 
}

void letter_f() {
	digitalWrite(pinA,HIGH); 
	digitalWrite(pinB,LOW); 
	digitalWrite(pinC,LOW); 
	digitalWrite(pinD,LOW); 
	digitalWrite(pinE,HIGH); 
	digitalWrite(pinF,HIGH); 
	digitalWrite(pinG,HIGH); 
	digitalWrite(pinPt,LOW); 
}

void letter_G() {
	digitalWrite(pinA,HIGH); 
	digitalWrite(pinB,LOW); 
	digitalWrite(pinC,HIGH); 
	digitalWrite(pinD,HIGH); 
	digitalWrite(pinE,HIGH); 
	digitalWrite(pinF,HIGH); 
	digitalWrite(pinG,LOW); 
	digitalWrite(pinPt,LOW); 
}

void letter_g() {
	digitalWrite(pinA,HIGH); 
	digitalWrite(pinB,HIGH); 
	digitalWrite(pinC,HIGH); 
	digitalWrite(pinD,HIGH); 
	digitalWrite(pinE,LOW); 
	digitalWrite(pinF,HIGH); 
	digitalWrite(pinG,HIGH); 
	digitalWrite(pinPt,LOW); 
}

void letter_H() {
	digitalWrite(pinA,LOW); 
	digitalWrite(pinB,HIGH); 
	digitalWrite(pinC,HIGH); 
	digitalWrite(pinD,LOW); 
	digitalWrite(pinE,HIGH); 
	digitalWrite(pinF,HIGH); 
	digitalWrite(pinG,HIGH); 
	digitalWrite(pinPt,LOW); 
}

void letter_h() {
	digitalWrite(pinA,LOW); 
	digitalWrite(pinB,LOW); 
	digitalWrite(pinC,HIGH); 
	digitalWrite(pinD,LOW); 
	digitalWrite(pinE,HIGH); 
	digitalWrite(pinF,HIGH); 
	digitalWrite(pinG,HIGH); 
	digitalWrite(pinPt,LOW); 
}

void letter_I() {
	digitalWrite(pinA,LOW);
	digitalWrite(pinB,LOW);
	digitalWrite(pinC,LOW);
	digitalWrite(pinD,LOW);
	digitalWrite(pinE,HIGH);
	digitalWrite(pinF,HIGH);
	digitalWrite(pinG,LOW);
	digitalWrite(pinPt,LOW);
}

void letter_i() {
	digitalWrite(pinA,LOW);
	digitalWrite(pinB,LOW);
	digitalWrite(pinC,LOW);
	digitalWrite(pinD,LOW);
	digitalWrite(pinE,HIGH);
	digitalWrite(pinF,LOW);
	digitalWrite(pinG,LOW);
	digitalWrite(pinPt,LOW);
}

void letter_J() {
	digitalWrite(pinA,LOW);
	digitalWrite(pinB,HIGH);
	digitalWrite(pinC,HIGH);
	digitalWrite(pinD,HIGH);
	digitalWrite(pinE,HIGH);
	digitalWrite(pinF,LOW);
	digitalWrite(pinG,LOW);
	digitalWrite(pinPt,LOW);
}

void letter_j() {
	digitalWrite(pinA,LOW);
	digitalWrite(pinB,HIGH);
	digitalWrite(pinC,HIGH);
	digitalWrite(pinD,HIGH);
	digitalWrite(pinE,LOW);
	digitalWrite(pinF,LOW);
	digitalWrite(pinG,LOW);
	digitalWrite(pinPt,LOW);
}

void letter_K() {
	digitalWrite(pinA,LOW);
	digitalWrite(pinB,HIGH);
	digitalWrite(pinC,LOW);
	digitalWrite(pinD,HIGH);
	digitalWrite(pinE,HIGH);
	digitalWrite(pinF,HIGH);
	digitalWrite(pinG,HIGH);
	digitalWrite(pinPt,LOW);
}

void letter_k() {
	digitalWrite(pinA,HIGH);
	digitalWrite(pinB,LOW);
	digitalWrite(pinC,HIGH);
	digitalWrite(pinD,LOW);
	digitalWrite(pinE,HIGH);
	digitalWrite(pinF,HIGH);
	digitalWrite(pinG,HIGH);
	digitalWrite(pinPt,LOW);
}

void letter_L() {
	digitalWrite(pinA,LOW);
	digitalWrite(pinB,LOW);
	digitalWrite(pinC,LOW);
	digitalWrite(pinD,HIGH);
	digitalWrite(pinE,HIGH);
	digitalWrite(pinF,HIGH);
	digitalWrite(pinG,LOW);
	digitalWrite(pinPt,LOW);
}

void letter_l() {
	digitalWrite(pinA,LOW);
	digitalWrite(pinB,LOW);
	digitalWrite(pinC,LOW);
	digitalWrite(pinD,LOW);
	digitalWrite(pinE,HIGH);
	digitalWrite(pinF,HIGH);
	digitalWrite(pinG,LOW);
	digitalWrite(pinPt,LOW);
}

void letter_M() {
	digitalWrite(pinA,HIGH);
	digitalWrite(pinB,LOW);
	digitalWrite(pinC,HIGH);
	digitalWrite(pinD,LOW);
	digitalWrite(pinE,HIGH);
	digitalWrite(pinF,LOW);
	digitalWrite(pinG,LOW);
	digitalWrite(pinPt,LOW);
}

void letter_m() {
	digitalWrite(pinA,LOW);
	digitalWrite(pinB,LOW);
	digitalWrite(pinC,HIGH);
	digitalWrite(pinD,LOW);
	digitalWrite(pinE,HIGH);
	digitalWrite(pinF,LOW);
	digitalWrite(pinG,LOW);
	digitalWrite(pinPt,LOW);
}

void letter_N() {
	digitalWrite(pinA,HIGH);
	digitalWrite(pinB,HIGH);
	digitalWrite(pinC,HIGH);
	digitalWrite(pinD,LOW);
	digitalWrite(pinE,HIGH);
	digitalWrite(pinF,HIGH);
	digitalWrite(pinG,LOW);
	digitalWrite(pinPt,LOW);
}

void letter_n() {
	digitalWrite(pinA,LOW);
	digitalWrite(pinB,LOW);
	digitalWrite(pinC,HIGH);
	digitalWrite(pinD,LOW);
	digitalWrite(pinE,HIGH);
	digitalWrite(pinF,LOW);
	digitalWrite(pinG,HIGH);
	digitalWrite(pinPt,LOW);
}

void letter_O() {
	digitalWrite(pinA,HIGH);
	digitalWrite(pinB,HIGH);
	digitalWrite(pinC,HIGH);
	digitalWrite(pinD,HIGH);
	digitalWrite(pinE,HIGH);
	digitalWrite(pinF,HIGH);
	digitalWrite(pinG,LOW);
	digitalWrite(pinPt,LOW);
}

void letter_o() {
	digitalWrite(pinA,LOW);
	digitalWrite(pinB,LOW);
	digitalWrite(pinC,HIGH);
	digitalWrite(pinD,HIGH);
	digitalWrite(pinE,HIGH);
	digitalWrite(pinF,LOW);
	digitalWrite(pinG,HIGH);
	digitalWrite(pinPt,LOW);
}

void letter_P() {
	digitalWrite(pinA,HIGH);
	digitalWrite(pinB,HIGH);
	digitalWrite(pinC,LOW);
	digitalWrite(pinD,LOW);
	digitalWrite(pinE,HIGH);
	digitalWrite(pinF,HIGH);
	digitalWrite(pinG,HIGH);
	digitalWrite(pinPt,LOW);
}

void letter_p() {
	digitalWrite(pinA,HIGH);
	digitalWrite(pinB,HIGH);
	digitalWrite(pinC,LOW);
	digitalWrite(pinD,LOW);
	digitalWrite(pinE,HIGH);
	digitalWrite(pinF,HIGH);
	digitalWrite(pinG,HIGH);
	digitalWrite(pinPt,LOW);
}

void letter_Q() {
	digitalWrite(pinA,HIGH);
	digitalWrite(pinB,HIGH);
	digitalWrite(pinC,LOW);
	digitalWrite(pinD,HIGH);
	digitalWrite(pinE,LOW);
	digitalWrite(pinF,HIGH);
	digitalWrite(pinG,HIGH);
	digitalWrite(pinPt,LOW);
}

void letter_q() {
	digitalWrite(pinA,HIGH);
	digitalWrite(pinB,HIGH);
	digitalWrite(pinC,HIGH);
	digitalWrite(pinD,LOW);
	digitalWrite(pinE,LOW);
	digitalWrite(pinF,HIGH);
	digitalWrite(pinG,HIGH);
	digitalWrite(pinPt,LOW);
}

void letter_R() {
	digitalWrite(pinA,HIGH);
	digitalWrite(pinB,HIGH);
	digitalWrite(pinC,LOW);
	digitalWrite(pinD,LOW);
	digitalWrite(pinE,HIGH);
	digitalWrite(pinF,HIGH);
	digitalWrite(pinG,LOW);
	digitalWrite(pinPt,LOW);
}

void letter_r() {
	digitalWrite(pinA,LOW);
	digitalWrite(pinB,LOW);
	digitalWrite(pinC,LOW);
	digitalWrite(pinD,LOW);
	digitalWrite(pinE,HIGH);
	digitalWrite(pinF,LOW);
	digitalWrite(pinG,HIGH);
	digitalWrite(pinPt,LOW);
}

void letter_S() {
	digitalWrite(pinA,HIGH);
	digitalWrite(pinB,LOW);
	digitalWrite(pinC,HIGH);
	digitalWrite(pinD,HIGH);
	digitalWrite(pinE,LOW);
	digitalWrite(pinF,HIGH);
	digitalWrite(pinG,HIGH);
	digitalWrite(pinPt,LOW);
}

void letter_s() {
	digitalWrite(pinA,HIGH);
	digitalWrite(pinB,LOW);
	digitalWrite(pinC,HIGH);
	digitalWrite(pinD,HIGH);
	digitalWrite(pinE,LOW);
	digitalWrite(pinF,HIGH);
	digitalWrite(pinG,HIGH);
	digitalWrite(pinPt,LOW);
}

void letter_T() {
	digitalWrite(pinA,HIGH);
	digitalWrite(pinB,HIGH);
	digitalWrite(pinC,HIGH);
	digitalWrite(pinD,LOW);
	digitalWrite(pinE,LOW);
	digitalWrite(pinF,LOW);
	digitalWrite(pinG,LOW);
	digitalWrite(pinPt,LOW);
}

void letter_t() {
	digitalWrite(pinA,LOW);
	digitalWrite(pinB,LOW);
	digitalWrite(pinC,LOW);
	digitalWrite(pinD,HIGH);
	digitalWrite(pinE,HIGH);
	digitalWrite(pinF,HIGH);
	digitalWrite(pinG,HIGH);
	digitalWrite(pinPt,LOW);
}

void letter_U() {
	digitalWrite(pinA,LOW);
	digitalWrite(pinB,HIGH);
	digitalWrite(pinC,HIGH);
	digitalWrite(pinD,HIGH);
	digitalWrite(pinE,HIGH);
	digitalWrite(pinF,HIGH);
	digitalWrite(pinG,LOW);
	digitalWrite(pinPt,LOW);
}

void letter_u() {
	digitalWrite(pinA,LOW);
	digitalWrite(pinB,LOW);
	digitalWrite(pinC,HIGH);
	digitalWrite(pinD,HIGH);
	digitalWrite(pinE,HIGH);
	digitalWrite(pinF,LOW);
	digitalWrite(pinG,LOW);
	digitalWrite(pinPt,LOW);
}

void letter_V() {
	digitalWrite(pinA,LOW);
	digitalWrite(pinB,HIGH);
	digitalWrite(pinC,LOW);
	digitalWrite(pinD,LOW);
	digitalWrite(pinE,HIGH);
	digitalWrite(pinF,HIGH);
	digitalWrite(pinG,HIGH);
	digitalWrite(pinPt,LOW);
}

void letter_v() {
	digitalWrite(pinA,LOW);
	digitalWrite(pinB,HIGH);
	digitalWrite(pinC,LOW);
	digitalWrite(pinD,LOW);
	digitalWrite(pinE,LOW);
	digitalWrite(pinF,HIGH);
	digitalWrite(pinG,HIGH);
	digitalWrite(pinPt,LOW);
}

void letter_W() {
	digitalWrite(pinA,LOW);
	digitalWrite(pinB,HIGH);
	digitalWrite(pinC,HIGH);
	digitalWrite(pinD,HIGH);
	digitalWrite(pinE,HIGH);
	digitalWrite(pinF,HIGH);
	digitalWrite(pinG,HIGH);
	digitalWrite(pinPt,LOW);
}

void letter_w() {
	digitalWrite(pinA,LOW);
	digitalWrite(pinB,HIGH);
	digitalWrite(pinC,LOW);
	digitalWrite(pinD,HIGH);
	digitalWrite(pinE,LOW);
	digitalWrite(pinF,HIGH);
	digitalWrite(pinG,LOW);
	digitalWrite(pinPt,LOW);
}

void letter_X() {
	digitalWrite(pinA,LOW);
	digitalWrite(pinB,LOW);
	digitalWrite(pinC,HIGH);
	digitalWrite(pinD,LOW);
	digitalWrite(pinE,LOW);
	digitalWrite(pinF,HIGH);
	digitalWrite(pinG,HIGH);
	digitalWrite(pinPt,LOW);
}

void letter_x() {
	digitalWrite(pinA,LOW);
	digitalWrite(pinB,LOW);
	digitalWrite(pinC,HIGH);
	digitalWrite(pinD,LOW);
	digitalWrite(pinE,LOW);
	digitalWrite(pinF,HIGH);
	digitalWrite(pinG,HIGH);
	digitalWrite(pinPt,LOW);
}

void letter_Y() {
	digitalWrite(pinA,LOW);
	digitalWrite(pinB,HIGH);
	digitalWrite(pinC,HIGH);
	digitalWrite(pinD,HIGH);
	digitalWrite(pinE,LOW);
	digitalWrite(pinF,HIGH);
	digitalWrite(pinG,HIGH);
	digitalWrite(pinPt,LOW);
}

void letter_y() {
	digitalWrite(pinA,LOW);
	digitalWrite(pinB,HIGH);
	digitalWrite(pinC,HIGH);
	digitalWrite(pinD,HIGH);
	digitalWrite(pinE,LOW);
	digitalWrite(pinF,HIGH);
	digitalWrite(pinG,HIGH);
	digitalWrite(pinPt,LOW);
}

void letter_Z() {
	digitalWrite(pinA,HIGH);
	digitalWrite(pinB,HIGH);
	digitalWrite(pinC,LOW);
	digitalWrite(pinD,HIGH);
	digitalWrite(pinE,HIGH);
	digitalWrite(pinF,LOW);
	digitalWrite(pinG,HIGH);
	digitalWrite(pinPt,LOW);
}

void letter_z() {
	digitalWrite(pinA,HIGH);
	digitalWrite(pinB,HIGH);
	digitalWrite(pinC,LOW);
	digitalWrite(pinD,HIGH);
	digitalWrite(pinE,HIGH);
	digitalWrite(pinF,LOW);
	digitalWrite(pinG,HIGH);
	digitalWrite(pinPt,LOW);
}

#endif
