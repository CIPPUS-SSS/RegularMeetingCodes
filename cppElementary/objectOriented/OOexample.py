#coding: utf-8

class person():#基类
    school = 'dlut'
    identity = None
    age = None
    name  = None

class student(person):
    identity = 'student'

class teacher(person):
    identity = 'teacher'

def main_1():
    per = person()#实例
    stu = student()
    tea = teacher()
    print person.school, stu.school, tea.school
    print person.identity, stu.identity, tea.identity


'''以下是廖雪峰的例子'''
class animal():
    def run(self):
        print 'Animal is running.'

class dog(animal):
    def run(self):
        print 'Dog is running.'

    def eat():
        print 'Eating dog food.'

class cat(animal):
    def run(self):
        print 'Cat is running.'

def main_2(obj):
    obj.run()
    # if isinstance(obj,animal):#判断示例类型
    #     obj.run()

if __name__=="__main__":
    # main_2(animal())
    # main_2(dog())
    # main_2(cat())
    main_1()
