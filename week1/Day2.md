# Day2 2024.6.26

## Target

- CPP贪吃蛇小游戏
    - 如何在屏幕上绘制图形
    - 如何实现与键盘的交互
- chisel-npc通过cpu-test(add add-longlong bit)
- Compiler 3 session

## Logs
- 明天就是离开学校的日子了，希望未来能够越来越好
- [课程链接CS143]<https://web.stanford.edu/class/cs143/>
- 完成了NPC的chisel-difftest
    - 需要的处理的问题是Vec被Chisel编译后是打散的，用firtooloption+="-preserve-aggregate=1d-vec"解决，需要注意的是其与“disallowPackedArrays”相互冲突
- 一个跨平台绘制图形的库（SFML），同时可以与键盘交互，根据Example初步构建了Snake Class

## 课程记录

> 略过了关于Cool语言的教程

### 词法分析
    - 找出Program中的一个个“tokens”，token可以是:
        - identify（通常限定以字母开头
        - whitespace
        - keyword
        - number
        - operator
        - close/open parentheses
    - 将Program中的字符串通过role对应到token中
    - token是<token class, lexeme>，词素（lexeme）单一语法含义的最小单位
        - <number,5>
        - <identify,x>
        - <keyword,if>