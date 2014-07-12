CC	= gcc
CFLAGS	= -O2 -g -Wall `pkg-config --cflags xaw7`
LIBS	= `pkg-config --libs xaw7`

send_key_using_adb_from_xwindow: send_key_using_adb_from_xwindow.c
	$(CC) $(CFLAGS) $(LIBS) -o $@ $<
