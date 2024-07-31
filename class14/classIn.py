from class14.classPy import ProgrammingLanguage # equals to #include <blablabla>

def LanguageFun(language : ProgrammingLanguage):
    language.printlanguage()

class Fangyu(ProgrammingLanguage):  #等效于 class abc: blablabla

    def __init__(self):
        self.programmingLanguage = "Fangyu"
    def autoFill(self):
        pass

    @classmethod
    def printlanguage(self):
        print("Hi, I am the new generation of programming language for College Students")

print(dir(Fangyu))
print(dir(ProgrammingLanguage))

a = Fangyu()
b = ProgrammingLanguage()
# a.printlanguage()

LanguageFun(100)