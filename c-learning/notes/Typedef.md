# Typedef
The `typedef` keyword lets you create a new name (an **alias**) for an existing type. This can make complex declarations easier to read, and your code easier to maintain.
```C
#include <stdio.h>  
  
typedef float Temperature;  
  
int main() {  
  Temperature today = 25.5;  
  Temperature tomorrow = 18.6;  
  
  printf("Today: %.1f C\n", today);  
  printf("Tomorrow: %.1f C\n", tomorrow);  
  
  return 0;  
}
```
### Why Use typedef?
- **Simplifies code**: Shorter, easier-to-read type names.
- **Improves clarity**: Expresses intent better (for example, `AGE` instead of just `int`). Also helps avoid confusion when many variables share the same base type (like `float` or `double`).
### typedef with struct
`typedef` can be useful with `struct`, because it lets you avoid writing `struct` every time:
```C
#include <stdio.h>  
  
// Without typedef:  
struct Car {  
  char brand[30];  
  int year;  
};  
  
// With typedef:  
typedef struct {  
  char brand[30];  
  int year;  
} Car;  
  
int main() {  
  struct Car car1 = {"BMW", 1999}; // needs "struct"  
  Car car2 = {"Ford", 1969}; // shorter with typedef  
  
  printf("%s %d\n", car1.brand, car1.year);  
  printf("%s %d\n", car2.brand, car2.year);  
  return 0;  
}
```
**Example-2:**
```C
#include <stdio.h>  
  
// With typedef  
typedef struct {  
  char brand[30];  
  char model[30];  
  int year;  
} Car;  
  
int main() {  
  Car car1 = {"BMW", "X5", 1999};  
  Car car2 = {"Ford", "Mustang", 1969};  
  Car car3 = {"Toyota", "Corolla", 2011};  
  
  printf("%s %s %d\n", car1.brand, car1.model, car1.year);  
  printf("%s %s %d\n", car2.brand, car2.model, car2.year);  
  printf("%s %s %d\n", car3.brand, car3.model, car3.year);  
  
  return 0;  
}
```
