## Process this file with automake to produce Makefile.in

INCLUDES = \
	-DPACKAGE_DATA_DIR=\""$(datadir)"\" \
	-DPACKAGE_LOCALE_DIR=\""$(prefix)/$(DATADIRNAME)/locale"\" \
	@PACKAGE_CFLAGS@

bin_PROGRAMS = timemachine

timemachine_SOURCES = callbacks.c  main.c  main.h  meters.h  threads.c  threads.h

timemachine_LDADD = @PACKAGE_LIBS@
