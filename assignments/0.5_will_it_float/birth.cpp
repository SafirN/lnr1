#include <iostream>
#include <typeinfo>

class A { 
public:
   A () {
     std::cout << "default-constructor" << std::endl;    
   }

   A (A const& src) {
     std::cout << "copy-constructor" << std::endl;
     std::cout << "A (A const& src) and src is of type: " << typeid(src).name() << std::endl;
   }

  ~A () {
    std::cout << "destructor" << std::endl;
  }

   A(char const* s) {
      std::cout << "some other constructor" << std::endl;
      std::cout << "A (char const* s) and s is of type: " << typeid(s).name() << std::endl;
   }

   A& operator= (A const& src) {
     std::cout << "the assignment operator" << std::endl;
     std::cout << "A& operator= (A const & src) and src is of type: " << typeid(src).name() << std::endl;
     return *this;
   }
};

void no_ref(A a) {
  std::cout << "void no_ref(A a) and a is of type: " << typeid(a).name() << std::endl;
}
void with_ref(const A & a) {
  std::cout << "void with_ref(const A & a) and a is of type: " << typeid(a).name() << std::endl;
}

int main()
{
    A a("my name is a"); //some other constructor
    std::cout << "Value of a after -- A a(\"my name is a\"); --" << typeid(a).name() << std::endl;
    A b = a;            // copy-constructor
    std::cout << "Value of b after -- A b = a; --" << typeid(b).name() << std::endl;
    A c(a);             // copy-constructor
    std::cout << "Value of c after -- A c(a); --" << typeid(c).name() << std::endl;
    A d;                // forms of initialization?
    std::cout << "Value of d after -- A d; --" << typeid(d).name() << std::endl;
      no_ref (a);       // will this copy the value of `a`?
    with_ref (a);       // will this copy the value of `a`?

    A *aa = new A[5];
    delete aa;          // what will happen?
    return 0;
}
