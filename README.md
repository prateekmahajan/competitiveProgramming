# competitive Programming cheatSheet

## Memoization
#### memoization or memoisation is an optimization technique used primarily to speed up computer programs by storing the results of expensive function calls and returning the cached result when the same inputs occur again.

#### Fibonacci code

##### Normal recursive Code
``` Python
def fib(n):
    if n<=2:
        return 1
    return fib(n-1) + fib(n-2)

for i in range(1,11):
    print(fib(i))
```
##### using Memoization technique - storing result of function calls.
``` Python
def fib(n, dicto = {}):
    if n in dicto:
        return dicto[n]
    if n<=2:
        return 1
    dicto[n] = fib(n-1, dicto) + fib(n-2, dicto)
    return dicto[n]

for i in range(1,11):
    print(fib(i))
```
