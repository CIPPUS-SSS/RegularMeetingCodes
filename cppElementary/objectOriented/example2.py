#coding: utf-8
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
    # obj.run()
        if isinstance(obj,animal):#判断实例类型
            obj.run()

if __name__=="__main__":
        main_2(animal())
        main_2(dog())
        main_2(cat())
