# Nested Loop
It is also possible to place a loop inside another loop. This is called a **nested loop**.
```C
int i, j;  
  
for (i = 1; i <= 3; i++) {  
  for (j = 1; j <= 3; j++) {  
    printf("%d ", i * j);  
  }  
  printf("\n");  
}
```
