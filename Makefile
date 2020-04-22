CXX      ?= g++
CXXFLAGS  = -std=c++11 -Wall -Wextra -Wno-missing-field-initializers -g -O3
LIBS      = -lm -lz -lpthread

PREFIX    = $(DESTDIR)/usr/local
BINDIR    = $(PREFIX)/bin

ofiles    = src/random-genome.cpp.o
hfiles    = $(wildcard src/*.h)

.PHONY: all clean install

all: random-genome

install: random-genome
	install  random-genome $(BINDIR)/random-genome
	install  $(MANPAGE) $(MANDIR)/$(MANPAGE)

random-genome: $(ofiles)
	$(CXX) $(CXXFLAGS) $(DFLAGS) $(ofiles) -o $@ -L. $(LIBS) $(HTSLIB)

src/%.cpp.o: src/%.cpp $(hfiles)
	$(CXX) $(CXXFLAGS) $(DFLAGS) -c $< -o $@

clean:
	rm -f src/*.o
	rm -f random-genome

