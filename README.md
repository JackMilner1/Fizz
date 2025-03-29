# The Fizz Language
***Developed by Jack Milner***
\
\
[!["Buy Me A Coffee"](https://www.buymeacoffee.com/assets/img/custom_images/orange_img.png)](https://buymeacoffee.com/jackmilner)
* A compiled language written for simplicity and reduced typing
* Statically typed language
* Compiler written in C.
## Data Types
* int
* bool
* str
* const
* point
* float
* null
* arrays are data types with [] at the end (int[],str[], etc...)
## Syntax
* out() - displays text to the screen
* f - function declaration
* while
* if
* elif
* else
```
f int fizzbuzz(int n) {
  int i = 1;
  while i <= n {
    if i % 15 == 0 {
      out("fizzbuzz");
    } elif i % 3 == 0 {
      out("fizz");
    } elif i % 5 == 0 {
      out("buzz");
    } else {
      out(i);
    }
    i = i + 1;
  }

  return 90
}

fizzbuzz(15);
```
