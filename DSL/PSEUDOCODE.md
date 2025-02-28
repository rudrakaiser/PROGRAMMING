# PSEUDOCODE

### Pre Order Traversal
```cpp
top = 1  
STACK[top] = NULL  
ptr = Root  

again:  
while (ptr ≠ NULL) {  
    Process Data[ptr] 

    if (Right[ptr] ≠ NULL) {  
        top = top + 1  
        STACK[top] = Right[ptr] 
    }  

    ptr = Left[ptr]
}  

ptr = STACK[top]  
top = top - 1  

if (ptr ≠ NULL) {  
    goto again  
}  

```

---

### In Order Traversal
```cpp
top = 1
STACK[top] = NULL
ptr = Root

Redo:
while (ptr ≠ NULL) {
    top = top + 1
    STACK[top] = ptr
    ptr = left[ptr]
}

ptr = STACK[top]
top = top - 1

while (ptr ≠ NULL) {
    Apply process to data[ptr]

    if (right[ptr] ≠ NULL) {
        ptr = right[ptr]
        go to Redo
    }

    ptr = STACK[top]
    top = top - 1
}
```

---


### Post Order Traversal
```cpp
top = 1  
STACK[top] = NULL  
ptr = Root  

again:  
while (ptr ≠ NULL) {  
    top = top + 1  
    STACK[top] = ptr  

    if (Right[ptr] ≠ NULL) {  
        top = top + 1  
        STACK[top] = -Right[ptr]  
    }  

    ptr = Left[ptr]  
}  

ptr = STACK[top]  
top = top - 1  

while (ptr > 0) {  
    Process Data[ptr]  
    ptr = STACK[top]  
    top = top - 1  
}  

if (ptr < 0) {  
    ptr = -ptr  
    goto again  
}  
```