CC	= gcc
CFLAGS	= -O2 -g -Wall `pkg-config --cflags xaw7`
LIBS	= `pkg-config --libs xaw7`

all: send_key_to_android_via_adb_from_xwindow

clean:
	rm send_key_to_android_via_adb_from_xwindow

send_key_to_android_via_adb_from_xwindow: send_key_to_android_via_adb_from_xwindow.c
	$(CC) $(CFLAGS) $(LIBS) -o $@ $<
