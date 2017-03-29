#!/usr/bin/python

print 'Please enter your phrase here!'
phrase = raw_input('> ')
phrase = list(phrase)
print 'Please enter delay(ms)!'
delay = int(raw_input('> '))

f = open('7seg.ino','w')

f.write('#include "letters.h"\n')
f.write('void setup(){\n\tpinMode(pinA,OUTPUT);\n\tpinMode(pinB,OUTPUT);\n\tpinMode(pinC,OUTPUT);\n\tpinMode(pinD,OUTPUT);\n\tpinMode(pinE,OUTPUT);\n\tpinMode(pinF,OUTPUT);\n\tpinMode(pinG,OUTPUT);\n\tpinMode(pinPt,OUTPUT);\n}\n\nvoid loop() {\n\tblank();\n\tdelay(500);')

for i in phrase:
	if i == ' ':
		f.write('\n\tblank();')
	elif i == '0':
		f.write('\n\tzero();')
	elif i == '1':
		f.write('\n\tone();')
	elif i == '2':
		f.write('\n\ttwo();')
	elif i == '3':
		f.write('\n\tthree();')
	elif i == '4':
		f.write('\n\tfour();')
	elif i == '5':
		f.write('\n\tfive();')
	elif i == '6':
		f.write('\n\tsix();')
	elif i == '7':
		f.write('\n\tseven();')
	elif i == '8':
		f.write('\n\teight();')
	elif i == '9':
		f.write('\n\tnine();')
	else:
		f.write('\n\tletter_%s();' % (i))
	f.write('\n\tdelay(%d);' % (delay))
	#f.write('\n\tblank();\n\tdelay(20);')
f.write('\n}\n')
