# Day1 2024.6.25

## Target

- 用CPP初步构建贪吃蛇小游戏的基本Class，完成线性表的练习
- chisel-npc通过cpu-test(add add-longlong bit)
- Compiler的前三课

## Logs

- 下午三点搭建好个人主页，希望在晚上十二点完成今天目标

## 课程记录

### Compiler1

Compiler: 程序通过编译器输出可执行文件(off-line)，数据输入进可执行文件输出

Interpreter: 程序和数据通过解释器进行输出，在执行程序前不会对程序进行任何处理(On-line),Python是通过解释器运行的

Comparison of Two Method:

- 解释器的运行比编译器得到的可执行文件运行要慢
- 解释器占用大量的内存空间
- 解释器可以跨平台工作(不同的架构下运行相同的代码)
- 解释器逐行解释和执行代码，因此在出现错误时，可以更容易地追踪和调试，因为错误消息通常与源代码行号相关联

Compiler Structure:

- Lexical Analysis(词法分析)
- Parsing(语法分析)
- Semantic Analysis(语义分析)
    - Compiler Frontend
- Optimization(Runfaster or Use less memory)
    - Compiler Middle-end
- Code Generation(High Level Language -> MachineCode/Other Language/ByteCode)
    - Compiler Backend

### Compiler2

> 课程对Compiler的各个结构举例说明

- Lexical Analysis:将程序划分为一个个"tokens"
- Parsing:通过"Tree"的数据结构，将整个Sentence中的"tokens"分为不同的Type
- Semantic Analysis:理解程序的语义(通过编程的规则)，这部分比较抽象，在下面例子中程序输出4
    - {
        int a = 3;
        {
            int a = 4;
            cout << a; //作用域
        }
    }
- Optimization:优化将要生成的代码，但不是所有的内容都可以优化
    - x = y * 0; //对于浮点数来说并不一定可以优化(IEE754 Standing y=NAN)
- Code Generation:生成汇编代码，professor说这部分最简单
    - 编译器在将高级语言转换为汇编代码时，可以基本上按照源代码的结构和语义逐行地生成对应的汇编指令，而不必考虑复杂的优化和目标平台细节(from GPT)

> 现代编译器在不同阶段的代码量  
    Lex(small)->Parsing(samll)->Semantic(middle)->Optimization(huge)->Code Gen(small)

### Compiler3