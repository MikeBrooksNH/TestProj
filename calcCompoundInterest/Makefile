## -*- Makefile -*-
##
## User: mbrooks
## Time: Sep 21, 2014 4:56:43 PM
## Makefile created by Oracle Solaris Studio.
##
## This file is generated automatically.
##


#### Compiler and tool definitions shared by all build targets #####
CC = gcc
BASICOPTS = -g
CFLAGS = $(BASICOPTS)
LDFLAGS=-lm

# Define the target directories.
TARGETDIR_InterestUnitTests=GNU-amd64-Linux


all: $(TARGETDIR_InterestUnitTests)/InterestUnitTests clean

## Target: InterestUnitTests
CPPFLAGS_InterestUnitTests = \
	-IunitTests.c \
	-Ifunctions.c \
	-Imain.cpp
OBJS_InterestUnitTests =  \
	$(TARGETDIR_InterestUnitTests)/unitTests.o \
	$(TARGETDIR_InterestUnitTests)/functions.o
SYSLIBS_InterestUnitTests = -lm 
USERLIBS_InterestUnitTests = $(SYSLIBS_InterestUnitTests) 
DEPLIBS_InterestUnitTests =  
LDLIBS_InterestUnitTests = $(USERLIBS_InterestUnitTests)


# Link or archive
$(TARGETDIR_InterestUnitTests)/InterestUnitTests: $(TARGETDIR_InterestUnitTests) $(OBJS_InterestUnitTests) $(DEPLIBS_InterestUnitTests)
	$(LINK.c) $(CFLAGS_InterestUnitTests) $(CPPFLAGS_InterestUnitTests) -o $@ $(OBJS_InterestUnitTests) $(LDLIBS_InterestUnitTests)


# Compile source files into .o files
$(TARGETDIR_InterestUnitTests)/unitTests.o: $(TARGETDIR_InterestUnitTests) unitTests.c
	$(COMPILE.c) $(CFLAGS_InterestUnitTests) $(CPPFLAGS_InterestUnitTests) -o $@ unitTests.c

$(TARGETDIR_InterestUnitTests)/functions.o: $(TARGETDIR_InterestUnitTests) functions.c
	$(COMPILE.c) $(CFLAGS_InterestUnitTests) $(CPPFLAGS_InterestUnitTests) -o $@ functions.c



## Target: clean
clean: 


#### Clean target deletes all generated files ####
clean:
	rm -f \
		$(TARGETDIR_InterestUnitTests)/InterestUnitTests \
		$(TARGETDIR_InterestUnitTests)/unitTests.o \
		$(TARGETDIR_InterestUnitTests)/functions.o
	rm -f -r $(TARGETDIR_InterestUnitTests)


# Create the target directory (if needed)
$(TARGETDIR_InterestUnitTests):
	mkdir -p $(TARGETDIR_InterestUnitTests)


# Enable dependency checking
.KEEP_STATE:
.KEEP_STATE_FILE:.make.state.GNU-amd64-Linux

