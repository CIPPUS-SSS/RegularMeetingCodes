#coding: utf-8

class person():#基类
    school = 'dlut'
    # identity = None
    age = None
    name  = None

class student(person):
    identity = 'student'

class teacher(person):
    identity = 'teacher'

def main_1():
    '''
    类class指的是具有相同性质和行为功能的抽象。
    c++中，定义一个类只是定义了一种新的数据类型，可以用这种类型定义变量。
    用定义的class类型定义的变量成为对象，对象是类的变量，类的对象也称为类的实例。
    定义了对象才创建了类这种类型的物理实体，类和对象的关系是数据类型和变量的关系。

    --c++语言程序设计教程（课本）
    '''
    per = person()#实例
    stu = student()
    tea = teacher()
    print person.school, stu.school, tea.school
    print person.identity, stu.identity, tea.identity


if __name__=="__main__":
    main_1()
