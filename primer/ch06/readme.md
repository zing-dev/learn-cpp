# const

## 顶层const
指针本身就是就是一个常量
```c
int i = 0;
int* const pi = &i;
const int ci = 42
```
## 底层const
指针指向的对象是一个常量
```c
const int *p2 = &ci;
```