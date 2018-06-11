-include ../../../common.mk
# To compile do make OPTS="-DCKL_HYBRID -DPAPI_PROFILING -lpapi"
USEROPTS=-O3 -g -DCKL_HYBRID -lpthread
#CHARMDIR=/scratch/harshitha/charm_cklvivek
CHARMDIR=~/charm
CHARMINC=$(CHARMDIR)/include
OPTS=-I$(CHARMINC) $(USEROPTS)
CHARMC=$(CHARMDIR)/bin/charmc $(OPTS)
CHARMLIB=$(CHARMDIR)/lib

all: prk

prk: prk.o
	$(CHARMC) -language charm++ -o prk prk.o -module CommonLBs -module liveViz
	#$(CHARMC) -language charm++ -o prk.prj prk.o  -tracemode projections

prk-withomp: prk-withomp.o
	$(CHARMC) -language charm++ -o prk-withomp prk-withomp.o -fopenmp -module liveViz
	#$(CHARMC) -language charm++ -o prk.prj prk.o  -tracemode projections

prk.decl.h: prk.ci
	$(CHARMC)  prk.ci

prk.o: prk.C prk.decl.h
	$(CHARMC) -c prk.C

prk-withomp.o: prk-withomp.cc prk.decl.h
	$(CHARMC) -fopenmp -c prk-withomp.cc

clean:
	rm -f *.decl.h *.def.h conv-host *.o prk prk.prj charmrun *.log *.sum *.sts

test: all
	./charmrun +p4 ++local ./prk 32 400 2048 PATCH 2 2 4 4 16 32 ++ppn 4 +pemap 0-3

bgtest: all
	$(call run, ./prk +p4 10 +x2 +y2 +z2 +cth1 +wth1)
