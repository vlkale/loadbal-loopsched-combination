CHARMHOME=~/Documents/personal/charm
CHARMC=$(CHARMHOME)/bin/charmc -I.
CXX=$(CHARMC)

OPTS ?= -g
CXXFLAGS += -DAMR_REVISION=$(REVNUM) $(OPTS)

OBJS = OctIndex.o Advection.o Main.o

all: advection

advection: $(OBJS)
	$(CHARMC) $(CXXFLAGS) $(LDFLAGS) -module CkLoop -language charm++ -o $@ $^ -module CommonLBs

advection_withprojections: $(OBJS)
	$(CHARMC) $(CXXFLAGS) $(LDFLAGS) -tracemode projections -module CkLoop -language charm++ -o $@ $^ -module CommonLBs

Advection.decl.h Main.decl.h: advection.ci.stamp
advection.ci.stamp: advection.ci
	$(CHARMC) $<
	touch $@

Advection.o: Advection.C Advection.h OctIndex.h Main.decl.h Advection.decl.h
Main.o: Main.C Advection.h OctIndex.h Main.decl.h Advection.decl.h
OctIndex.o: OctIndex.C OctIndex.h Advection.decl.h

test: all
	./charmrun +p7 ++local ./advection 3 32 10 9 64 1 1 ++ppn 7
	#./charmrun +p7 ++local ./advection 3 32 30 9 64 0.5 4 +balancer GreedyLB ++ppn 7

clean:
	rm -f *.decl.h *.def.h conv-host *.o advection charmrun advection.ci.stamp

bgtest: all
	./charmrun advection +p4 10 +x2 +y2 +z2 +ppn 4
