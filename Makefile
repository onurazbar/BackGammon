EXEC = backgammon

BINDIR = bin
OBJDIR = obj
SRCDIR = src

CXX = g++
CXXFLAGS = -Wall

SOURCES = $(wildcard $(SRCDIR)/*.cpp)
OBJECTS = $(SOURCES:$(SRCDIR)/%.cpp=$(OBJDIR)/%.o)

$(BINDIR)/$(EXEC): $(OBJDIR) $(OBJECTS) $(BINDIR)
	$(CXX) $(OBJECTS) -o $@

$(BINDIR):
	mkdir -p ./$(BINDIR)

$(OBJDIR):
	mkdir -p ./$(OBJDIR)

$(OBJDIR)/Main.o: $(SRCDIR)/Main.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(OBJDIR)/Player.o: $(SRCDIR)/Player.cpp $(SRCDIR)/Player.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(OBJDIR)/Disc.o: $(SRCDIR)/Disc.cpp $(SRCDIR)/Disc.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(BINDIR) $(OBJDIR)