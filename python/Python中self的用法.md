# Python中self的用法
先了解下python中的类
1. 定义类如下：
```
class Student(object):
    pass
```
（Object）表示该类从哪个类继承下来的，Object类是所有类都会继承的类。
2. 实例：定义好了类，就可以通过Student类创建出Student的实例，创建实例是通过类名+()实现：
```
student = Student()
```
3. 由于类起到模板的作用，因此，可以在创建实例的时候，把我们认为必须绑定的属性强制填写进去。这里就用到Python当中的一个内置方法__init__方法，例如在Student类时，把name、score等属性绑上去:
```
class Student(object):
    def __init__(self, name, score):
        self.name = name
        self.score = score
```
这里注意：（1）、__init__方法的第一参数永远是self，表示创建的类实例本身，因此，在__init__方法内部，就可以把各种属性绑定到self，因为self就指向创建的实例本身。（2）、有了__init__方法，在创建实例的时候，就不能传入空的参数了，必须传入与__init__方法匹配的参数，但self不需要传，Python解释器会自己把实例变量传进去：
```
>>>student = Student(“Hugh”, 99)
>>>student.name
"Hugh"
>>>student.score
99
```
4. 和普通数相比，在类中定义函数只有一点不同，就是第一参数永远是类的本身实例变量self，并且调用时，不用传递该参数。除此之外，类的方法(函数）和普通函数没啥区别，你既可以用默认参数、可变参数或者关键字参数（*args是可变参数，args接收的是一个tuple，**kw是关键字参数，kw接收的是一个dict）
5. 既然**Student**类实例本身就拥有这些数据，那么要访问这些数据，就没必要从外面的函数去访问，而可以直接在Student类的内部定义访问数据的函数（方法），这样，就可以把”数据”封装起来。这些封装数据的函数是和Student类本身是关联起来的，称之为类的方法：
```
class Student(obiect):
    def __init__(self, name, score):
        self.name = name
        self.score = score
    def print_score(self):
        print "%s: %s" % (self.name, self.score)
```
如果要让内部属性不被外部访问，可以把属性的名称前加上两个下划线**，在Python中，实例的变量名如果以 __**开头，就变成了一个私有变量（private），只有内部可以访问，外部不能访问，所以，我们把Student类改一改：
```
class Student(object):

    def __init__(self, name, score):
        self.__name = name
        self.__score = score
    def print_score(self):
        print "%s: %s" %(self.__name,self.__score)
```
6. self的仔细用法
（1）、**self代表类的实例，而非类。**
（2）、**self可以不写吗？**
	self在定义时不可以省略
当然，如果我们的定义和调用时均不传类实例是可以的，这就是类方法。
```
class Test:
    def ppr():
        print(__class__)

Test.ppr()

运行结果：
<class ‘__main__.Test’>
```
（3）、**在继承时，传入的是哪个实例，就是那个传入的实例，而不是指定义了self的类的实例。**
```
class Parent:
    def pprt(self):
        print(self)

class Child(Parent):
    def cprt(self):
        print(self)
c = Child()
c.cprt()
c.pprt()
p = Parent()
p.pprt()
```
运行结果：
```
<__main__.Child object at 0x0000000002A47080>
<__main__.Child object at 0x0000000002A47080>
<__main__.Parent object at 0x0000000002A47240>

```
解释：
运行c.cprt()时应该没有理解问题，指的是Child类的实例。
但是在运行c.pprt()时，等同于Child.pprt(c)，所以self指的依然是Child类的实例，由于self中没有定义pprt()方法，所以沿着继承树往上找，发现在父类Parent中定义了pprt()方法，所以就会成功调用。
（4）、**在描述符类中，self指的是描述符类的实例**
```
class Desc:
    def __get__(self, ins, cls):
        print('self in Desc: %s ' % self )
        print(self, ins, cls)
class Test:
    x = Desc()
    def prt(self):
        print('self in Test: %s' % self)
t = Test()
t.prt()
t.x
```
运行结果如下：
```
self in Test: <__main__.Test object at 0x0000000002A570B8>
self in Desc: <__main__.Desc object at 0x000000000283E208>
<__main__.Desc object at 0x000000000283E208> <__main__.Test object at 0x0000000002A570B8> <class '__main__.Test'>
```