# Break/Continue
### `Break:`
You have already seen the `break` statement used in an earlier chapter of this tutorial. It was used to "jump out" of a `switch` statement. The `break` statement can also be used to jump out of a **loop**.
```C
int i;

for (i = 0; i < 10; i++) {
  if (i == 4) {
    break;
  }
  printf("%d\n", i);
}
```
### `Continus:`
The `continue` statement breaks one iteration (in the loop), if a specified condition occurs, and continues with the next iteration in the loop.
```C
int i;

for (i = 0; i < 10; i++) {
  if (i == 4) {
    continue;
  }
  printf("%d\n", i);
}
```