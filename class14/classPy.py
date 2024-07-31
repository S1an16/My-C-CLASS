
class ProgrammingLanguage:
    #
    # private:
    # int a = 0;
    # double b = 4.5
    # a = 0
    # b = 4.5
    def __init__(self):
        self.language = "Python"
        self.programmingLanguage = "C"

    def __app(self): # I am a private method!
        print("So sad...")
        self.language

    # def pppp():
    #     self.language

    def __del__(self):
        print("Now deleting...")

    def __str__(self):
        pass

    def printlanguage(self):
        print("Hi, I am the father of all the language")
    _a = 123

if __name__ == "__main__":
    a = ProgrammingLanguage()
    print(dir(a)) # 展示所有的属性和方法
    a._ProgrammingLanguage__app() # 这不是真正的private！ 太可恶了
    print(a._a)
