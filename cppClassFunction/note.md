#c++第二次例会


##类是什么(review)

类是一种将抽象转换为用户定义类型的c++工具，它将数据表示和调用数据的方法组合成一个简介的包。

Class 是一种数据类型, 其变量为对象。

##接口（常用名词）

 有时候，我们得提供一些接口给别人使用。接口的作用，就是提供一个与其他系统交互的方法。其他系统无需了解你内部细节，并且也无法了解内部细节，只能通过你提供给外部的接口来与你进行通信。

c++中并没有和java一样的接口（interface）类，在c++中接口的含义就是通常意义上的接口而已。



##tips

*头文件* 中的 ```  #ifndef/#define/#endif  ``` 防止该头文件被重复引用


##std
[std](http://www.cnblogs.com/renyuan/archive/2013/05/30/3108626.html)

命名空间std

C++标准中引入命名空间的概念，是为了解决不同模块或者函数库中相同标识符冲突的问题。

C＋＋标准程序库中的所有标识符都被定义于一个名为std的namespace中。由于namespace的概念，使用C＋＋标准程序库的任何标识符时，可以有三种选择：

1、直接指定标识符。例如std::ostream而不是ostream。完整语句如下：

2、使用using关键字。

3、最方便的就是使用```using namespace std;```


##成员函数

类比c结构体
>C++中struct里是可以定义成员函数，C中不行，不过你可以定义一个函数指针变量

对象包含有member variables(成员变量)和member functions(成员函数).

在类(class)中 , 成员函数及成员变量会分为两大类 : public members (公开成员)、private members (私有成员)

1.) public members :被定义为public members 的成员函数及成员变量 , 可在任何的函数中被使用 .包括main函数,及其它非成员函数.

2.) private members :被定义为private members 的成员函数及成员变量 , 只能在成员函数中被使用 .

类的方法（函数）可以访问类的private组件。

```
class Date{
      int year, month, day;
  public:
      void set(int y,int m,int d);  // 赋值操作
      bool isLeapYear();              // 判断闰年
      void print();                    // 输出日期
};
```

成员函数在 **类外部定义** 时，在**函数名称前**应加上日期类名前缀Date和命名空间引导符“::”，它表示着自己属于某一个名空间(类)，与普通函数相区别。

```
void Date::set(int y,int m,int d)  {   year=y;  month=m;  day=d;  }
```

**访问成员函数的方式**

 （1）对象方式

 ```
 Date d;
 d.set(2011,12,5);
 ```

 （2）对象指针方式
```
Date* dp = new Date;
dp->set(2011,12,5);
delete dp;
```

##构造函数

类构造函数 专门用于构造新对象，将值赋给他们的数据成员。

构造函数和类名称相同。通过函数重载,可以创建多个同名的构造函数,条件是每个函数的参数列表(或称为特征标)不同.

初始化时应该于构造函数参数列表相匹配.

构造函数没有被声明类型，没有返回值。与c++编译器有关，感兴趣的同学可以去了解相关知识。


>编译器 [维基百科](https://en.wikipedia.org/wiki/Compiler)

>A compiler is a computer program (or a set of programs) that transforms source code written in a programming language (the source language) into another computer language (the target language), with the latter often having a binary form known as object code.The most common reason for converting source code is to create an executable program.

**使用构造函数的两种方式**:

显示调用构造函数,隐式调用构造函数

无法使用对象来调用构造函数,因为在构造函数构造出对象之前,对象是不存在的.构造函数被用来创建对象,而不能通过对象来调用.

**默认构造函数**.

默认构造函数可能是这样的:
```
Date::Date()  { }
```

默认构造函数没有参数,因为默认构造函数的声明中不能包含值.

定义默认构造函数两种方式:

1.给已有的构造函数的所有参数提供默认值
2.通过函数重载来定义另一个没有参数的构造函数,如```Date();```

##析构函数

防止内存泄露的好习惯.

析构函数完成清理工作.析构函数的特征是在类名前加~,如```~Date();```

析构函数通常不能在代码中显示的调用,但是有例外情况(在此不表).




##this指针

每个成员函数（包括 *构造函数* 和 *析构函数* ）都有一个 *this指针*。 this 指针 指向调用成员函数的对象。

如果方法要引用整个调用对象，则可以使用  ```*this```  表达式。
