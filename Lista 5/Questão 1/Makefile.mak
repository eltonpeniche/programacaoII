CPP    = g++
RM     = rm -f
OBJS   = main.o \
         pessoa.o \
         pessoafisica.o \
         pessoajuridica.o \
         funcionario.o \
         cliente.o \
         empresa.o

LIBS   =
CFLAGS =

.PHONY: questão1.exe clean clean-after

all: questão1.exe

clean:
	$(RM) $(OBJS) questão1.exe

clean-after:
	$(RM) $(OBJS)

questão1.exe: $(OBJS)
	$(CPP) -Wall -s -o $@ $(OBJS) $(LIBS)

main.o: main.cpp pessoa.h pessoajuridica.h funcionario.h cliente.h
	$(CPP) -Wall -s -c $< -o $@ $(CFLAGS)

pessoa.o: pessoa.cpp pessoa.h
	$(CPP) -Wall -s -c $< -o $@ $(CFLAGS)

pessoafisica.o: pessoafisica.cpp pessoafisica.h
	$(CPP) -Wall -s -c $< -o $@ $(CFLAGS)

pessoajuridica.o: pessoajuridica.cpp pessoajuridica.h
	$(CPP) -Wall -s -c $< -o $@ $(CFLAGS)

funcionario.o: funcionario.cpp funcionario.h
	$(CPP) -Wall -s -c $< -o $@ $(CFLAGS)

cliente.o: cliente.cpp cliente.h
	$(CPP) -Wall -s -c $< -o $@ $(CFLAGS)

empresa.o: empresa.cpp empresa.h
	$(CPP) -Wall -s -c $< -o $@ $(CFLAGS)

