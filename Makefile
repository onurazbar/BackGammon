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

$(OBJDIR)/Main.o: $(SRCDIR)/Main.cpp $(OBJDIR)/Game.o
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(OBJDIR)/Game.o: $(SRCDIR)/Game.cpp $(SRCDIR)/Game.hpp $(OBJDIR)/Board.o $(OBJDIR)/Player.o
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(OBJDIR)/Board.o: $(SRCDIR)/Board.cpp $(SRCDIR)/Board.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(OBJDIR)/Player.o: $(SRCDIR)/Player.cpp $(SRCDIR)/Player.hpp $(SRCDIR)/Color.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(OBJDIR)/Disc.o: $(SRCDIR)/Disc.cpp $(SRCDIR)/Disc.hpp $(SRCDIR)/Color.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(BINDIR) $(OBJDIR)