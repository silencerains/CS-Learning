# 编译器
CXX := g++

# 编译选项
CXXFLAGS := -std=c++11 -Wall

# SFML库链接选项
SFML_LIBS := -lsfml-graphics -lsfml-window -lsfml-system

# 源文件目录
SRCDIR := src

# 输出目录
BINDIR := bin

# 可执行文件名
TARGET := sfml-app

# 获取所有源文件
CSRCS := $(shell find $(SRCDIR) -name "*.cpp")

# 生成目标文件名列表
OBJS := $(patsubst $(SRCDIR)/%.cpp,$(BINDIR)/%.o,$(CSRCS))

# 默认目标
all: $(TARGET)

# 生成可执行文件
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS) $(SFML_LIBS)

# 编译每个源文件为目标文件
$(BINDIR)/%.o: $(SRCDIR)/%.cpp
	@mkdir -p $(@D)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# 清理目标文件和可执行文件
clean:
	rm -rf $(BINDIR) $(TARGET)

# 防止make命令误解为文件名
.PHONY: all clean