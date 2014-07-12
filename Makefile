CC	= gcc
CFLAGS	= -O2 -g -Wall `pkg-config --cflags gtk+-3.0`
LIBS	= `pkg-config --libs gtk+-3.0`

send_key_using_adb_from_xwindow: send_key_using_adb_from_xwindow.c
	$(CC) $(CFLAGS) $(LIBS) -o $@ $<
