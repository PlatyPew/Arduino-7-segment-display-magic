# 7 segment display
Just magic (I'm using an arduino uno)

Pin numbers of the LED display start from the bottom left and work it's way anti-clockwise

# How to use the thing
`sudo python word_gen.py; sudo ./upload.sh`

# Stuff to change
In the Makefile, you need the change the `ARDUINO_PORT` to something else

To know which port to use, you can try using `dmesg`
