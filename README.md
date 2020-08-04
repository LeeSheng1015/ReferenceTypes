#  引用类型
## 引用
- 格式：类型名& 变量名 `int& original_ref = original`
- 引用是变量的别名
## 指针
- 格式：类型名* 变量名  = &变量名`int *Proc_addr = &Proc`
- 指针指向地址
- 选取指针所指位置变量(解引用）：`* Proc`;
## 字符指针
- 字符指针指向字符数组第一位`char upper[] = "ABC?E";char* upper_ptr = upper`
- 不需要符号&
## 箭头操作符
- dereference 
- access a membe
- `years_ptr->set_year(2020);`
## This指针
- 表示当前的类`this->year = year`
## 单向链表
`Element* next{};void insert_after(Element* new_element){new_element->next = next;next = new_element;}`
## 初始化类成员
- 格式：` Avout(const char* name, int year_apert): name {name}, apert{year_apert} {}`
